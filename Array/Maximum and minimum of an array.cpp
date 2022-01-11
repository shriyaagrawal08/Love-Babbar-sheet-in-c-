arr[] = {10,20,15,12,8}
o/p- max element=20 , min element=8
  
Code - 
  
#include<iostream>
#include<climits> // for INT_MIN(-infinity) and INT_MAX(+infinity)
using namespace std;
int main()
{
  int n,key;
  cin>>n //total no of elements
  int arr[1000];
  for(int i=0;i<n;i++) cin>>arr[i];
  int largest=INT_MIN;
  int smallest=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>largest) largest=arr[i];
    if(arr[i]<smallest) smallest=arr[i];
  }
  cout<<"Largest : "<<largest;
  cout<<"Smallest : "<<smallest;
}

Time Complexity=O(N) // N for for loop
Space Complexity = O(1) // 1 for no extra space of array
