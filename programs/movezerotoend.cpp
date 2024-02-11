class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[k]!=0){
                temp.push_back(nums[k]);
            }
        }
        int tsize=temp.size();
        for(int k=0;k<tsize;k++){
            nums[k]=temp[k];
        }
        for(int k=tsize;k<n;k++){
            nums[k]=0;
        }
    }
};