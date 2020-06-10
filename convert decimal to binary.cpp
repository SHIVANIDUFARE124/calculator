#include<stdio.h>
#include<conio.h>
int main()
{
	int dec,temp,i,j=1,binary=0;
	printf("enter the number to convert binary number:");
	scanf("%d",&dec);
	temp=dec;
	while(temp!=0)
	{
		i=temp%2;
		binary=binary+(i*j);
		temp=temp/2;
		j=j*10;
	}
	printf("the binary of given number of %d is %d",dec,binary);
	return 0;
}
