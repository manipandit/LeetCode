
#include<bits/stdc++.h>
using namespace std;
// void reverse(int arr[],int N)
// {
    
// }

int main()
{
    int t;
	cin>>t;
	int arr[100];
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int l=0;
	    int r=n-1;
	    
	    while(l<r)
	    {
	        swap(arr[l++],arr[r--]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<' ';
	    }
	    cout<<endl;
	    
	}
}