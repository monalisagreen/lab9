#include<iostream>
using namespace std;
int main()
{
	char a[20],*s,*m,i=0;
	cout<<"enter a string";
	cin>>a;
	while(a[i]!=0)
	i++;
	m=&a[i-1];
	while(*m!=a[0])
	{
		s=m;
	while(*s!=0)
	{	cout<<" "<<*s;
		s++;}
	cout<<endl;
	m--;
	}
		while(*m!=0)
	{   cout<<" "<<*m;
		m++;}
	cout<<"n";
		return 0;
	}
