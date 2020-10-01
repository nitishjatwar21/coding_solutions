
#include<bits/stdc++.h>
using namespace std;
void prtnm()
{
  cout<<"Name:    Ajay Kumar\n";
  cout<<"Roll No: 18115004 \n";
  cout<<"Prg. No: 2\n";
  cout<<"\n\n";
}
int main()
{
    prtnm();
    int i,j,temp=1,n,max,min,pos=1;
    printf("Enter No. of element = ");
    cin>>n;
    int ar[n];
    printf("Enter array of value\n");
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
    }
    max=ar[0];
    for(i=0;i<n;i++)
    {
        if(max<ar[i])
        {

            max=ar[i];
            pos=i+1;
        }
    }
    printf("Max value is = %d and index = %d\n",max,pos);

    min=ar[0];
    for(i=0;i<n;i++)
    {
        if(min>ar[i])
        {

            min=ar[i];
            temp=i+1;
        }
    }
    printf("Min value is = %d and index = %d",min,temp);



}

