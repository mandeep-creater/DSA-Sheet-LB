// 6.Find the Union  of the two sorted arrays.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getunion( int arr1[] , int arr2[] , int n1, int n2 )  
{
    
   int i=0,j=0, unionSize=0;
   while(n1>i && n2>j)
   {
    if(arr1[i]<arr2[j])
    {
        unionSize++;
        i++;
    }
    else if(arr1[i]>arr2[j])
        {
            unionSize++;
            j++;
        }
        else if(arr1[i] == arr2[j])
            {
                i++;
                j++;
            }
        else
            {
                  unionSize++;
                    i++;
                    j++; 
            }
   }

   while(i < n1)
   {
        unionSize++;
        i++;
   }

   while(j < n2)
   {
        unionSize++;
        j++;
   }
   
   return unionSize;
/*
    STL mee answer
   set<int> s;

   for(int i= 0 ; i<n1 ; i++)
   {
    s.insert(arr1[i]);
   }

   for(int i= 0 ; i<n2 ; i++)
   {
    s.insert(arr2[i]);
   }
   return s.size();
   */
}


int main()
{
    int arr1[]={1,2,4,5,8};
    int arr2[]={3,5,8,9,2,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
   

   int res= getunion(arr1 , arr2,n1,n2);
   cout<<"The Size of Array Union is :"<< res <<endl;
    return 0;
}