
class Solution
{
    public:
   
    void sort012(int arr[], int n)
    {
      int nums[n];
    int start = 0, end = n - 1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            nums[start++] = 0;
        } else if(arr[i] == 2) {
            nums[end--] = 2;
        }
    }
    
    while(start <= end) {
        nums[start++] = 1;
    }

    // Copy sorted array back to original array
    for(int i = 0; i < n; i++) {
        arr[i] = nums[i];
    }
    } 
    
    
};

