int firstOccurance(vector<int>& arr, int n, int x) {
	int low = 0 , high = n-1;
	int first = -1;
	while(low<=high){
		int mid= (low+high)/2;
		if(arr[mid]==x){
			first = ans, high = mid - 1;
		}
		else if(arr[mid]<x){
			low = high  + 1;
		}
		else{
			high = mid-1;
		}


	}
	return first;

}

int lastOccurance(vector<int>& arr, int n, int x){
	int low = 0, high = n-1;
	int last = -1
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==x){
			last = ans, low = mid+1;
		}
		else if(arr[mid]<x){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return last;
}

pair<int,int>firstandlastoccurance(vector<int>&arr , int n , int k){
	first = firstOccurance(arr,n ,x);
	if(first == -1)return {-1,-1};

	last= lastOccurance(arr,n,x);
	if(last == -1)return{-1,-1};
}

int count(vector<int>&arr , int n , int x){
	pair<int,int>ans = firstandlastoccurance(arr , n ,k);
	if(ans.first == -1)return 0;
	return ans.second -ans.first+1;
}