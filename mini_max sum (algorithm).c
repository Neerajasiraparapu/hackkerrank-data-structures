void miniMaxSum(int arr_count, int* arr) {
      long sum=*arr;
      int min=*arr;
      int max=*arr;
      int i;
      for(i=1;i<arr_count;i++)
      {
          sum+=*(arr+i);
          if(*(arr+i)>max)
          {
              max=*(arr+i);
          }
          if(*(arr+i)<min)
          {
              min=*(arr+i);
          }
      }
      printf("%ld %ld",sum-max,sum-min);

}
