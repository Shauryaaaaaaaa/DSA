int findPeakElement(vector<int> &arr) {
    //the peak element is a element which is greater then its left elemnets and the right element

    /*BRUTE FORCE

    for(i=0--> n){
        if(arr[i]==0||arr[i]>=arr[i-1]&&arr[i]==n-1||arr[i]>arr[n+1]){
            return i;
        }
    }
    */


    //BINARY SEARCH
    int n = arr.size();
    if(n==1)return 0;
    if(arr[0]>arr[1])return 1;
    if(arr[n-1]>arr[n-2])return n-1;
    //for the edge case that the elements are present at the last
    //we will trim down the searching space for the condition
    int low=1, high = n-2;


    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {

          return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            low = high + 1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
