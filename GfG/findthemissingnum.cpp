#include<bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n){
    int r = n*(n+1)/2;
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum = sum + arr[i];
    }
    return r - sum;
}
int main(){
    int arr[] = {1, 2, 4, 5};
    int p = findMissing(arr, 5);
    cout<<p;
    
}