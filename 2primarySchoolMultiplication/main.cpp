#include <iostream>

using namespace std;

int main()
{
    int i ,j,n;
    cout<<"x"<<" ";
    for(i=1;i<=6;i++)
        cout<<i<<" ";
        cout<<endl;
    for (i=1;i<=6;i++)
    {
        cout<<i<<" ";
        for(j=1;j<=6;j++)
        {

            n=i*j;
            cout<<n<<" ";

        }
        cout<<endl;
    }

    return 0;
}
