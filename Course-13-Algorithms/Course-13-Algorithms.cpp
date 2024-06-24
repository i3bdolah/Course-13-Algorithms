#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
	clsQueueLine PaymentLine("A0", 10);

	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();
	PaymentLine.IssueTicket();

	cout << "------------------\n";
	cout << "PaymentLine Info\n\n";
	PaymentLine.PrintInfo();
	cout << "------------------\n";

	PaymentLine.PrintWaitingTicketsRTL();
	PaymentLine.PrintWaitingTicketsLTR();

	cout << "\n\n";
}