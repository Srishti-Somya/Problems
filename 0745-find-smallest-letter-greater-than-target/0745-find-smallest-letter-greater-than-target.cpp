class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res = letters[0];
        int st = 0, end = letters.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(letters[mid] <= target){
                st = mid + 1;
            }else{
                res = letters[mid];
                end = mid - 1;
            }
        }
        return res;
    }
};