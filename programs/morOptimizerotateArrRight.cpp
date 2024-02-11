class Solution {
public:
    void revarr(vector<int>& arr , int start, int end){
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0){
            return;
        }
        revarr(nums,0,n-1);
        revarr(nums,0,k-1);
        revarr(nums,k,n-1);
    }