class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int i=0,result=0;
        if(len==0)
         return 0;
        reverse(s.begin(),s.end());
        while(s[i]==' ')
           i++;       
		while(i<len&&s[i]!=' '){
				result++;
				i++;
			}           
	    return result;
       }
};
