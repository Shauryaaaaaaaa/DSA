bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // in this codition the elements which are duplicates are considerd as the sorted elements & if the high mid and low are the same then we have to trim down the value form the beggining as well as from the end

  
    int n =A.size();
    int low =0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(A[mid]==key)return true;
        if(A[low]==A[mid]&&A[mid]==A[high]){
            low = low +1;
            high = high - 1;
            continue;
        }

     //if the left part is sorted [1,2,3,4,5,6]
     if(A[low]<=A[mid]){
        if(A[low]<key && key<A[mid]){
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
     }

     // right part sorted [7,8,9,10]
    else{
        if(A[mid]<key&&key<A[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

        
      }
    }
    return false;

}
