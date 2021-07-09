int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
      *result_count=2;
      int *result=malloc(*result_count*sizeof(int));
      * result=0;
      *(result+1)=0;
      for(int i=0;i<a_count;i++)
      {
          if((*a+i)>*(b+i))
          {
              *(result)=*result +1;
          }
          else if(*(a+i)<*(b+i))
          {
              *(result+1)=*(result+1)+1;
          }
      }
      return result;
}
