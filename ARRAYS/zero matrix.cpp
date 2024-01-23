#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//BETTER SOLUTION
  /* int col[m] = {0}, row[n] = {0};
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
                 //FIRST WE WILL MARK THE ALL THE 0  ELEMENT AS THE 1
       if (matrix[i][j] == 0) {
         row[i] = 1;
         col[j] = 1;
       }
     }
         }
         //IF ANY OF THEM OF THE ROW OOR THE COLUMN IS MARKED THEN WE WILLMARK
 THE ROW OR COLUMN AS 0 for(int i =0 ;i<n;i++){ for(int j =0;j<m;j++){

                         if(row[i]||col[j])
                                 matrix[i][j]=0;

                 }
         }
         return matrix;
 }

 //TC= O(M*N)+0(M*N) = (2*(M*N))
 //SC=0(M)+0(N)
 */


//OPTIMAL SOLUTION
 int col0 = 1;
 for(int i = 0; i<n; i++){
	 for(int j = 0;j<m;j++){
     if(matrix[i][j]==0){
       matrix[i][0]=0;

       if(j!=0)
       matrix[0][j]=0;
       else
       col0 = 0;    
     }
   }
 }

 for(int i =0;i<n;i++){
   for(int j = 0;j<m;j++){
     if(matrix[i][j]!=0){

       if(matrix[0][j]==0||matrix[i][0]==0){
         matrix[i][j]=0;
       }
     }
   }
 }

 if (matrix[0][0] == 0) {
   for (int j = 0; j < m; j++)
     matrix[0][j] = 0;
 }
 if(col0==0){
   for(int i = 0 ; i<n;i++){
     matrix[i][0]=0;
   
 }
 }

 return matrix;
}