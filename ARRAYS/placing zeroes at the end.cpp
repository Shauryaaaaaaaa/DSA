/*--> BRUTE FORCE:

#include<bits/stdc++.h>

using namespace std;

void movezeroes(int arr[],int n){

    //temporay array crreation
    int temp;

    //copy all the non zero elements
    //from original to the --> temp array
    for(int i=0;i<n;i++){
        if (arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
        
    }

    //no of non zeroes element
    int nz=temp.size();

    //copy all the elements from the temp
    //first we will fill all the places of non zero elements

    //original array:
    for (int i = 0; i < nz; i++)
    {
        arr[i]=temp[i];
    }
    
    //fill the rest of the elemnts of the cells:
    for (int i = nz; i < n; i++)
    {
        arr[i]=0;
    }
    return arr[];

}
int main(){
    int n = 9;
    int arr[]={1,2,0,3,0,4,6,5,0};
    movezeroes(int arr[],int n);
    for (auto it: ans)
    {
       cout<<it<<" ";
       return 0;
    }
    

}
*/

/*
--> OPTIMAL SOLUTION:
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(int n,vector<int>a){
    int j = -1;

    //placement for the pointer j as for the 0
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            j=i;
            break;
        }
        
    }

    if (j==-1) return a;//n;o non zero element and gives the entire array as it is

    //moving and swapping of the i and j and swap accordingly;

    for (int i = j+1; i < n; i++)
    {
        if (a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
        
    }
    
    return a;
    
}

int main(){
    vector<int> arr={1,0,2,3,2,0,0,4,5,1};
    int n = 10;
    vector<int> ans = moveZeroes(n , arr);
    for ( auto &it : ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
    
}