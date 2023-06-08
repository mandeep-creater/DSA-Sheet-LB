//// 7.Find the Intersection of the two sorted arrays.

#include <bits/stdc++.h>
using namespace std; 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
		int i=0;int j=0;
	// Write your code here.
	vector<int > ans;

	while(i<n && j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;

		}else if(arr1[i]<arr2[j]){

			i++;
		}else{

			j++;
		}
		
	}
    	
        return ans;

}

int main()
{
  vector  <int> arr1={1,2,4,5,8};
  vector  <int>  arr2={3,5,8,9,2,4};
     
     int n=arr1.size();
     int m = arr2.size();
   
 cout<<"The Size of Array Intersection is :"<<endl;
  int = findArrayIntersection(arr1 , arr2,n,m);
 
  cout<<res<<" ";
 
    return 0;
}