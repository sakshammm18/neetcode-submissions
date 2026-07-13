class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> setRows;
         unordered_set<int> setCols;
         for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                    setRows.insert(i);
                    setCols.insert(j);
                }
            }
         }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 if(setRows.count(i)|| setCols.count(j)){
                    matrix[i][j]=0;
                 }
            }
         }

    }
};