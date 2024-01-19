/* You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an 
integer ‘k’. Now, your task is to find the first and last occurrence of ‘k’ in 'arr'. */
#include <bits/stdc++.h> 
#include<utility>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e =size-1;
    int mid = s + (e-s)/2 ;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid+1;
            }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2 ;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e =size-1;
    int mid = s + (e-s)/2 ;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid+1;
            }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2 ;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(int arr[], int n, int k)
{
   pair<int, int> p;
   p.first = firstOcc( arr,  n,  k);
   p.second = lastOcc( arr,  n,  k);
   return p;
}
int main(){
    int arr[]={0, 0, 1, 1, 2, 2, 2, 2};
    pair<int, int> p = firstAndLastPosition(arr, 8, 2);
    cout<<p.first<<" "<<p.second;
}