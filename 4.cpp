#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for( int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"."<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for( int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=0;k<=2*n-2*i-2;k++)
        {
            cout<<"."<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        
        
        cout<<endl;
    }
    return 0;

}