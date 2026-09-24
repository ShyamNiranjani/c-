//Parameterized Constructor (Consturctor With Argument)
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A (int x,int y//Parameterized Constructor
		{
			cout<<"\nParameterized Constructor";
			a = x;
			b = y;
		}
		void put()
		{
			cout<<"\n a = "<<a<<"\t b = "<<b;
		}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter Two Numbers:";
	cin>>x>>y;
	//A a2;
	A a1(x,y);
	a1.put();
	getch();
}