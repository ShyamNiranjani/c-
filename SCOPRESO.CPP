#include<iostream.h>
#include<conio.h>
int a=10;
void main()
{
	int a=100;
	{
		int a=1000;
		clrscr();
		cout<<"\n a="<<a;
		cout<<"\n ::a="<<::a;
	}
	cout<<"\n a="<<a;
	cout<<"\n ::a="<<::a;

	getch();
}

OUTPUT:-
			a=1000
			::a=10
			a=100
			::a=10
