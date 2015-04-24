class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int len=nums.size();
        if(len<2)
         return 0;
        sort(nums.begin(),nums.end());
        int ret=0;
        for(int j=1;j<len;j++)
        {
            ret=max(ret,nums[j]-nums[j-1]);
        }
        return ret;
    }
};
