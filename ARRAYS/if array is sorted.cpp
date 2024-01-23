/*stl method
int issorted(int n, vector<int> a)
for(int i = 1; i<n; i++){
    if(a[i]>=a[i-1]){

    }
    else{
        return false;
    }
    }
    return true;
}*/

//checking if the array is sorted or not
#include<iostream>
using namespace std;

int arraysortedornot(int arr[], int n){
    //checkig if the array has one or no element

    if (n == 1||n == 0)
    {
        return 1;
    }

    if (arr[n-1] < arr[n-2])
    {
        return 0;
    }
    //last pair is being checked if the last pair was sorted or not

    return arraysortedornot(arr, n-1);
    //function will return 0 if found
    
}

int main(){
    int arr[]={20,23,23,45,78,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (arraysortedornot(arr,n))
    {
        cout<<"yes/y";
    }
    else
    cout<<"no/n";
    
}