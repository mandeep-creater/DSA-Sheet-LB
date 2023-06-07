//2.Find the maximum and minimum element in an array

#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int arr[]={1,3,5,7,9};
int n =sizeof(arr)/sizeof(arr[0]);
   int Max=INT_MIN;
    int Min= INT_MAX;

     for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
      Min=min(Min,arr[i]);
    }
    cout<<"The Max is :"<<Max<<endl;
    cout<<"The MIn is :"<<Min<<endl;
  
    
    return 0;
}