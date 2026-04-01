class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int low=0;
        int high=nums.size()-1;
        int i=-1;
        int j=-1;

        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target) {
                i=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;

            else high=mid-1;
                
        }
        int low1=0;
        int high1=nums.size()-1;

        while(low1<=high1){
            int mid=(high1+low1)/2;
            if(nums[mid]==target) {
                j=mid;
                low1=mid+1;   
            }
            else if(nums[mid]<target) low1=mid+1;

            else high1=mid-1;
                
        }
        return{i,j};
    }
};