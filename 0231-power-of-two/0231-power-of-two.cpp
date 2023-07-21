class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        int bit,i=0;
        while(n!=0)
        {
            bit = n & 1;
            n = n >> 1;
            if(bit==1 && n==0)
            {
               return true;
            }
            else if(bit == 1 && n!=0)
            {
                return false;
            }
            
        }
        return false;
        
    }
};