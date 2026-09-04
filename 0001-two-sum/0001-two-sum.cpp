class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            int find1 = target - a;
            if (freq.find(find1) != freq.end())
            {
                
                ans.push_back(i);
                ans.push_back(freq[find1]);
                return ans;
            }
            else
            {
                freq[a] = i;
                
            }
        }
        return ans;
    }
};