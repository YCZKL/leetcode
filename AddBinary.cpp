class Solution {
public:
    string addBinary(string a, string b) {
        int lenA=a.length();
        int lenB=b.length();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0,flag=0;       
        string result;
        result= lenA>lenB? a:b; 
        for(;i<min(lenA,lenB);i++){
           if((a[i]-'0'+b[i]-'0'+flag)>=2){             
              result[i]=(a[i]-'0'+b[i]-'0'+flag)-2+'0'; 
			  flag=1;			 
           }
           else{
              result[i]=(a[i]-'0'+b[i]-'0'+flag)+'0';
		      flag=0;
			  }
        }
		      
			for(;i<max(lenA,lenB);i++){
				 if(result[i]-'0'+flag==2){
					  result[i]='0';
					  flag=1;
				 }
				 else{
					   result[i]=result[i]-'0'+flag+'0';
					  flag=0;
				 }				
			 }
			 if(flag==1)
				result.append("1");
			 reverse(result.begin(),result.end());
			 return result;		 
		
        
    }
};
