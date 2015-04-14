class Solution {
public:
    bool isValid(string s) {
 stack<char> st;
 int len=s.length();
 for(int i=0;i<len;i++)
   {
	   switch (s[i])
	   {
	   case '(':st.push('(');
	            break;
	   case ')':if(!st.empty()&&st.top()=='(')
					st.pop();
				else
			     	return false;
				break;
	   case '[':st.push('[');
	            break;
	   case ']':if(!st.empty()&&st.top()=='[')
				    st.pop();
				else
				    return false;
				break;
	  case '{':st.push('{');
	            break;
	  case '}':if(!st.empty()&&st.top()=='{')
					st.pop();
				else
				    return false;
				break;
	   default: 
		   break;
	   }  
   }
   
   if(st.empty())
     return true;
   else 
     return false;
    }
};
