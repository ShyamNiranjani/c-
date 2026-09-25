//
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		A()//default com
		{
			cout<<"\nDefault Constructor";
			a = 0;
		}
		A(int x)//Parametrized Constructor
		{
			cout<<"\nParameterized Constructor";
			a = x;
		}
		void put()
		{
			cout<<"\na = "<<a;
		}
		friend A sum(A a1,A a2);
};
A sum(A a1,A a2)
{
	A a3;
	a3.a = a1.a + a2.a;
	return(a3);
}
void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter Two Number :";
	cin>>x>>y;
	A a1(x);
	A a2=y;
	A a3;

	a3 = sum(a1,a2);

	a1.put();
	a2.put();
	a3.put();
	getch();
}