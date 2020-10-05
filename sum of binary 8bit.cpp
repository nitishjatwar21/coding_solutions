#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int a,b,r1=0,r2=0,n1=0,n2=0,n3=0,s,c=0,i=0;
    cin>>a>>b;
    while(a>0)
    {
       r1=a%10;
       a/=10;
       r2=b%10;
       b/=10;
       s=r1+r2+c;
       if(s==0)
       {
           s=0;
           c=0;
       }
       else if(s==1)
       {
           s=1;

           n1=n1+s*pow(10,i);
           c=0;

       }
        else if(s==2)
       {
           s=0;
           c=1;
       }
        else if(s==3)
       {
           s=1;

           n1=n1+s*pow(10,i);
           c=1;
       }

        i++;
    }
    cout<<endl;
    n2=c*pow(10,i);
    cout<<n1+n2;
    return 0;
}
