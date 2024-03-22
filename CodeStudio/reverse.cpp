vector<int> reverseArray(int n, vector<int> &nums)
{
    int left = 0;
    int right = n - 1;

   
    while (left < right) {
       
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        
        left++;
        right--;
    }

    return nums;
    
}
