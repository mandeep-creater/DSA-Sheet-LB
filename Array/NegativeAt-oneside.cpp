//5.Move all the negative elements to one side of the array 

#include<iostream>

#include <bits/stdc++.h>
using namespace std;
void move(vector<int> &arr )
{
  
  
    sort(arr.begin(), arr.end()); 

}



int main()
{
   vector <int> arr={-7 ,10, 4, 3, -20, 15,-78};
       
       
    move(arr);

    for(int i:arr)
    {
        cout<<i<<" ";
    }
       
    return 0;
}