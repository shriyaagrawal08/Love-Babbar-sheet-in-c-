Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Code --

n=arr.size();
left = 0, right = n-1 ;
while(left<=right)
{
  swap(arr[left],arr[right]);
  left++;
  right--;
}

Time Complexity - O(N) // N because of while loop
Space Complexity - O(1) // 1 because of no extra array is used here
 
