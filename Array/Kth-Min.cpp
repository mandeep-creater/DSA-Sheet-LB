//3.Find the "Kth" min  element of an array 
#include<iostream>

#include <bits/stdc++.h>
using namespace std;
int  Kthsmallest(int arr[] , int e , int k)
{
  
  
    sort(arr, arr+e+1);
         

  return arr[e-k];
   

}



int main()
{
    int arr[]={7 ,10, 4, 3, 20, 15};
        int k=3;
       
       int n=kthsmallest(arr, 5,k)
        cout<<"the Kth Max is "<<n ;
    return 0;
}