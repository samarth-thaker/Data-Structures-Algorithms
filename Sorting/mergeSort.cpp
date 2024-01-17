#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = s + (e-s)/2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int first[l1], second[l2];
    int mainIndex = s;
    for(int i=0; i<l1; i++){
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for(int i=0; i<l2; i++){
        second[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while(index1<l1 && index2<l2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }else{
            arr[mainIndex++] = second[index2++];
        }
    }
    
    while(index1 < l1) {
        arr[mainIndex++] = first[index1++];
    }

    while(index2 < l2 ) {
        arr[mainIndex++] = second[index2++];
    }
   

}
void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);
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
	mergeSort(arr, 0, N-1);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

