class Solution {
public:
vector<int> sort(vector<int> arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    return arr;
}
    int heightChecker(vector<int>& heights) {
       int count = 0;
       vector<int> expected = sort(heights);
       pair<int, int> p;
       for(int i=0; i<heights.size(); i++){
        p.first = heights[i], p.second = expected[i];
        if(p.first!=p.second){
            count++;
        }
       }
       return count; 

    }
};