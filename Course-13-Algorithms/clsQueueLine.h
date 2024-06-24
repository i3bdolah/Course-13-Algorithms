#pragma once
#include <string>
#include "clsMyQueueArr.h"
#include "Date.h"

using namespace std;

class clsQueueLine
{
private:

	struct Ticket
	{
		string HeadCode;
		Date CreatedAt;
		int WaitingClients;
		int ServingTime;
		
		Ticket() {}

		Ticket(
			string HeadCode,
			Date CreatedAt,
			int WaitingClients,
			int ServingTime
		) {
			this->HeadCode = HeadCode;
			this->CreatedAt = CreatedAt;
			this->WaitingClients = WaitingClients;
			this->ServingTime = ServingTime;
		}
	};

	clsMyQueueArr <Ticket> _QueueLine;
	string _Prefix;
	int _TimePerClient = 0;
	int _TotalTickets = 0;

	int _WaitingClients() {
		return _QueueLine.Size();
	}

	int _ServedClients() {
		return _TotalTickets - _QueueLine.Size();
	}

	int _ServingTime() {
		return _WaitingClients() * _TimePerClient;
	}

	string _GenerateHeadCode() {
		return _Prefix + "-" + to_string(_TotalTickets + 1);
	}
public:

	clsQueueLine(string Prefix, int TimePerClient) {
		_Prefix = Prefix;
		_TimePerClient = TimePerClient;
	}

	void PrintInfo() {
		cout << "Prefix          : " << _Prefix << endl;
		cout << "Total Tickets   : " << _TotalTickets << endl;
		cout << "Served Clients  : " << _ServedClients() << endl;
		cout << "Waiting Clients : " << _WaitingClients() << endl;
	}

	void IssueTicket() {
		Ticket newTicket(
			_GenerateHeadCode(),
			Date(),
			_WaitingClients(),
			_ServingTime()
		);
		_QueueLine.Push(newTicket);

		_TotalTickets++;
	}

	void PrintWaitingTicketsRTL() {
		clsMyQueueArr <Ticket> temp = _QueueLine;
		
		while (!temp.IsEmpty())
		{
			cout << temp.Front().HeadCode << " <-- ";
			temp.Pop();
		}
	}

	void PrintWaitingTicketsLTR() {
		clsMyQueueArr <Ticket> temp = _QueueLine;
		temp.Reverse();

		while (!temp.IsEmpty())
		{
			cout << temp.Front().HeadCode << " --> ";
			temp.Pop();
		}
	}
};

