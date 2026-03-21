class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>arr(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;

        }
        int j=0;

        for(j=0;j<nums.size();j++){
            if(arr[j]==0){
                break;
            }

        }
        return j;

        
    }
};