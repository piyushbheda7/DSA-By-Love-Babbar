class Solution {
    public int reverse(int x) {
        int rem = 0 , num = 0;
        // int flag = 0 ;
        // if(x < 0)
        // {
        //     flag = 1 ;
        //     x *= (-1); 
        // }
        // temp = x ;
        while(x != 0)
        {
            if(num > Integer.MAX_VALUE/10 || num < Integer.MIN_VALUE/10) return 0 ;
            rem = x % 10 ;
            num = (num*10) + rem ;
            x /= 10 ;
        }
        // if(flag == 1) num *= (-1) ;
        
        return num ;
    }
}