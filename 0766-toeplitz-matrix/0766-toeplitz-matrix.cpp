class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        if(col==1 || row==1)return true; 
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i+1<row && j+1<col)
                {
                    if(matrix[i][j]!=matrix[i+1][j+1])
                    {
                        return false;
                    }
                }
            }
            
        }
        
        return true;
    }
};