class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
         int sum=0;
       for(int j=1;j<m;j++) {
           for(int i=0;i<n;i++) {
               int maxi=INT_MIN;
               if(i-1>=0 && j-1>=0) {
                   maxi = max(maxi,M[i-1][j-1]);
               }
               if(j-1>=0) {
                   maxi = max(maxi,M[i][j-1]);
               }
               if(i+1<n && j-1>=0) {
                   maxi = max(maxi,M[i+1][j-1]);
               }
               M[i][j] += maxi;
               sum = max(sum,M[i][j]);
           }
       }
       return sum;
    }
};
