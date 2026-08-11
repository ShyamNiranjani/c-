#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,search;
	int found=0;
	clrscr();
	cout<<"Enter 5 Numbers:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter Number Of Search:";
	cin>>search;
	for(i=0;i<5;i++)
	{
		if(a[i]==search)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		cout<<"\nNumber Is At Position "<<i+1;
	}
	else
	{
		cout<<"\nNumber Is Not Found";
	}
	getch();
}