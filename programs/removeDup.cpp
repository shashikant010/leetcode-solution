class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int unique=-200;


        for(int i=0;i<nums.size();i++){
            if(nums[i]!=unique){
                unique=nums[i];
                nums[count]=unique;
                count++;
            }
            
            
            

        }
        return count;
    }
};
