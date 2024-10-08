	int NthRoot(int n, int m)
	{
	    // Code here.
	    int s  = 1, e = m;
	    while(s<=e){
	        int mid = s + (e-s)/2;
	        if(pow(mid, n)==m){
	            return mid;
	        }
	        else if(pow(mid, n) < m){
	            s = mid + 1;
	        }else{
	            e = mid - 1;
	        }
	    }
	    return -1;
	}  