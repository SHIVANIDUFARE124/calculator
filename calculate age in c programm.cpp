#include<stdio.h>
#include<conio.h>
int main()
{
	int y,y1,y2,m1,m2,m,d1,d2,d,daysinmon[]={31,31,28,31,30,31,31,30,31,31,30,31,30,31,30,31};
	printf("enter your dob(dd mm yyyy)");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("enter current date [dd mm yyyy]");
	scanf("%d%d%d",&d2,&m2,&y2);
	d=d2-d1;
	m=m2-m1;
	y=y2-y1;
	if(d2<d1)
	{
		m2--;
		if(m2==2&&((y2%4==0&&y2%100!=0)||(y2%400==0)))
		{
			daysinmon[2]++;
		}
		d2+=daysinmon[m2];
		d=d2-d1;
	}
	if(m2<m1)
	{
		y--;
		m=m2+12-m1;
	}
	printf("the age of the person is %d years %d months %d days",y,m,d);
	return 0;
}



