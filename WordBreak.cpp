class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        vector<bool> wordB(s.length() + 1, false);  
        wordB[0] = true;  
        for (int i = 1; i < s.length() + 1; i++) {  
             for (int j = i - 1; j >= 0; j--) {  
                 if (wordB[j] && wordDict.find(s.substr(j, i - j)) != wordDict.end()) {  
                     wordB[i] = true;  
                 break; //只要找到一种切分方式就说明长度为i的单词可以成功切分，因此可以跳出内层循环。  
                 }  
             }  
        }  
        return wordB[s.length()];  
     }
};
