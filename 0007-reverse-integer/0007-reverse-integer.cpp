class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int dup=x;
        //if(dup<0) dup=abs(dup);
        while(dup){
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev=rev*10+dup%10;  //error 
            dup=dup/10;
        }
        //if(x<0) rev=-rev;
        return rev;
    }
};