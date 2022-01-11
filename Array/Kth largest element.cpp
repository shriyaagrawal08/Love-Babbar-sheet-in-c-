i/p - arr[]={3,2,1,5,6,4} , k=2
o/p- 5

Code --

class Solution{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthLargest(vector<int> &arr, int k) {
        //code here
          priority_queue<int,vectot<int>,greater<int>> minHeap; // syntax to create minHeap
       for(int num:arr)
       {
           minHeap.push(num);
           if(minHeap.size()>k)
           {
               minHeap.pop();
           }
       }
       return minHeap.top(); // top because it would the kth smallest element
    }
};

Points to remember - 
  
 1- min/smallest/closest - max Heap
 2- max/largest/farest - min Heap
