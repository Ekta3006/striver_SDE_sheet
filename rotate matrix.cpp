class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int j=0;j<n;j++){
              for(int i=j+1;i<n;i++){
             swap(matrix[i][j],matrix[j][i]); 
        }
    }
        int k;
        for(int i = 0; i < n; i++){
            k = n-1;
            for(int j = 0; j < k; j++){
                swap(matrix[i][j], matrix[i][k]);
                k--;
            }
        }
       }
   
};