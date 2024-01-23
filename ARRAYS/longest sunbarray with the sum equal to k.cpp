int longestSubarrayWithSumK(vector<int> a, long long k) {
    //int left and right will be at the 0 position

    int right =0,left=0;

    //here it is given the sum is long log

    long long sum =a[0];

    //we have to take out the maximim lenght also with matching with the k

    int maxlenght = 0;

    //size of the array

    int n = a.size();
    //for our arr to not increase the value of n or the array size
    while(right<n){

        //if somehow our value increases from k then we have to trim it out from the left
        while(right>=left && sum>k){
            sum -= a[left];
            left++;
        }

        //when our sum is equal to the k , then we will update the value
        if(sum==k){
            maxlenght= max(maxlenght,right-left+1);
            
        }
        right++;
        if(right<n) 
        sum+=a[right];

    }

    return maxlenght;

    
}