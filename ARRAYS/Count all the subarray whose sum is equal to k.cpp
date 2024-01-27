int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
/*   int cnt = 0;
    int n = arr.size();
    for(int i=0;i<n ; i++){
       int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
        }

        if(sum==k){
            cnt++;
        }
    }
    return cnt;*/

    unordered_map<int,int>mpp;
    int n = arr.size();
    int cnt = 0, presum = 0;
    mpp[0] = 1;

    for(int i = 0 ; i<n ; i++){
        presum+=arr[i];
        int remove = presum - k;
        cnt+=mpp[remove];
        mpp[presum]+=1;

    }
    return cnt;

}
//TC = O(N)+O(LOG N)--> LOG N BECAUSE OF THE UNORDERED MAP WBICH WE HAVE USED IN THE SOLVING OF THE QUESTIION
//SC=O(1)