int singleNonDuplicate(vector<int>& arr)
{
	//BRUTE FORCE SOLUTION:
        /*for(i=0,i<n,i++){
                if(i==0)return arr[i];
                else if(i==n-1)
                if(arr[i]!=arr[i+1])return arr[i];

                if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1]
                return arr[i])
                }*/\



				int n = arr.size();
				if(n==1)return arr[i];
				if(arr[0]!=arr[1])return arr[i];
				if(arr[n-1]!=arr[n-2])return arr[i];
				int low = 1;
				int high = n-2;

				while(low<=high){
					int mid = (low+high)/2;

                                        if (arr[mid] != arr[mid + 1] &&
                                            arr[mid] != arr[mid - 1]) {
                                          return arr[mid];
                                        }
										if((mid%2==1 && arr[mid]==arr[mid-1])||(mid%2==0&&arr[mid]==arr[mid+1]));
										low = mid+1;

										else{
											high = low - 1;
										}
                                }
								return -1;

}