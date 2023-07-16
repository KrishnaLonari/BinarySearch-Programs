#include<iostream>
using namespace std;
int firstOccurrence(int arr, int n, int target)
{
  int low=0, high=n-1;
  int ans=-1;
while(low<=high)
{
int mid =(low+high)/2;
//check if the target is equal to the middle element 
if(arr[mid]==target)
{
  ans=mid;
  //check the occurence in the LHS 
  high=mid-1;
}
//if the target element is greater than the middle element the eliminate LHS 
if(arr[mid]<target)
{
  low=mid-1;
}
else{
  high=mid+1
    }
}
  return ans;
}
int main()
{
  //creating a array and assigning the value to the array
   int arr[] = {1,3,3,4,4,4,4,5,6};
    int target=4;
    int n = 9;
    int var = firstOccurrence(arr,n,target);
    cout<<endl;
    cout<<"First Occurrence At Index "+var;
}
