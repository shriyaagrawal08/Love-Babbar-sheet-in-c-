Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7
  
Code --

class Solution{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
          priority_queue<int> maxHeap; // syntax to create maxHeap
       for(int i=l;i<=r;i++)
       {
           maxHeap.push(arr[i]);
           if(maxHeap.size()>k)
           {
               maxHeap.pop();
           }
       }
       return maxHeap.top(); // top because it would the kth smallest element
    }
};

Points to remember - 
  
 1- min/smallest/closest - max Heap
 2- max/largest/farest - min Heap
