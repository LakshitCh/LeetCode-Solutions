class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]){
                
            }
            else{
                reverse(nums.begin(),nums.begin()+i);
                reverse(nums.begin()+i,nums.end());
                reverse(nums.begin(),nums.end());
                for(int i=1;i<n;i++){
                    if(nums[i]>=nums[i-1]){
                        
                    }
                    else{
                        return false;
                    }
                }
                return true;
            }
        }
        return true;
    }
};