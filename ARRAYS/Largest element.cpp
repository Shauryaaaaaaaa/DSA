//BRUTE FORCE METHOD:
//we can do sorting and print the largest element, but the time comp;exity here will be the N LOG N;


//OPTIMAL SOLUTION
//we can take rthe givn array and traverse from the largest elemnt to the smallest element means our first element will go from first index;

#include<bits/stdc++.h>
int largestElement(int arr[], int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++)  
    {
        if (largest<arr[i])
        {
            largest=arr[i];
        }
        
    }
    return largest;
}
