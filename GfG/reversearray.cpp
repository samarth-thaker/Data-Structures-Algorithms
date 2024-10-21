void reverseArray(vector<int> &arr) {
      int start = 0;
      int end = arr.size() - 1;
      while(start < end){
          swap(arr[start], arr[end]);
          start++;
          end -- ;
      }
}
 void reverse(int l, int r, vector<int> &arr){
       if(l>=r) return;
       swap(arr[l], arr[r]);
       reverse(l + 1, r - 1, arr);
   }
    void reverseArray(vector<int> &arr) {
      int start = 0;
      int end = arr.size() - 1;
      reverse(start, end, arr);
    }