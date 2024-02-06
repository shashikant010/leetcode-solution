class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>sol;
        int n=words.size();
        for(int i=0;i<n;i++){
            int ws=words[i].size(); //ws==word size
            for(int j=0;j<ws;j++){
                if(words[i][j]==x){
                    sol.push_back(i);
                    break;
                }
            }
        }
        return sol;
    }
};