class Solution{
    public:
    
    vector<string> res, phoneNumber = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string str, digits;
    int length;

    void backTracking(int x){
        if (x == length){
            res.push_back(str);
            return;
        }

        int key = digits[x] - '0' - 2;
        for (char c : phoneNumber[key]){
            str.push_back(c);
            backTracking(x + 1);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits){
        length = digits.length();
        if (!length)
            return {};

        str.reserve(length);
        this->digits = digits;
        backTracking(0);
        return res;
    }
};