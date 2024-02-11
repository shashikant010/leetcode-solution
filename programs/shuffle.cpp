class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int arr[2*n];
        vector<int> sol;
        for(int i=0;i<n;i++){
                arr[2*i]=nums[i];
                arr[2*i+1]=nums[n+i];
            
        }
        for(int i=0;i<2*n;i++){
            sol.push_back(arr[i]);
        }
        return sol;
    }
};