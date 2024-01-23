#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n =prices.size();
    int maxprofit =0;
    int minelemnet = prices[0];

    for(int i=1;i<n;i++){      // the iteration will be from 1 to further array as the first position is given to the minimum element 
        int cost = prices[i] - minelemnet;
         maxprofit= max(maxprofit,cost);
         minelemnet = min(minelemnet,prices[i]);
        
    } 
    return maxprofit;

    }

    //here the TC = O(N), SC=O(1)
    