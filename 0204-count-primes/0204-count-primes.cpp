class Solution {
public:
    int countPrimes(int n) 
    {
        vector<bool> Prime(n+1,true);
        int count=0;
        Prime[0] = Prime[1] = false;
        for(int i = 2; i<n; i++)
        {
            if(Prime[i])
            {
                count++;
                for(int j= i*2 ; j<n ; j=j+i)
                {
                    Prime[j]=false;
                }
            }
        }
        return count;
    }
};