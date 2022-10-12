//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.

    bool isValidParenthesis(string expression)
    {
        // Write your code here.
        stack<char> st;
        for(int i=0;i<expression.length();i++)
        {
            char ch=expression[i];
            
            //if opening bracket push to stack
            if(ch=='{' or ch=='[' or ch=='(')
            {
                st.push(ch);
            }
            else //if closing bracket
            {
                if(!st.empty())
                {
                    char top=st.top();
                    
                    if(top=='(' && ch==')' or top=='[' && ch==']' or top=='{' && ch=='}')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
         if(st.empty())return true;
            else return false;
    }

    bool ispar(string x)
    {
        // Your code here
        return isValidParenthesis(x);
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends