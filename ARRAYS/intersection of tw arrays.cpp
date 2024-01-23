#include<iostream>
#include<vector>

using namespace std;
vector<int> Intersectionelements(vector<int>A, vector<int>B){
    //DECLARING ANS ARRAY
    vector<int> ans;

    //maintaining the starting pointer at starting of every array
    int j =0;
    int i = 0;

    //if the current element i is smaller than j
    while (i<A.size()&& j<B.size())
    {
       if (A[i]<B[j])
       {
        i++;
        //if the current element j is smaller than the i
       }else if (B[j]<A[i])
       {
        j++;
       }else{
        //if both the element are same then push them in the ans array which we created in the starting, specific for containig new elements
        ans.push_back(A[i]);
        i++;
        j++;
       }
       
       
    }
    return ans;
    
}

int main(){
    int arr1[]={1,2,3,4,5,6,7,8};
    int arr2[]={2,3,4,3,5,7,6,8,5};

    vector<int> ans = Intersectionelements(A,B);
    //iterator for giving the resultant array
    for (int i = 0; i < ans.size(); i++)
    {
       cout<<ans.size()<<endl;
    }
    
    return 0;
}