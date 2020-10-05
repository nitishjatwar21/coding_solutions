#include<iostream>
using namespace std;
int main()
{
    int n,r=0,temp=0,k=0;
    cin>>n>>r;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int l=0;l<r;l++)
    {
        temp=a[0];
       for(int i=0;i<n;i++)
       {

          k=i+1;
          if(i+1==n)
          a[i]=temp;
          else
          a[i]=a[k];
       }

    }
    for(int l=0;l<n;l++)
    {cout<<a[l]<<" ";
    }

    return 0;

}
