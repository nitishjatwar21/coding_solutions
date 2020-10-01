
#include<bits/stdc++.h>
using namespace std;
void prtnm()
{
  cout<<"Name:    Ajay Kumar\n";
  cout<<"Roll No: 18115004 \n";
  cout<<"Prg. No: 3\n";
  cout<<"\n\n";
}
int main()
{
    prtnm();
    int i,j,temp=1,n,max,min,pos,ele,f=0;
    printf("Enter No. of element = ");
    cin>>n;
    int ar[n];
    printf("Enter array of value\n");
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
    }
    printf("Enter your value to be searched = ");
    cin>>ele;
    for(i=0;i<n;i++)
    {
     if(ar[i]==ele)
     {
         f=1;
         pos=i+1;
     }
    }
    if(f==1)
    {
        printf("Your value is in %d position",pos);
    }
    else{
        printf("Element not found");
    }


}
