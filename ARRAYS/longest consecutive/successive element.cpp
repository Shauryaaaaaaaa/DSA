/*
// BETTER APPROACH
int longestSuccessiveElements(vector<int>&a) {
    if(a.size()==0) return 0;
    sort(a.begin(),a.end());//sort the array
    int n = a.size();
    int longest = 1;
    int cnt = 0;
    int lastsmallest = INT_MIN;

    for(int i =0 ;i<n;i++){
        if(a[i]-1==lastsmallest){     //check if the last element was equal to the last smallest
            cnt +=1;
            lastsmallest = a[i];       //if found then update the last smllest and store the current value
        }
        else if(lastsmallest != a[i]){
            cnt = 1;                    //if not found the last smallest then the value will repeat itself to the value of zero
            lastsmallest = a[i];
        }
        longest = max(longest,cnt);     //giving the sum of longest and keeps the track of the longest
    }
    return longest;    //longest value will be rerturned
}
*/

//OPTIMAL APPROACH
int longestSuccessiveElements(vector<int>&a) {
int n= a.size();
if(n==0) return 0;
int longest = 1;
unordered_set<int>st;
for(int i=0;i<n;i++){
    st.insert(a[i]);
}


for(auto it:st){
    if(st.find(it-1)==st.end()){
        int cnt = 1;
        int x = it;

        while (st.find(x + 1) != st.end()) {
          int cnt = cnt + 1;
          int x = x + 1;
        }
        longest = max(longest, cnt);
    }
}

 return longest;
}