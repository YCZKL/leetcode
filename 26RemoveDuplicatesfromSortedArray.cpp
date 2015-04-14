class Solution {
public:
    int removeDuplicates(int A[], int n) {
       /* //超时,二逼的做法。。
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]==A[i+1])
              for(int j=i+1;j<n-1;j++)
                 A[j]=A[j+1];
           count++;
        }
        return n-count;
        */
        
        int index=1;
        if(n==0)
        return 0;
        for(int i=1;i<n;i++)
        {
            if(A[i]!=A[i-1])
             {
               A[index]=A[i];
               index++;
             }
        }
       return index; 
    }
};
