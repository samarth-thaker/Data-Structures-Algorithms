#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
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
}
void recursiveInserstionSort(int arr[],int i, int n){
    if(i==n){
        return;
    }
    int j=i;
    while(j>0; && arr[j-1]>arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    recursiveInserstionSort(arr[], i+1,  n);

}
 void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
        recursiveInserstionSort(arr, i, n);
    }
    }
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}


int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

