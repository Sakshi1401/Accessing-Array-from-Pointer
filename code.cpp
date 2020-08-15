#include<iostream>

using namespace std;

int main()
{
	int a[5];
	int i,*j;
	cout<<"Enter the Elements:";
	for(i=0;i<5;i++)
	cin>>a[i];
	j=&a[0];
	cout<<"You Entered:\n";
	for(i=0;i<5;i++)
	{
		cout<<*j<<endl;
		j++;
	}
	
return 0;
}
