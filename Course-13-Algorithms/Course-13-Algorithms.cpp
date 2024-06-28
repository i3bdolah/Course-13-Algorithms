#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
	clsQueueLine PaymentLine("A0", 17);

	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();

	cout << "PrintWaitingTicketsRTL() : \n";
	PaymentLine.PrintWaitingTicketsRTL();
	cout << "\n\nPrintWaitingTicketsLTR() : \n";
	PaymentLine.PrintWaitingTicketsLTR();

	cout << "\n\n";
	PaymentLine.PrintAllTickets();
	cout << "\n\n";

	cout << "----\n";
	cout << "PaymentLine Info\n\n";
	PaymentLine.PrintInfo();
	cout << "----\n";

	cout << "----\n";
	cout << "After Serving One Client : \n";
	PaymentLine.ServeNextClient();
	PaymentLine.PrintInfo();
	cout << "----\n";


	cout << "----\n";
	cout << "After Issuing One Client : \n";
	PaymentLine.IssueTicket();
	PaymentLine.PrintInfo();
	cout << "----\n";

	cout << "----\n";
	cout << "After Issuing One Client : \n";
	PaymentLine.IssueTicket();
	PaymentLine.PrintInfo();
	cout << "----\n";

	PaymentLine.PrintAllTickets();

	cout << "\n\nAfter Serving All Clients WhoIsNext() : " << endl;
	PaymentLine.ServeNextClient();
	PaymentLine.ServeNextClient();
	PaymentLine.ServeNextClient();
	PaymentLine.ServeNextClient();
	PaymentLine.ServeNextClient();
	PaymentLine.ServeNextClient();
	cout << PaymentLine.WhoIsNext() << endl; 


	cout << "\n\n";
}