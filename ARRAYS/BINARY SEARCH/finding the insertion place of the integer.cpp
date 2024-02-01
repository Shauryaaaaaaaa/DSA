//the code will be same as the lower bound code
int lowerbound(int<vector> arr , int n , int target){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans  = n ;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = high + 1;
        }
    }
    return ans;
}