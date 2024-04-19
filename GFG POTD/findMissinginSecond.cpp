class Solution{
    	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	   unordered_set<int>bset;
	   for(int i=0; i<m; i++){
	       bset.insert(b[i]);
	       
	} 
	vector<int>missing;
	for (int i = 0; i < n; i++) {
          
            if (bset.find(a[i]) == bset.end()) {
                missing.push_back(a[i]);
            }
        }
        
        return missing;
	}
};