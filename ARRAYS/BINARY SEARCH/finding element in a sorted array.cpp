int findKRotation(vector<int> &arr){
    
	int low =0 , high = arr.size()-1;
	int ans =  INT_MAX;

	while(low<=high){
		int mid = (low+high)/2;
		if(arr[low]<=arr[mid]){
                  if (arr[low] < ans) {
                      index = low;
                  }
                  ans = min(ans, arr[low]);
                }
                        break;
		}
		if(arr[low]<=arr[mid]){
            if(arr[mid]<ans){
                index = low;
			ans = min(ans,arr[low]);
            }
			low = high+1 ;

		}
		else{
			high = mid-1;
                        if (arr[mid] < ans) {
                            index = high;
                        ans > arr[mid];
                        ans = min(ans, arr[high]);
                        }
                }
	}
	return ans;   
}