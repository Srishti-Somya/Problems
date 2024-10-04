class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int sum;
        // sum = skill.begin() + skill.rbegin();
        int i = 0;
        int j = skill.size()-1;
        sum = skill[i] + skill[j];
        long long res = 0;
        while(i<j)
        {
            int temp_sum = skill[i] + skill[j];
            if(sum != temp_sum)
            {
                return -1;
            }
            res += skill[i]*skill[j];
            i++;
            j--;
        }
        return res;
    }
};