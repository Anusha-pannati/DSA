class Solution {
public:
    int reverse(int x)
    {
        int ans=0;
        while(x!=0)
        {
           int n = x % 10;
           x = x / 10;
           if((INT_MIN/10>ans)||(ans>INT_MAX/10))
           {
              return 0;
           }
            ans=(ans*10)+n;
           
        }
        return ans;
    }
};