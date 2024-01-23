int removessameelement(vector<int> &arr, int n){
    //here the i will be at place and j will travese
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[j]=arr[j+1];
            i++;
        }
        
    }
    return 0;
}