class Solution {
public:
    int majorityElement(vector<int> &num) {
        if(num.size()==1)
        return num[0];
        while(1)
        {   
            int len=num.size();
            int i=rand()%len;
            int count=0;
            for(int j=0;j<len;j++)
            {
                if(num[j]==num[i])
                  count++;
                if(count>len/2)
                 return num[i];
            }
        }
    }
};
