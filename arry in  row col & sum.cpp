#include<iostream>
using namespace std;
int main()
{
	int  row, col;
	int sum=0;
	float avg=0.0;
	
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
				sum=sum+arr[i][j];
				float element=row *col;
				avg=sum/element;
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
		cout<<"sum is "<<sum;
		
		cout<<"\n average is "<<avg;
	
	return 0;
	
}








