class Solution {
public:
    int countDigits(int num) {
     int  val = num;
       int count = 0;
     while( val !=0){
        int rem = val % 10;
        if(num % rem == 0)
        count++;
        val = val/10;
     }
     return count;

    }
};