class Solution {
public:
    bool check(vector<int>& nums) {
        int pairCount = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i - 1] > nums[i]){
                pairCount++;
            }
        }
        if(nums[nums.size() - 1] > nums[0]){
            pairCount++;
        }
        return (pairCount <= 1);
    }
};