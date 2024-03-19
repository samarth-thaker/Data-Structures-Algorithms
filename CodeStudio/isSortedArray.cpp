int isSorted(int n, vector<int> a) {
   int num = a[0];
   int num2=0;
   for(int i=1; i<a.size(); i++){
       if(a[i-1]<=a[i]){
          num2 = num2 + 1;
       }else{
          num2 = 0;
          break;
       }
   }
   if(num2>0){
      return 1;
   }
   else{
      return 0;
   }
}
