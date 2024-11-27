#include<iostream>
using namespace std;
struct book
{
	char title[20];
	char author[20];
	int page,publication;
	
};
int main()
{
	book b1[5];
	
for(int i=0;i<5;i++)
{
	cout<<"Enter detail for book-"<<i+1<<endl;
	cout<<" Enter book title : "<<endl;
	cin.ignore();
	cin.getline(b1[i].title,20);
		cout<<" Enter Author : "<<endl;
			cin.getline(b1[i].author,20);
			cout<<"Enter book pages : "<<endl;
			cin>>b1[i].page;
				cout<<" Enter book publication year : "<<endl;
					cin>>b1[i].title,20;
					cout<<"--------------------- "<<endl;
	
}
cout<<"---------------------\nBook information\n---------------- "<<endl;
for(int i=0;i<5;i++)
{
	cout<<"Title: "<<b1[i].title<<endl;
	cout<<"Author: "<<b1[i].author<<endl;
	cout<<"pages: "<<b1[i].page<<endl;
	cout<<"publication: "<<b1[i].publication<<endl;
}

return 0;
}




