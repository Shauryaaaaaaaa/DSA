//this question states us that the number appearing in the qrray are more then the arr.size/3, it consists of 2 elemnts in the final list.


vector<int> majorityElement(vector<int> v) {
	int cnt1 = 0, cnt2 = 0;
	int el1 = INT_MIN;
	int el2 = INT_MIN;
	int n = v.size();

	for(int i=0; i<n; i++){
		if(cnt1 == 0 && el2 != v[i]){
			cnt1 = 1;
			el1= v[i];
		}
		if(cnt2 == 0 && el1 != v[i] ){
			cnt2 = 1;
			el2 = v[i];
		}
		else if(v[i] == el1) cnt1++;
		else if(v[i] == el2) cnt2++;
		else{
			cnt1-- , cnt2--;
		}
	}

	//MANUAL CHECK
	vector<int>ls;
	cnt1 = 0, cnt2 = 0;
	for(int i =0 ; i<n ; i++){
		if(el1 == v[i]) cnt1++;
		if(el2 == v[i]) cnt2++;
	}

	int mini = (int)(n/3) + 1;
	if(cnt1 > mini) ls.push_back(el1);
	if(cnt2 > mini) ls.push_back(el2);
	sort(ls.begin(), ls.end());
	return ls;
}
 //TC = O(N)+O(N)
 //SC = 0(1)

 /*
	vector<int>mpp;
	for(int i=0; i<n ; i++){
		mpp(arr[i])++;
		if(mpp(arr[i])==minrequired)
		ls.add(arr[i]);
	}

	//TC = O(N)+O(LOGN)IF ORDERED  OR 0(1)IF IT IS UNORDERED.
 
 */

