#include<iostream>
using namespace std;
int main()
{
	float x,y;
	char ch;
	cout<<"enter the fisrt and second number";
	cin>>x>>y;
	cout<<"enter\n+ for add\n- for sub\n* for multiply\n/ for div\n";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"add="<<(x+y);
			break;
		case '-':
			cout<<"sub="<<(x-y);
			break;
		case '*':
			cout<<"multiply="<<(x*y);
			break;
		case '/':
			cout<<"div="<<(x/y);
			break;
		default:
			cout<<"invalid input!!";
		}
	return 0;
}
