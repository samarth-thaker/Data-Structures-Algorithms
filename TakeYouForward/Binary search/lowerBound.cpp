int findFloor(vector<long long> &arr, long long n, long long x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;  
        } else if (arr[mid] < x) {
            result = mid;  
            low = mid + 1;
        } else {
            high = mid - 1;  
        }
    }

    return result;
}
