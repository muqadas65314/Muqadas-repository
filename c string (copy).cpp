#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 char  source[]="hello world";
 char des[50];
 strcpy(des,source);
 cout<<"source"<<source;
 cout<<"destination"<<des;

return 0;

}