int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int a=0,b=0,i,j;
    for(i=0;i<arr_rows;i++)
      for(j=0;j<arr_columns;j++)
      {
          if(i==j)
          {
              a+=arr[i][j];
          }
          if((i+j)==(arr_rows-1))
          {
              b+=arr[i][j];
          }
      }
    return(a>b)?a-b:b-a;
}

