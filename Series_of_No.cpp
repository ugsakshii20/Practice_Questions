#include<iostream>
using namespace std;

int main()
{
int num[100],n;
int a,i,j;
cout<<"enter the number you want to sort ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter number"<<endl;
cin>>num[i];
}

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++){
 if(num[i]<num[j])
    {
     a=num[i];
     num[i]=num[j];
     num[j]=a;
     }
    }
    }
    cout<<"assending order is "<<endl;
    for(i=0;i<n;i++)
    {
    cout<<" "<<num[i]<<endl;
    }
return 0;
}
