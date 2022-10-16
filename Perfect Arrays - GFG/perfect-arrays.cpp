//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int arr[],int n)
    {
        // Complete the function
        
        
        int newArr[n];
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            newArr[j++]=arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=newArr[i])return false;
        }
        
        return true;
        
        
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends