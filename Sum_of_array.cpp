#include <iostream>
using namespace std;
int main()
{
   int arr[100],i,size,sum=0;
   cout<<"Enter the number of elements: ";
   cin>>size;
   cout<<"Enter the value of elements: "<<endl;
   for(i=0;i<size;i++)
   {
     cin>>arr[i];
   }

   for(i=0;i<size;i++)
   {
    sum=sum+arr[i];
   }
    cout<<"Sum of elements in an array is: "<<sum;
    return 0;
}
