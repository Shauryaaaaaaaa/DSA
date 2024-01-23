vector<int> alternateNumbers(vector<int>&a) {
   int n = a.size();
   vector<int>ans(n,0);
   int posind = 0, negind = 1;//as the positive number will start storing from 0 and the negetive integer will start from -1.

   for(int i=0;i<n;i++){
       if(a[i]<0){
           ans[negind]=a[i];
           negind+=2;
       }
       else{
           ans[posind]=a[i];
           ans[posind]+=2;
       }
       return ans;
   }
};