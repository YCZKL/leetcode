class Solution {
public:
    bool isPalindrome(string s) {
    //晕，不需要考虑大小写，还要考虑是数字的情况。
    int len=s.length();
    int i=0;
    int j=len-1;
    while(i<j)
    {
        if(!isalpha(s[i]))
        {
            i++;continue;
        }
        if(!isalpha(s[j]))
        {
            j--;continue;
        }
        if(s[i]!=s[j])
        return false;
         i++,j--;
    }
    return true;
    }
    
    
   
  bool isalpha(char &c)//引用类型可以修改大写为小写字符。
  {
    if((c>='A'&&c<='Z'))
    {
      c = c-'A'+'a';
      return true;
    }
    return (c>='a'&&c<='z') || (c>='0'&&c<='9');
  }
   
};
