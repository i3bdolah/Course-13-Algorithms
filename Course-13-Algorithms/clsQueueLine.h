#pragma once
#include <string>
#include <queue>
#include "Date.h"

using namespace std;

class clsQueueLine
{
private:

	struct Ticket
	{
		string HeadCode;
		string DateCreated;
		string TimeCreated;
		int WaitingClients;
		int ServingTime;

		Ticket(
			string HeadCode,
			int WaitingClients,
			int ServingTime
		) {
			this->HeadCode = HeadCode;
			this->DateCreated = Date().GetDateInString();
			this->TimeCreated = Date::GetSystemTime();
			this->WaitingClients = WaitingClients;
			this->ServingTime = ServingTime;
		}

		void PrintInfo() {
			cout << HeadCode << "\n\n";
			cout << DateCreated + " - " + TimeCreated << endl;
			cout << "Waiting Clients = " << WaitingClients << endl;
			cout << "Serve Time In " << ServingTime << " Minutes." << endl;
			cout << "-------------------------" << endl;
		}
	};

	queue <Ticket> _QueueLine;
	string _Prefix;
	int _TimePerClient = 0;
	int _TotalTickets = 0;

	int _GetWaitingClients() {
		return _QueueLine.size();
	}

	int _GetServedClients() {
		return _TotalTickets - _GetWaitingClients();
	}

	int _GetServingTime() {
		return _GetWaitingClients() * _TimePerClient;
	}

	string _GetHeadCode() {
		return _Prefix + to_string(_TotalTickets + 1);
	}
public:

	clsQueueLine(string Prefix, int TimePerClient) {
		_Prefix = Prefix;
		_TimePerClient = TimePerClient;
	}

	void PrintInfo() {
		cout << "Prefix          : " << _Prefix << endl;
		cout << "Total Tickets   : " << _TotalTickets << endl;
		cout << "Served Clients  : " << _GetServedClients() << endl;
		cout << "Waiting Clients : " << _GetWaitingClients() << endl;
	}

	void IssueTicket() {
		Ticket newTicket(
			_GetHeadCode(),
			_GetWaitingClients(),
			_GetServingTime()
		);
		_QueueLine.push(newTicket);

		_TotalTickets++;
	}

	void PrintWaitingTicketsRTL() {
		if (_QueueLine.empty())
		{
			cout << "No Tickets Found." << endl;
			return;
		}

		queue <Ticket> temp = _QueueLine;

		while (!temp.empty())
		{
			cout << temp.front().HeadCode << " <-- ";
			temp.pop();
		}
	}

	void PrintWaitingTicketsLTR() {
		if (_QueueLine.empty())
		{
			cout << "No Tickets Found." << endl;
			return;
		}

		queue <Ticket> temp;
		int size = _QueueLine.size();

		// I know that I could've used stack d.s. to reverse it but I choose to challenge myself and implement it hence the complixity is not my main goal in this project.
		while (size != 0)
		{
			queue <Ticket> queueLineCopy = _QueueLine;
			for (int i = 0; i < size - 1; i++)
			{
				queueLineCopy.pop();
			}
			temp.push(queueLineCopy.front());
			size--;
		}

		while (!temp.empty())
		{
			cout << " --> " << temp.front().HeadCode;
			temp.pop();
		}
	}

	void PrintAllTickets() {
		if (_QueueLine.empty())
		{
			cout << "No Tickets Found." << endl;
			return;
		}

		queue <Ticket> queueLineCopy = _QueueLine;

		cout << "\n-------------------------" << endl;
		while (!queueLineCopy.empty()) {
			queueLineCopy.front().PrintInfo();
			queueLineCopy.pop();
		}
	}

	bool ServeNextClient() {
		if (_QueueLine.empty())
			return false;
		else
			_QueueLine.pop();
		return true;
	}

	string WhoIsNext() {
		if (_QueueLine.empty())
			return "No Clients Left.";
		else
			return _QueueLine.front().HeadCode;
	}
};

