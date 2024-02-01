int upperBound(vector<int> &arr, int x, int n){
	int low = 0 , high  = n-1;
	int ans = n;
	while(low<=high){
		int mid = (low+high)/2;
      //here the array of the mid is bigger than the target hence the element will always be present on the left side
		if(arr[mid]>x){
			ans = mid;
			high = mid-1;
		}
		else{
			low= high+1;
		}
	}
	return ans;

}