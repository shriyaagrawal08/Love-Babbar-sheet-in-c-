(A) Union --
  
Input:
N=5,  M=3
arr1[] = {1 2 3 4 5}
arr2[] = {1 2 3}
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
  
 Code - 
  
  #include <unordered_set>
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;
        for(int i=0;i<n;i++) {set.insert(a[i]);}
        for(int i=0;i<m;i++) {set.insert(b[i]);}
        return set.size();
    }
};

(b) Intersection - 
  
  Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output :  Intersection : {3, 5} // common elements in both the array

Code- 
  
  #include<unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> arr;
       // int count=0;
        unordered_set<int> set;
        for(int i=0;i<a.size();i++) set.insert(a[i]);
        for(int i=0;i<b.size();i++) 
        {
            int key=b[i];
            if(set.find(key)!=set.end()){
                arr.push_back(b[i]);
            //count++;
            set.erase(key);
                }
        }
        return arr;
    }
};

(C) count distinct elements

Input : arr1[] = {10, 20, 30, 10, 10, 15}
Output : 10 20 30 15
  
Code- 
  
 int countDistinct(int a[],int n)
{
  unordered_set<int> set; //unordered set store the unique elements but the order is not fixed.The value of the element is same as the key in key value pair.
  for(int element:a)
  {
    set.insert(element);
  }
  return set.size();
}

         
