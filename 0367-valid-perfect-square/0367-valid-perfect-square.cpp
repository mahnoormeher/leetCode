class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        return true;
        int low=1;
        int high=num-1;
        while(low<=high){
            int mid=(low+high)/2;
            if((double)num/mid==mid)
            return true;
            if((double)num/mid<mid)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
};