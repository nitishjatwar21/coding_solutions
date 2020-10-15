#include <bits/stdc++.h>
using namespace std;
    int main()
    {
       long int t;

       cin>>t;
        for(int p=1;p<=t;p++)
        {
            int n=0;
         cin>>n;
         int a[n],m=0,sum=0,l,s=0;
            for(int i=0;i<n;i++)
            {
              cin>>a[i];
              sum=sum+a[i];
            }
            sum/=n;
            for(int j=0;j<n;j++)
            {
               if(a[j]==sum)
             {
                 cout<<j+1<<"\n";
                 l=1;
                 break;
             }
            }
            if(l==0)
                cout<<"Impossible"<<"\n";
    return 0;
    }
