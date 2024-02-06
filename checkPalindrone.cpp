class Solution {
public:
    int reversenum(int n){
    int rNum=0;
    while(n>0){
        int r=n%10;
        rNum*=10;
        rNum+=r;
        n/=10;
    }
    return rNum;
}
    
    bool isPalindrome(int x) {
        if(x==reversenum(x)){
        return true;
    }
    else{
        return false;
    }
    }
};