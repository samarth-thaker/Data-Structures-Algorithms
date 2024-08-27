class Solution {
  public:
    // Function returns the second
    // largest elements
   int print2largest(vector<int>arr) {
	    int i, first, second;
        int n = arr.size();
	    // There should be at least two elements
	    if (n < 2) {
	        return -1;
	    }

	    first = second = INT_MIN;
	    for (i = 0; i < n; i++) {

	        // If current element is greater
	        // than first then update both
	        // first and second
	        if (arr[i] > first) {
	            second = first;
	            first = arr[i];
	        }

	        // If arr[i] is in between first
	        // and second then update second
	        else if (arr[i] > second && arr[i] != first) {
	            second = arr[i];
	        }
	    }
	    if (second == INT_MIN)
	        return -1;
	    else
	        return second;
	}
};