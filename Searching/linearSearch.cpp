#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[] = {12, 13, 90, 0, 87, 34 };
    int index= linearSearch(arr, 6, 87);
    cout<<index;
    return 0;
}