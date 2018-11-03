#include<iostream>
using namespace std;
int main()
{
	//declare char string and pointer
	char name[15]={'M','o','n','a','l','i','s','a',' ','B','e','h','e','r','a'};
	char *s;
	cout<<"printing the array elements using normal index method";
	for(int i=0;name[i]!=0;i++)
	cout<<" "<<name[i];
	cout<<"printing the array elements using pointer method";
	s=name;
	for(int i=0;*s!=0;i++)
	{	cout<<" "<<*s;
		s++;
	}
		cout<<"n";
		return 0;
	}
