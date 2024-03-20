/* You are given an array 'arr' sorted in non-decreasing order and a number 'x'.



You must return the index of lower bound of 'x'.

 */
int lowerBound(vector<int> arr, int n, int x) {
	int s = 0;
	int e = n-1;
	
	int ans = n;
	while(s<=e){
		int mid = s + (e-s)/2;
		if(arr[mid]>=x){
			ans = mid;
			e = mid - 1;
		}else{
			s = mid + 1;
		}
	}
	return ans;
}
