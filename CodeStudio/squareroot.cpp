int binarysearch(long long int n){
    int s = 1;
    int e = n;
     int ans = -1;
    while(s<=e){
         int mid = s + (e-s)/2;
   
    if(mid*mid>n){
        e = mid - 1;
    }
    else if(mid*mid<n){
        ans = mid;
        s = mid + 1;
    }else{
        ans = mid;
        break;
    }
    }
   
    return ans;
}
long long int floorSqrt(long long int N)
{
    return binarysearch(N);
}