void sortColors(int A[], int n) {
    int i,j;
    for(j=0;j<n-1;j++)
        for(i=0;i<n-1-j;i++)
        {
            if(A[i]>A[i+1]) //数组元素大小按升序排列
            {
                A[i]=A[i]^A[i+1];
                A[i+1]=A[i]^A[i+1];
                A[i]=A[i]^A[i+1];
            }
        }
    
}
