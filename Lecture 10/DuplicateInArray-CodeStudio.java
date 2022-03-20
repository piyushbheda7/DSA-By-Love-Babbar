import java.util.ArrayList;

public class Solution {

	public static int findDuplicate(ArrayList<Integer> arr) {

        int xor = 0 ;
        
        // XOR [1 , n - 1]
        for(int i = 1 ; i < arr.size() ; i++)
        {
			xor ^= i ;
        }

        // XOR ing all elements or arraylist
        for(int i = 0 ; i < arr.size() ; i++)
        {
            xor ^= arr.get(i);
        }
        return xor ;
	}
}