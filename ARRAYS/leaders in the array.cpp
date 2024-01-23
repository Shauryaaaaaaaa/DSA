//BRUTE FORCE
/*
    vector<int>ans;
    for(int i =0; i<n;i++){
    leader = true;
    for(int j =i+1; j<n; j++){
            if(a[j]>a[i]){
                leader=false;
            }else if(a[i]==a[j]){
                leader = false;
            }
            else(a[i]>a[j])
            ans.push_back(a[i])
    }
  }
  
  
  tc = o(n)+o(n)= o(n2)
  sc = o(n)*/

//OPTIMAL SOLUTION
vector<int> superiorElements(vector<int>&a) {
    //we will first iterate the array from the back and after iteration we willkeep the max element as 0 in the start and after that we as we mave further we will increase the value of the max and store the answer in the new answer array just to give out the answerand then sort the leaders in the array 

    vector<int>ans;
    int maxi =INT_MIN;
    int n = a.size();

    //time complexity is o(n)
    for(int i = n-1; i>=0;i--){
      if (a[i] > maxi) {
       ans.push_back(a[i]);
           }
    //helps in keeping the track of the right element
            maxi = max(maxi, a[i]);
           
    }

    //o(n log n )
    sort(ans.begin(),ans.end());
        return ans;
}