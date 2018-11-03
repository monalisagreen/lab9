#include<iostream>
using namespace std;
int main()
{
	int ar[10]= {1,2,3,4,5,6,7,8,9,10};
	int *p;
	cout<<" printing the array elements using normal index method";
	for (int i=0;i<10; i++)
	cout<<" "<<ar[i];
	cout<<"printing array elements using normal index method";
	p=ar;
	for(int i=0; i<10;i++)
	{	cout<<" "<<*p;
		p++;
		} cout<<"n";
	return 0;
	}
