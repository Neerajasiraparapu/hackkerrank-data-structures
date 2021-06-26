int* reverseArray(int a_count, int* a, int* result_count) {
      *result_count = a_count;
      int temp;
      int i,j;
      
      for(i=0,j=a_count-1;i<j;i++,j--)
      {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp; 
      }
      return a;
}
