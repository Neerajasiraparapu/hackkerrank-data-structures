void staircase(int n) {
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
