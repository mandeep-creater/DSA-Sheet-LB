    //1.Reverse the array

#include<iostream>
using namespace std;
void reverseArr(int arr[], int s , int e)
{
        if(s>=e)
        return;

        int temp =arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        reverseArr(arr,s+1,e-1);
}

void printArr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
}
int main()
{
    int arr[]={1,3,5,7,9};

    cout<<"Original Array "<<endl;
    printArr(arr,5);

    reverseArr(arr,0,4);

    cout<<endl;
    cout<<"Reverse Array "<<endl;
    
    printArr(arr,5);
    return 0;
}