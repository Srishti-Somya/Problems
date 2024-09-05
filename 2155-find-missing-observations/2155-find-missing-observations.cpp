class Solution {
public:
    // void 
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for( int i = 0 ; i < rolls.size() ; i++ )
        {
            sum += rolls[i];
        }
        cout << sum << " "; 
        int tot_rol = rolls.size() + n;
        cout << tot_rol << " ";
        int ans_sum = (mean * tot_rol) - sum;
        cout << ans_sum << " ";
        vector<int> res;
        if(ans_sum > n*6 || ans_sum < 0)
        {
            return res;
        }
        if(ans_sum < n)
        {
            return res;
        }
        int rem = ans_sum % n;
        cout << rem << " ";
        int quo = ans_sum/n;
        cout << quo << " ";
        // int dice_rem = rem % 6;
        
        while(n-1)
        {
            res.push_back(quo);
            n--;
        }
        int left = quo + rem;
        if(quo+rem > 6)
        {
            res.push_back(quo);
            left -= quo;
            for( int i = 0; i < res.size() ; i++ )
            {
                if(res[i] < 6 )
                {
                    if(left)
                    {
                        res[i]++;
                        left--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            res.push_back(quo+rem);
        }
        
        return res;
    }
};