//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool findRedundantBrackets(string &s)
    {
        // Write your code here.
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            
            // if opening bracket or operator
            if(ch=='(' or ch=='+' or ch=='-' or ch=='*' or ch=='/')
            {
                st.push(ch);
            }
            
            else
            {
                
                // if closing or any english characters
                if(ch==')')
                {
                    bool isRedundant=true;
                    while(st.top()!='(')
                    {
                        char top=st.top(); 
                        if(top=='+' or top=='-' or top=='*' or top=='/')
                        {
                            isRedundant=false;
                        }
                        st.pop();
                    }
                    
                    if(isRedundant)return true;
                    st.pop();
                }
            }
        }
        return false;
    }

    int checkRedundancy(string s) {
        // code here
        return findRedundantBrackets(s);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends