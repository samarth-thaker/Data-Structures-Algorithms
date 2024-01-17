#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
   int s=0;
   int e = n-1;
   int mid = s + (e-s)/2;
   while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        s = mid + 1;
    }else{
        e = mid - 1;
    }
    mid = s + (e-s)/2;
   }
   return -1;
}
int main(){
    int arr[] = {12, 13, 14, 20, 87, 94 };
    int index= binarySearch(arr, 6, 87);
    cout<<index;
    return 0;
}