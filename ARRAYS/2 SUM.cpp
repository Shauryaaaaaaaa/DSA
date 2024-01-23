class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        //created a mapp with the key and index value
       map<int,int> mpp;
       //for iterartion maiking the n 
       int n = nums.size();
       for(i=0;i<n;i++){
           int a = nums[i];
            int moreneeded = t - a;
            //if the value is present in the index or not, tand the value is found till the end we will return the element with the value
            if(mpp.find(moreneeded)!=mpp.end()){
                return {mpp[moreneeded], i};
            }
            mpp[a] = i;
        
       }
       //if not found return -1 and -1
       return{-1,-1};
};