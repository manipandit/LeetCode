//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here

	   // int start=0,end=n-1;
	   // int ans=0;
	   // while(start<=end)
	   // {
	   //     int mid = (start + (end-start)/2);
	        
	   //     int prev = (mid-1+n)%n;
	   //     int next = (mid+1)%n;
	        
	   //     if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
	   //     {
	   //         ans=mid;
	   //         break;
	   //     }
	        
	   //     else if(arr[start]<=arr[mid])
	   //     {
	   //         start=mid+1;
	   //     }
	        
	   //     else if(arr[mid]<=arr[end])
	   //     {
	   //         end=mid-1;
	   //     }
	   // }
	    
	   // return ans;
	   int low = 0, high = n - 1;
    //   if(arr[low]<=arr[high])
    //   return 0;
      /*returns 0 if array is already sorted*/
    while (low <= high) {
 
        // if first element is mid or
        // last element is mid
        // then simply use modulo so it
        // never goes out of bound.
        int mid = low + (high - low) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;
 
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;
        else if (arr[mid] <= arr[high])
            high = mid - 1;
        else if (arr[mid] >= arr[low])
            low = mid + 1;
    }
    return 0;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends