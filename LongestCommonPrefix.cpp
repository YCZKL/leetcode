class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        if (strs.size()==0)
         return "";
        prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            if(prefix.size()==0||strs[i].size()==0)
                return "";
            int len = prefix.size()<strs[i].size()?prefix.size():strs[i].size();
            int j=0;
            for (;j<len;j++){
                if(prefix[j]!=strs[i][j])
                  break;
            }
            prefix=strs[i].substr(0,j);
        }
         
        return prefix;
    }
};
