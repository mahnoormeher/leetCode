class Solution {
public:
    int search(vector<int>& nums, int target) {
 int index=-1;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                index=i;
                break;
            }
        }
        return index;
    }
};