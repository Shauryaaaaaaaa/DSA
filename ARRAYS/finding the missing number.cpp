#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>&a, int N){

    //summing up all the elemnts of the array
    int sum = N*(N+1)/2;

    //summing up the iterated elemnt in the array
    int s2= 0;
    for (int i = 0; i < N-1; i++)
    {
        s2+=a[i];

    }

    //here we will get the missing elemnt when we cancelout things
    int Missingnum = sum-s2;
    return Missingnum;
    

}

int main(){
    int n =5;
    vector<int> = {1,2,3,4};
    int ans = missingnumber(a, N);
    cout<<"the missing number is"<<ans<<endl;
    return 0;
}