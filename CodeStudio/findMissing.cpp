int missingNumber(vector<int>&a, int N) {
int xor1=0, xor2=0;
for(int i=1; i<=N;i++){
    xor1=xor1^i;
}
for(int i=0; i<N-1; i++){
    xor2= xor2^a[i];
}
return xor1^xor2;
}