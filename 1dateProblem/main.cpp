#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int a,b,s;
 cout<<"Please input three number"<<endl;
 cin>>a>>b>>s;
 int n=s-abs(a)-abs(b);
 if (n<0||n%2!=0)
   cout<<"No"<<endl;
 else
   cout<<"Yes"<<endl;
 return 1;
}
