//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int arr[], int N)
    {
    	//code here.
    	int ans=0;
    	
    	int maxi=INT_MIN;
    	int mini=INT_MAX;
    	
    	for(int i=0;i<N;i++)
    	{
    	    maxi = max(maxi,arr[i]);
    	    mini = min(mini,arr[i]);
    	}
    	
    	ans = maxi+mini;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends