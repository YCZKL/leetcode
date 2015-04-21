int singleNumber(int A[], int n) {
    int num;
    int i;
    num=A[0];
    for(i=1;i<n;i++)
    {
        num=num^A[i];
    }
    return num;
}
