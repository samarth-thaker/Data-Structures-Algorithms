class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int size = arr.size();
        for (int i = 0; i < size / 2; i++) {
            swap(arr[i], arr[size - i - 1]);
        }
    }

    vector<int> leaders(int n, int arr[]) {
        vector<int> ans;
        int max = arr[n - 1];
        ans.push_back(max);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > max) {
                max = arr[i];
                ans.push_back(arr[i]);
            }
        }

        reverseArray(ans);
        return ans;
    }
};
