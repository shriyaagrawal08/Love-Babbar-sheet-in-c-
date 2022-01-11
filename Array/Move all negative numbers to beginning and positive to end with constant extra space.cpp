Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Note: Order of elements is not important here.
  
Explanation - Here we use the concept of *Two Pointer* -->where we simply take two variables like left and right which hold the 0 and N-1 indexes. 
              The sequence should be first negative then positive. If the no is positive first in the array,then swap it.
 
code - 
  
l=0,r=n-1;
while(l<=r)
{
  if(arr[l]<0 && arr[r]>0) // first negative then positive
  {
    l++;
    r--;
  }
  else if(arr[l]>0 && arr[r]<0) //first positive then negative
  {
    swap(arr[l],arr[r]);
    l++;
    r--;
  }
  else if(arr[l]<0 && arr[r]<0)  l++; // first negative then negative
  else // first positive then positive
    r--;
}

Time Complexity - O(N) //N becoz of while loop
Space Complexity - O(1) // 1 becoz of no extra array
