#include<iostream.h>
#include<conio.h>
#include<string.h>
class String
{
	int len;
	char *nm;
	public:
		String()    //Default cons
		{
			len=0;
			nm=new char[len + 1];
		}
		String(char *s)   //parameterized constructor
		{
			len = strlen(s);
			nm = new char[len + 1];
			//nm = s;
			strcpy(nm,s);
		}
		void put()
		{
			cout<<"\n Name = "<<nm;
		}
		friend String operator + (String s1,String s2);
		int operator == (String);
};
String operator+(String s1,String s2)
{
	String s3;
	s3.len = s1.len + s2.len;
	s3.nm = new
	char[s3.len + 1];
	strcpy(s3.nm,s1.nm);
	strcat(s3.nm,s2.nm);
	return(s3);
}
int String::operator == (String s2)
{
	if(strcmp(nm,s2.nm) == 0)
		return 1;
	else
		return 0;
}
void main()
{
	char nm1[20],nm2[20];
	clrscr();
	cout<<"Enter Two Strings :";
	cin>>nm1>>nm2;
	String s1(nm1),s2(nm2),s3;
	s3 = s1 + s2;   //s3 = opreator + (s1,s2);

	s1.put();
	s2.put();
	s3.put();

	if(s1 == s2)
	{
		cout<<"\n Same";   //if(s1.opreator == (s2))
	}
	else
	{
		cout<<"\n Not Same";
	}
	getch();
}