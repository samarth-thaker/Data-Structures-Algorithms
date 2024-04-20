vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            while (i < n - 1 && arr1[i] == arr1[i + 1]) {
                i++;
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            ans.push_back(arr2[j]);
            while (j < m - 1 && arr2[j] == arr2[j + 1]) {
                j++;
            }
            j++;
        } else {
            ans.push_back(arr1[i]);
            while (i < n - 1 && arr1[i] == arr1[i + 1]) {
                i++;
            }
            i++;
            while (j < m - 1 && arr2[j] == arr2[j + 1]) {
                j++;
            }
            j++;
        }
    }

    while (i < n) {
        ans.push_back(arr1[i]);
        while (i < n - 1 && arr1[i] == arr1[i + 1]) {
            i++;
        }
        i++;
    }

    while (j < m) {
        ans.push_back(arr2[j]);
        while (j < m - 1 && arr2[j] == arr2[j + 1]) {
            j++;
        }
        j++;
    }

    return ans;
}
