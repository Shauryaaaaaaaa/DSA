//BETTER APPROACH
vector<int> findMissingRepeatingNumbers(vector < int > a) {
 /*   int n = a.size();
    int repeating = -1, missing = -1;
    int hash[n+1] = {0};
    for(int i = 0; i<n ; i++){
        hash[a[i]]++;
    }
    for(int i = 1; i<n; i++){
        if(hash[i]==2)repeating = i;
        else if(hash[i]==0)missing = i;

        if(missing != -1&& repeating != -1){
            break;
        }  
    }   
    return {repeating,missing};*/

    long long n = a.size();
    // Sn id the sum of all the natural numbers
    long long  SN = (n*(n+1))/2;
    //same as s2 the s2n is the product of the sum of all the natural numbers
    long long S2N = (n*(n+1)*(2*n+1))/6;
    //intialising the value for both s2 and s2 as zero
    long long S = 0, S2 = 0;

    //as the iteration will take place the value will grt added up in the sum 
    for(int i = 0 ; i<n ;i++){
        S += a[i];
        //s2 is the squaer of 2
        S2 += (long long)a[i]* (long long)a[i];
    }

    //intialising the values in the functioning of the code
    long long Val1 = S - SN;
    long long Val2 = S2 - S2N;
    Val2 = Val2/Val1;
    long long x  = (Val1 +Val2)/2;
    long long y = x - Val1;

    return {(int)x, (int)y};
}

//tc = o(n), sc= o(1)