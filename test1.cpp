#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string a;
	while(1)
	{
		cin>>a;
		if(a == "Dian")
		{
			cout<<"2022"<<endl;
		}
		else if(a == "Quit")
		{
			break;	
		}	
		else
		{
			cout<<"Error"<<endl;
		}
	}	
	return 0;
} 
