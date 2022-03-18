class Solution {
    public boolean isPowerOfTwo(int n) {
        int flag = 0 ;
       for(int i = 0 ; ; i++)
       {
           if(Math.pow(4,i) == n)
           {
               flag = 1 ;
               break ;
           }
           if(Math.pow(4,i) > n)
           {
               break ;
           }
       }
        if(flag == 1) return true ;
        else return false ;
    }
}