#include<iostream>
using namespace std;
int main()
{
	int num,num1,i,m,gcd,hcf;
	cout<<"enter the first and second number";
	cin>>num>>num1;
	for(i=1;i<=num;i++)
	{
		if(num%i==0&&num1%i==0)
		{
			gcd=i;
			cout<<gcd<<endl;
			}
	}
	cout<<gcd<<"is gcd of"<<num<<"and"<<num1<<endl;
	return 0;
}
