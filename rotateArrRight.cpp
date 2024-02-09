class Solution {
public:
    void rotate(vector<int>& nums, int k) {

int j=0;
        int n=nums.size();
 
        if(n<=k){
            k=k%n;
        }
        if(k==0 ){
            return;
        }
               int temp[n-k];
        for(int i=0;i<n-k;i++){
        temp[i]=nums[i];}
        
        for(int i=n-k;i<n;i++){
            nums[j]=nums[i];
            j++;
        }
        j=0;
         
        for(int i=k;i<n;i++){
           
            nums[i]=temp[j];
            j++;
        }
    }
};