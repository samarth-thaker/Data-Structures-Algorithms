#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
           
        }
         swap(arr[i], arr[minIndex]);
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
	selectionSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

