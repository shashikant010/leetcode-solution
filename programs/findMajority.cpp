class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority_element=nums[0];
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                majority_element=nums[i];
            }

            if(nums[i]==majority_element){
                count++;
            }
            else{
                count--;
            }
        }
        return majority_element;