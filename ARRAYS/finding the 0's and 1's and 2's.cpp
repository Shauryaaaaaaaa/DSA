//TOUCHING THE NATIONAL FLAG ALGORITHM IS USED HERE FOR THE OPTIMAL SOLUTION

//brute approachh
//if we take the array which is unbsorted that can give an answer at the end and is an unordered map that is also known as unordered map

//better approach 
//in this we canm take an array and we can iterate through it wholly one and create a count of 0,1,2 . in which whenever a number occurs we can update the count and write the whole array from the low to the high value in the sorted form


//-->BETTER SOLUTION:
/*#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    cnt 0 =0 ;
    cnt 1 =1 ;
    cnt 2 = 2;

    for(int i =0 ; i<n;i++){
        if(arr[i]==0)cnt 0++;                    //TIME COMPLEXITY = 0(N)
        else if(arr[i]==1)cnt 1++;
        else (arr[i]==2)cnt 2++;

    }
    for(int i =0; i<cnt 0;i++)arr[i]=0;
    for(int i = cnt 0; i<cnt 0+cnt 1;i++)arr[i]=1;    //TIME COMPLEXITY = O(N)
    for(int i = cnt 0+ cnt 1 ; i<n;i++)arr[i]=2;

}


//SPACE COMPLEXITY = 0(1)-->NO NEW ARRAY WAS CREATED TO SIOLVE THE ARRAY*/

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    //THE NATIONAL FLAG TOUCHING IS AN BEST APPROACH FOR THIS PROBLEM

    int low =0, mid = 0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


//time complexity: o(N) --. EVERY TIME THEY ARE JUS SORTING ONE ELEMENT AT A TIME,THERE CAN BE N NO.OF ELEMENTS SO O(N);
//SPACE COMPLEXITY: O(1)