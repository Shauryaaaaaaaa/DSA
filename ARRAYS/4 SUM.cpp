#include<bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
 /*  --> BRUTE FROCE: 
    set<vector<int>>st;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l = k+1;k<n;k++){
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k]+nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i]+nums[j]+nums[k]+nums[l]};
                        sort(nums.begin(),nums.end());
                        st.insert(temp;)

                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;*/


//--> BETTER SOLUTION
 /*   int n = nums.size();
    set<vector<long long>>st;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            vector<long long>hashset;
            for(int k = j+1;k<n;k++){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nunms[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;*/


        int n= nums.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n;i++){
            if(i>0 && arr[i] == arr[i-1])continue;
            for(int j = j+1;j<n;j++){
                if(j != i+1 && arr[j]==arr[j-1)continue;//this is for skipping the similar numbers
                int k = j+1;
                int l = n-1;
                while(l>k){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push(temp);
                        l--;
                        k++;
                        while(k<l && nums[k] == nums[k-1])k++;
                        while(k<l && nums[l] == nums[l+1])l--;
                    }
                    else if(target > sum)
                        l--;
                        k++;
                    
                }

            }
        }
        return ans;
}