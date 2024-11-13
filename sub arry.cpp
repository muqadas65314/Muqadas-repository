#include<iostream>
using namespace std;
int main()
{
	int row,col;
	int sub=0;
	
	cout<<"enter number of rows :";
	cin>>row;
	cout<<"enter number of columns :";
	cin>>col;
	int arr[row][col];
	cout<<"element of arrys ";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Elements["<<i<<"]["<<j<<"]";
			cin>>arr[i][j];
				sub=arr[i][j]-sub;
				
		}
	}
		cout<<"\n the 2d arry is :\n";
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;	
		
		}
		cout<<"sub is  is "<<sub;
	
	return 0;
	
}
