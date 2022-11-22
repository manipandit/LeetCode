//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int binarySearch(int nums[], int start,int end,int target) {
        
        
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
        }
        return -1;
    }

    int pivot(int arr[],int n)
    {
        int s=0,e=n-1;
    
        while(s<e)
        {
            int m = s + (e-s)/2;
    
            if(arr[m]>=arr[0])
            {
                s=m+1;
            }
            else
            {
                e=m;
            }
        }
        return s;
    }
    int search(int arr[], int start, int end, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int getPivot = pivot(arr,end+1);
        if(arr[getPivot]<=key && key<=arr[end])
        {
            return binarySearch(arr,getPivot,end,key);
        }
        else
        {
            return binarySearch(arr,start,getPivot-1,key);
        }
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends