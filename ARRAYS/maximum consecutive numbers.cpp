#include<iostream>

using namespace std;
int findmaxones(int arr[] , int n){
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {   
            //if the value is one then increase the count of the consecutive ones
            maxi=max(maxi,count);
            count++;
        }
        else
        {
          count = 0;  
        }

        maxi=max(maxi,count);
        return maxi;
        
        
    }
    
}

int main(){
    int num = {1,1,0,0,1,1,1,0};
    
int size = sizeof(num)/ sizeof(num[0]);

int maxi = findmaxconsecutiveones(num, size);

cout<<"the most consecutive ones are"<<findmaxconsecutiveones<<endl;

return 0;
}