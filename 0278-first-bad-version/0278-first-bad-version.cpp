// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     long long int l=0;
        int r=n;
        int minbad;
        while(l<=r){
      long long int mid=(l+r)/2;
         if(isBadVersion(mid)==true){
            minbad=mid;
            r=mid-1;
         }
         else{
            l=mid+1;
         }

        }

        return minbad;
    }
};