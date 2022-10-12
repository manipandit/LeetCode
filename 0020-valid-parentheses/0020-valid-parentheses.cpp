class Solution {
public:

bool isValid(string expression)
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


};