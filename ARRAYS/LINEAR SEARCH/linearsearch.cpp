#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int element){

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    
    return -1;
}

int main(){
    int n = 6;
    int element = 4;
    int arr[n]= {1,3,4,5,6,7};
    cout<<LinearSearch(arr,n,element);

    return 0;
}
