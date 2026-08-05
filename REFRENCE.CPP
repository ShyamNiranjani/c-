#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int &max(int&,int&);
void main()
{
	int a=100;
	clrscr();
	int&b=a;
	cout<<"\n a="<<a<<"\t b="<<b;
	a=+100;
	cout<<"\n a="<<a<<"\t b="<<b;
	b-=50;
	cout<<"\n a="<<a<<"\t b="<<b;
	int m=10,n=20,p=30;
	m=max(n,p);
	cout<<"\n m="<<m<<"\tn="<<n<<"\t p="<<p;
	int x=10,y=20,z=30;
	max(x,y)=z;
	cout<<"\n x="<<x<<"\t y="<<y<<"\t z="<<z;
	getch();
}

int &max(int &a,int &b)
{
	if(a>b)
		return a;
	else
		return b;
}

OUTPUT:-
		a=100	b=100
		a=100	b=100
		a=50	b=50
		m=30	n=20	p=30	
		x=10	y=30	y=30
