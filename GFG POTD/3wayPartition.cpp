class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        vector<int> nums(arr.size());
    int start = 0, end = arr.size() - 1;

    // Partition elements less than 'a' to the beginning
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < a) {
            nums[start++] = arr[i];
        }
    }

    // Partition elements between 'a' and 'b' to the middle
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= a && arr[i] <= b) {
            nums[start++] = arr[i];
        }
    }

    // Partition elements greater than 'b' to the end
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > b) {
            nums[end--] = arr[i];
        }
    }

    // Copy elements back to original array
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = nums[i];
    }
}
};