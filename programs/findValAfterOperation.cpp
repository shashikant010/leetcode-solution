class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(operations[i][0]!='X'){
                if(operations[i][0]=='+') ++x;
                if(operations[i][0]=='-') --x;
            }
            if(operations[i][0]=='X'){
                if(operations[i][1]=='+') x++;
                if(operations[i][1]=='-') x--;
            }
        }
        return x;
    }
};