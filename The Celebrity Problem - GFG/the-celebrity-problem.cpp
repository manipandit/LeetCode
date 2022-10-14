//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M,int a,int b,int n)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
      stack<int> s;
      int ans;
      
      //step1 push all candidates to stack
      for(int i=0;i<n;i++)
      {
          s.push(i);
      }
      
      //step2 take 2 candidates and compare
      
      while(s.size()>1)
      {
          int a=s.top();
          s.pop();
          
          int b=s.top();
          s.pop();
          
          if(knows(M,a,b,n))
          {
              s.push(b);
          }
          else
          {
              s.push(a);
          }
      }
      
      //step3 only one candidate will be left and might be potential ans so we have to verify
      
      int candidate=s.top();
      s.pop();
      
      int zeroCount=0; //rowcheck
      
      for(int i=0;i<n;i++)
      {
          if(M[candidate][i]==0)
          {
              zeroCount++;
          }
      }
      
      
      int oneCount=0; //colcheck
      
      for(int i=0;i<n;i++)
      {
          if(M[i][candidate]==1)
          {
              oneCount++;
          }
      }
      
      if(zeroCount==n && oneCount==n-1)
      {
          ans=candidate;
      }
      else
      {
          return -1;
      }
      
      return ans;
      
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends