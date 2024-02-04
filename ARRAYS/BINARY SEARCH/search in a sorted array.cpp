int search(vector<int>& arr, int n, int k)
{
    //the rotated array can be found anywhere in hte array hence we have to first fins the part which is sorted


    int low =0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k)return mid;

     //if the left part is sorted [1,2,3,4,5,6]
     if(arr[low]<=arr[mid]){
        if(arr[low]<k && k<arr[mid]){
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
     }

     // right part sorted [7,8,9,10]
     else{
        if(arr[mid]<k&&k<arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

        
      }
    }
    return -1;
}