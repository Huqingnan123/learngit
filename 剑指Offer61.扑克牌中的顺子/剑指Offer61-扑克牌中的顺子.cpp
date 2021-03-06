class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int zeroNum = 0;
        int i = 0;
        while(nums[i++] == 0)
            zeroNum++;
        for( ; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                return false;
            else if(nums[i] - nums[i-1] > 1)
            {
                if(zeroNum >= nums[i] - nums[i-1] - 1)
                    zeroNum = zeroNum - nums[i] - nums[i-1] + 1;
                else
                    return false;
            }
        }
        return true;
    }
};