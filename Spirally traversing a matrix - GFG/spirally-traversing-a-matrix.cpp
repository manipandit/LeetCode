//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> res;
        
        int left=0,right=c-1;
        int top=0,bottom=r-1;
        int direction=0;
        
        while(left<=right && top<=bottom)
        {
                if(direction==0) // left to right
                {
                    for(int col=left;col<=right;col++)
                    {
                        res.push_back(matrix[top][col]);
                    }
                    top++;
                }
                
                else if(direction==1) //top to bottom
                {
                    for(int row=top;row<=bottom;row++)
                    {
                        res.push_back(matrix[row][right]);
                    }
                    right--;
                }
                
                else if(direction==2) //right to left
                {
                    for(int col=right;col>=left;col--)
                    {
                        res.push_back(matrix[bottom][col]);
                    }
                    bottom--;
                }
                
                else 
                {
                    for(int row=bottom;row>=top;row--)
                    {
                        res.push_back(matrix[row][left]);
                    }
                    left++;
                }
                
                direction = (direction + 1 )%4;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends