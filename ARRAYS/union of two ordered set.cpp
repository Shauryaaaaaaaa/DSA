//the union of two ordered set will have a approach of set which only contains the uniques elements

/*--> BRUTE FORCE METHOD:


#include<bits/stdc++.h>

using namespace std;

vector<int> findunion(int arr1[],int arr2[],int n, int m){
    set<int>s;
    vector<int>Union;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
       s.insert(arr2[i]);
    }
    for (auto & it: s)
    {
        Union.push_back(it);
    }
    return Union;
    
    
    

}
int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={2,3,4,4,5,11,12};
    int n = 10, m = 7;
    vector<int> Union = findunion(arr1,arr2,m,n);
    cout<<"union of arr1 and arr2 is"<<endl;
    for (auto & val : Union)
    {
        cout<<val<<" ";

    }
    return 0;
    
    }
    */

   //--> OPTIMAL SOLUTION: USING TWO POINTERS

   #include<iostream>
   #include<vector>

   vector<int> FindUnion(int arr1[],int arr2[],int n,int m){

    //creating pointers for the arr1 and arr2:
    int i = 0, j =0;

    //vector(UNION) to store the union of the array
    vector<int>Union;

    //ITERATION OVER BOTH THE ARRAYS:
    while(i<n && j <m){

        //CASE 1 and 2 : if the array1 is smaller than arr2 and is not containig any element and comparing it with the previouselement if they not duplicates:
        if (arr1[i]<= arr2[j]){
            if (Union.size()==0||Union.back()!= arr1[i])
            Union.push_back(arr1[i]);
            i++;
        }
//if the array2 is smaller than arr1 and is not containig any element and comparing it with the previouselement if they not duplicates:

         if (Union.size()==0||Union.back()!= arr2[j])
            Union.push_back(arr2[j]);
            j++
    }



   //if there are remaining elemts in the array, add them to the union vector

   while (i<n)
   {
    if (Union.back()!= arr1[i])
    Union.push_back(arr1[i]);
    i++;
    
   }

   while (i<n)
   {
    if (Union.back()!= arr1[i])
    Union.push_back(arr1[i]);
    i++;}
    return Union;
    }
   
   int main(){
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    // Call the FindUnion function to find the union of arrays
    vector<int> Union = FindUnion(arr1, arr2, n, m);

    // Display the union of arrays
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto & val: Union)
        cout << val << " ";
    
    return 0;
}
   