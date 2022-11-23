//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    private:
    bool isPossibleSolution(int arr[],int n,int m,int mid)
    {
        int studentCount =1;
        int noOfPages = 0;
        
        for(int i=0;i<n;i++)
        {
            if(noOfPages + arr[i] <= mid)
            {
                noOfPages += arr[i];
            }
            else
            {
                studentCount++;
                if( studentCount > m || arr[i]>mid)
                {
                    return false;
                }
                noOfPages = arr[i];
            }
        }
        return true;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        
        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        
        //edge cases
        if(m==1)return sum;
        if(m>n)return -1;
        
        int start=0,end=sum;
        
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            
            if(isPossibleSolution(arr,n,m,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends