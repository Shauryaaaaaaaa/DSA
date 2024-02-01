#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	int n =  arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	for(int i =0; i<n; i++){
		if(arr.empty()||arr[i][0]>arr.back()[1]){  ///if the current elemeent is empty ans the new element is bigger than the previous element and does not fit in the subarray then the value will get updated and the new value will be taken as the oldvalue will be taken int ans list
			ans.push_back(arr[i]);
		}
		else{
			ans.back()[1]=max(ans.back()[1],arr[i][1]);//if the value occures in the array then update the value and update the subarray either by getting inside the value or by exapanding the value
		}
	}
	return ans;	
}