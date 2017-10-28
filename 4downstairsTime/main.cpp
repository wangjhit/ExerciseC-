#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long  n,m,t1,t2,t3,t4;
    cin>>n>>m;
    cin>>t1>>t2>>t3>>t4;
    long T1= t1*(abs(n-m))+2*t2+t3+t1*(n-1);
    long T2=t4*(n-1);
    if(T1<T2)
       cout<<T1<<endl;
    else
        cout<<T2<<endl;
    return 0;
}
