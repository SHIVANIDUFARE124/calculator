#include<iostream>
using namespace std;
class complex
{
	int a,b,c,d,e,f;
	public:
		complex()
		{
			cout<<"enter the first number"<<endl;
			cin>>a>>b;
			cout<<"first complex number"<<a<<"-"<<b<<"i";
			cout<<"enter the second complex number"<<endl;
			cin>>c>>d;
			cout<<"second complex number"<<c<<"-"<<d<<"i";
			
		}
		void display()
		{
			e=a-c;
			f=b-d;
			cout<<"subtract the complex number"<<e<<"-"<<f<<"i";
			
		}
};
int main()
{
	complex n;
	n.display();
	return 0;
	
}
