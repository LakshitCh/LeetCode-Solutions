class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> store;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int hi=nums[i];
            int needed=target-hi;
            if(store.find(needed)!=store.end()){
                return {store[needed],i};
            }
            store[hi]=i;
        }
        return {-1,-1};
    }
};