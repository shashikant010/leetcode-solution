class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1;
        int j=-1;
        int n=nums.size();
        
        for(int k=0;k<n;k++){
            if(nums[k]==0){
                i=k;
                j=k+1;
                break;
            }
        }
        if(i==-1){
            return;
        }
        while(j<n){
            if(nums[j]!=0){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                 i++;
            }
            
            j++;
        }
        
    }
};