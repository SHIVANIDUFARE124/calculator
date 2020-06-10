#include<iostream>
using namespace std;
int main()
{
	float amt,creditamt,debitamt;
	char ch;
	cout<<"enter your initial amount";
	cin>>amt;
	cout<<"enter\n c for credit\nd for debit\nb for balance";
	cin>>ch;
	switch(ch)
	{
		case 'c':
			cout<<"enter credit amount";
			cin>>creditamt;
			amt=amt+creditamt;
			cout<<"new amount="<<amt;
			break;
		case 'd':
			cout<<"enter debit amount";
			cin>>debitamt;
			if(amt>=debitamt)
			{
				amt=amt-debitamt;
				cout<<"new amount="<<amt;
			}
			else
			cout<<"insufficent amount";
			break;
		case 'b':
			cout<<"amount in your account="<<amt;
			break;
		default:
			cout<<"invalid input!!";
			
				}
				return 0;
}
