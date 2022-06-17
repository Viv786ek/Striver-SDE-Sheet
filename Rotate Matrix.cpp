void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
  int r=0,c=0;
   int prev,cur;
   while(r<n && c<m){
       if(r+1==n || c+1==m)
           break;
       prev=mat[r+1][c];
        for (int i = c; i < m; i++){
           cur = mat[r][i];
           mat[r][i] = prev;
           prev = cur;
       }
       r++;
        for (int i = r; i < n; i++){
           cur = mat[i][m-1];
           mat[i][m-1] = prev;
           prev = cur;
       }
       m--;
         if (r < n){
           for (int i = m-1; i >= c; i--){
               cur = mat[n-1][i];
               mat[n-1][i] = prev;
               prev = cur;
           }
       }
       n--;
       if (c < m){
           for (int i = n-1; i >= r; i--){
               cur = mat[i][c];
               mat[i][c] = prev;
               prev = cur;
           }
       }
       c++; 
   }
}
