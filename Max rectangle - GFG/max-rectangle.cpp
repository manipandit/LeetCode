//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    private:
    vector<int> nextSmallerElement(int *arr, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1); // for last element there will be no elements on right side
    
        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
    
            while (st.top() != -1 && arr[st.top()] >= curr)
            {
                st.pop();
            }
    
            // now at st.top() we have smaller element
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(int *arr, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1); // for last element there will be no elements on right side
    
        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];
    
            while (st.top() != -1 && arr[st.top()] >= curr)
            {
                st.pop();
            }
    
            // now at st.top() we have smaller element
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(int *heights,int n)
    {
        //int n = heights.size();
    
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
    
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
    
        int area = INT_MIN;
    
        for (int i = 0; i < n; i++)
        {
            int length = heights[i];
    
            if (next[i] == -1)
            {
                next[i] = n;
            }
    
            int breadth = next[i] - prev[i] - 1;
    
            int newArea = length * breadth;
            area = max(area, newArea);
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        //n=rows m=cols
        
        //compute area for 1st row
        int area = largestRectangleArea(M[0],m);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j] == 1)
                {
                    M[i][j] = M[i][j] + M[i-1][j];
                }
                
                else
                {
                    M[i][j] = 0;
                }
            }
            
            //row is updated
            area = max(area ,largestRectangleArea(M[i],m));
        }
        
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends