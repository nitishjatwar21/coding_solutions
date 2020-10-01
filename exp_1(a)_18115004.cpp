#include<bits/stdc++.h>
using namespace std;
void prtnm()
{
  cout<<"Name:    Ajay Kumar\n";
  cout<<"Roll No: 18115004 \n";
  cout<<"Prg. No: 1(a)\n";
  cout<<"\n\n";
}
 int main()
{
    prtnm();
    int i,j,temp,n,pos,val;
    printf("Enter No. of element = ");
    cin>>n;
int ar[n];
    printf("Enter array of value\n");
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    printf("Enter your value to be inserted = ");
    cin>>val;
    printf("Enter position on which you want to insert = ");
    cin>>pos;
    temp=n-1;
    pos=pos-1;
    while(temp>=pos)
    {
        ar[temp+1]=ar[temp];
        temp=temp-1;
    }
    ar[pos]=val;
    n=n+1;
    printf("Your new array is \n");
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";

    }


}
