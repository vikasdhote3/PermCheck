int solution(int A[], int N) 
{
    // write your code in C99 (gcc 6.2.0)
    int* arr =(int*)calloc(N,sizeof(int));
    int i;
    
    for(i=0;i<N;i++)
    {
        if(A[i]>0 && A[i]<=N)
        arr[A[i]-1] = 1;
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
        return 0;
    }
    return 1;
}
