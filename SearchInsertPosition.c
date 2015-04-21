int searchInsert(int A[], int n, int target) {
 int i;
 if(A[0]>=target)
  return 0;
 for(i=1;i<n;i++)
 {
     if(A[i]>=target)
      return i;
 }
}
