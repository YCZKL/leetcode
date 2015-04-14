class Solution {
public:
    int findMin(vector<int> &num) {
/*      //首先想到的方法，比较烂。。
        int n=num.size();
        if(n==1)
        return num[0];
        if(n==2)
        return num[0]>num[1]?num[1]:num[0];
        if(n>=3)
        for(int i=0;i<n;i++)
        {
            if(i==0)
             { 
                 if(num[1]>num[0]&&num[n-1]>num[0])
                 return num[0];
             }
           if(i==n-1)
             {
              if(num[0]>num[i]&&num[n-2]>num[n-1])
               return num[n-1];
                 
             }
          if((i!=0)&&(i!=n-1))
             {
                if(num[i-1]>num[i]&&num[i]<num[i+1])
                 return num[i];  
             }

               
        }
 */ 
 //二分法查找比较方便。。
      int n=num.size();
      int beg=0;
      int end=n-1;
      while(beg<end)
      {
          if(num[end]>num[beg])
            break;
          int mid=(beg+end)/2;
          if(num[beg]>num[mid])
              end=mid;
          else
             beg=mid+1;
      }
      return num[beg];
    }
};
