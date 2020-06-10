#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int binary,temp,i,inc=0,decimal=0;
	cout<<"enter the binary number:";
	cin>>binary;
	temp=binary;
	while(temp!=0)
	{
		i=temp%10;
		decimal=decimal+(i*(pow(2,inc)));
		temp=temp/10;
		inc++;
	}
	cout<<"the decimal of given number is="<<decimal;
	return 0;
}
