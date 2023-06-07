//4.Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting 

#include<iostream>
using namespace std;
void sort012(int a[], int n)
    {
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                low++;
                mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }
    
int main()
{
    int arr[]= {0 ,2 ,1, 2 ,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]; 
    }
    return 0;
}



// or
/*

 int i=0,countone=0,countzero=0,couttwo=0;
   while(i<n)
   {
      if(arr[i]==0)
      {
         countzero=countzero+1;
      }

      else if(arr[i]==1)
      {
         countone=countone+1;
      }
      else{
         couttwo=couttwo+1;
      }
      i++;
   }
      for  ( i = 0 ; i < countzero ; i++ )  
    {  
        arr [ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        arr [ i ] = 1 ;  
    }  
            for ( i = countzero + countone ; i < n ; i++ )  
    {  
        arr [ i ] = 2 ;  
    }


*/