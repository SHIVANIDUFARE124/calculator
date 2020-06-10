#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,result,choice;
	printf("\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			result=a+b;
			printf("result=%d",result);
			break;
		case 2:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			result=a-b;
			printf("result=%d",result);
			break;
		case 3:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			result=a*b;
			printf("result=%d",result);
			break;
	}
	getch();
}
