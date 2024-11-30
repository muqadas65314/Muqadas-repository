#include<iostream>
using namespace std;
int i=0;
void add(int a[])
{
cout<<"enter numbers for addition  "<<endl;	
cin>>a[i];

cout<<"added successfullly  "<<a[i]<<endl;
i++;
}
void exit(int a[])

{
	
}
void search(int a[])
{
	int n;
	cout<<"enter number for search :  "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"your  searched number is ="<<a[j] <<endl;
		}
	}
}
	void update(int a[])
{
	int n;
	cout<<"enter previse number  for update :  "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<" ENETR your  new number  =" <<endl;
			cin>>a[j];
			cout<<"  your  new number  ="<<a[j] <<endl;
		}
	}
}
	void  del(int a[])
{
	int n;
	cout<<"enter  number you want to delete  :  "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			for(int k=j;k<i;k++)
		   {
			 	a[k]=a[k+1];
				 
	        }
		}
	i--;
	break;
        }
}
	void  show(int a[])
{
	
	for(int j=0;j<i;j++)
	{
	
			cout<<"your values   "<<a[j]<<endl;
        
}
}
int main()
{
	
	int ch;
	
		cout<<"\t\t\t***HELLO we are performing cruad*** "<<endl;
		
		
        cout<<"\n\t\t\t\t\t---- MENU----  "<<endl;
	cout<<"press 1 for  addition  "<<endl;
	cout<<"press 2 for  delete "<<endl;
	cout<<"press 3 for search   "<<endl;
	cout<<"press 4 for  update "<<endl;
	cout<<"press 5 for  show  "<<endl;
	cout<<"press 6 for  exit  "<<endl;
p:
		cout<<"--------------------------\n--------------------------  "<<endl;
		cout<<"enter your choice :  "<<endl;
	cin>>ch;
	int a[20];
	switch(ch)
	{
		case 1:
			add(a);
			break;
			case 2:
			del(a);
			break;
			
			case 3:
			search(a);
			break;
			
			case 4:
			update(a);
			break;
			
		case 5:
			show(a);
			break;
			
			case 6:
			exit(0);
			return 0;
			
			default:
				cout<<"invalid input........enter number from 1 to 6   "<<endl;;
			break;
			
			
			
	}
	goto p;
	 return 0;
	
}