class Solution {
public:
    int maxProduct(int A[], int n) {
        //最大连续子数组乘积
        int LocalMax=A[0];//定义局部最大和最小变量
        int LocalMin=A[0];
        int global=A[0];//定义全局最大值
        if(n==1)
          return A[0];
        else{
            for(int i=1;i<n;i++){
                int maxCopy = LocalMax;
                LocalMax=max(max(LocalMax*A[i],A[i]),LocalMin*A[i]);
                LocalMin=min(min(maxCopy*A[i],A[i]),LocalMin*A[i]);
                global = max(global,LocalMax);
            }
        }
        return global ;
    }
};
