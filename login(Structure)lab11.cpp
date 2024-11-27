#include<iostream>
using namespace std;
struct login
{
	string user;
	int  password;
	
};
int main()
{
	login L;
	cout<<"Enter Username :"<<endl;
	cin>>L.user;
	cout<<"Enter password: "<<endl;
	cin>>L.password;
	
	if(L.user=="muqadas"&&L.password==1234)
	{
		
		cout<<"--------WELCOME LOGIN SUCCESSFULLY-----------"<<endl;}
		
	else
	{
		cout<<"-------invalid------"<<endl;
		
		}	
	
	return 0;
}