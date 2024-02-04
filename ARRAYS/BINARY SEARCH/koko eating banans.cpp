 /*BRUTE FORCE:
  FUNCccc(ARR,N){
      for(it i =0 ; i<=n; i++){
          required time = func(arr,n);
          if(required time<= hrs);
      }
      return i;*/
    int maxx(vector<int> &v){
                int maxi = 0;
        int n = v.size();

        for(int i = 0; i<=n; i++){
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }

    int hours(vector<int>&v ,int hourly){
        int n = v.size();
        int TotalH =0;
        for(int i =0 ; i<= n ; i++){
            TotalH += ceil((double)v[i] / (double)hourly);
        }
        return TotalH;
    }
int minimumRateToEatBananas(vector<int> v, int h) {
    int low  = 0, high = maxx(v);
    while(low<=high){
        int mid = (low+high)/2;
        int TotalH = hours( v , mid);
        if(TotalH<=h){
            high = mid-1;
        }
        else{
            low = high + 1;

        }
    }
    return low;

  }