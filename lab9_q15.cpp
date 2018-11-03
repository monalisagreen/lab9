#include<iostream>
using namespace std;
int main()
{
	char a[16],*s,*m;
	cout<<"enter a string";
	cin>>a;
	m=a;
	while(*m!=0)
	{
		s=m;
	while(*s!=0)
	{	cout<<" "<<*s;
		s++;}
	cout<<endl;
	m++;
	}
		return 0;
	}
