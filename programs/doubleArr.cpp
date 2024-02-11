class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int ans[2*n];
        vector<int> sol;
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        for(int i=0;i<2*n;i++){
            sol.push_back(ans[i]);
        }
        return sol;
        
    }
};