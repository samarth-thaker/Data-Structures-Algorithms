int consecutiveOnes(vector<int>& arr){
    int count=0, maxi = 0;
    for(int i=0;i<arr.size();i++){

        if(arr[i]==1){
            count+=1;
         maxi = max(count, maxi);
        }
       else{
           count = 0;
       }
       
    }
    return maxi;
}