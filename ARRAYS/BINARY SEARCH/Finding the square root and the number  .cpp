int floorSqrt(int n)
{
    //BRUTE FORCE
    /*for(i=0-->n){
        if(i*i<=n){
            ans=i;
        }
        return -1;
            */

    int low = 0, high = n - 1;
    int ans = 1;
    while(low<=high){
        int mid = (low+high)/2;

        if(mid*mid<=n){
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid -1;
        }

    }
    return ans;
}