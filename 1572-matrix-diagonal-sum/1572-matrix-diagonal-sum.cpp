class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int sum=0;
      int n=mat.size();
      for(int i=0;i<mat.size();i++){
        sum+=mat[i][i];
      }
      for(int i=mat.size()-1;i>=0;i--){
        sum+=mat[i][n-i-1];
      }
      if(n%2==1){
        sum-=mat[n/2][n/2];
      }
      return sum;
    }
};