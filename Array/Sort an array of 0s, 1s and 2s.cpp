Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order

Code --


class Solution  
{
   public:
void swap(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    void sort012(int a[], int n)
    {
        // coode here --> l for 0s,h for 2s,m for 1s
        int l = 0, h = n-1, m = 0; // as we already know that 0s will start from 0th index in l , and in h- 2s will start from last index and 1s ramdomly taken from 0th index 
        while (m <= h){
            if(a[m] == 0){
                swap(a[m], a[l]);
                l++;
                m++;
                
            }else if(a[m] == 1){
                m++;
            }
            else{
                swap(a[m], a[h]);
                h--;
            }
        }
    }
};

Time Complexity - O(N) // N becoz of while loop
Space Complexity - O(1) // 1 becoz of no extra array is used
