class Solution {
public:
     long long int binarySearch(int num)
     {
         int start=0;
         int end=num;
         int ans;
         
         while(start<=end)
         {
             long long int mid = start+(end-start)/2;
             long long int squaredValue = mid * mid;
             if(squaredValue==num)
             {
                 return mid;
             }
             else if(squaredValue>num)
             {
                 end=mid-1;
             }
             else
             {
                 ans=mid;
                 start=mid+1;
             }
         }
         return ans;
     }
     int mySqrt(int x) {
       
         return binarySearch(x);
    }
};