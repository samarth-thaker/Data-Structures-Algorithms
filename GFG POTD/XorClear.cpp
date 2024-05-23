
class Solution {
public:
    void printArr(int n, int arr[]) {
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void setToZero(int n, int arr[]) {
        // Using memset to set arr to zero
        memset(arr, 0, n * sizeof(arr[0]));
    }

    void xor1ToN(int n, int arr[]) {
        // Xor arr[i]^i
        for (int i = 0; i < n; ++i) {
            arr[i] ^= i;
        }
    }
};

