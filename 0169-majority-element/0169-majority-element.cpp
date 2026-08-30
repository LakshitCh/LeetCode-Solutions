class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int maj=0;
        for(int x : nums){
            if(j==0)
            maj=x;
            if(x==maj)
            j++;
            else
            j--;
        }
        return maj;
    }
};