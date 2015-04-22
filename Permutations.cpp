class Solution {
public:
    bool myNextPermutation(vector<int> &num){
        int len=num.size();
        if(len==1)
         return false;
        int i=len-1,j;
        for(j=len-2;j>=0;j--){
            if(num[j]<num[j+1]) break;
        }
        if(j<0)
            return false;
        else{
          while(num[i]<=num[j])
               i--;
              swap(num[i],num[j]);
        }
       reverse(num.begin()+j+1, num.end());
       return true; 
    }
    vector<vector<int> > permute(vector<int> &num) {
        /*
        //方法一：直接调用STL里面的函数next_permutation
        vector<vector<int> > answer;
        sort(num.begin(),num.end());
        do{
            answer.push_back(num);
        }
        while(next_permutation(num.begin(),num.end()));
        return answer;
        */
        //方法二：自己写一个next_permutation
        vector<vector<int> > answer;
        sort(num.begin(),num.end());
        do{
            answer.push_back(num);
        }
        while(myNextPermutation(num));
        return answer;
        
    }
};
