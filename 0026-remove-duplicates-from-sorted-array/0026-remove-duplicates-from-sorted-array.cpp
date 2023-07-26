class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        for( auto i = nums.begin();i != nums.end(); i++)
        {
            int num = *i;
            for(auto j =i+1; j != nums.end(); j++)
            {
                if(num == *j)
                {
                    nums.erase(j);
                    j--;
                }
            }
        }
        return nums.size();
    }
};