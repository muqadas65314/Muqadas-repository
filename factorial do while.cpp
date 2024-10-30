#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	long F=1.0;
	cout<<"enter no ";
	cin>>n;
	do
	{
		F=F*i;
		i++;
	}
	while(i<=n);
	cout<<"factorial is :"<<F;
	return 0;
}



