class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int count=0;
        for(int j=n-1;j>=0;j--)
        {
            if(A[j]==elem)
            {
                count++;
                A[j]=A[j]^A[n-count];
                A[n-count]=A[j]^A[n-count];
                A[j]=A[j]^A[n-count];
            }
        }
        return n-count;
    }
};
