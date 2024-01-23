//FINDING THE LARGEST AND SECOND LARGEST ELEMENT IN AN ARRAY
#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,1};
    int n , i , min , max;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements in the array";

    for (int i = 0; i < n; i++)

    cin>>arr[i];
     
     max = arr[0];
     for (int i = 0; i < n; i++)
     {
        if (max < arr[i])
        max = arr[i];
        
     }
     
     min=arr[0];
     for (int i = 0; i < n; i++)
     {
        if(min > arr[i])
        min = arr[i];
     }
     cout<<"largest elemnt"<<max;
     cout<<"smallest element"<<min;
     return 0;   

}