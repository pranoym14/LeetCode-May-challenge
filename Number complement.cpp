class Solution {
public:
    int findComplement(int num) {
        int length=log(num)/log(2);
        length++;
       return  pow(2,length)-1-num;
        //return 0;
    }
};