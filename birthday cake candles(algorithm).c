int birthdayCakeCandles(int candles_count, int* candles) {
    int i,a,count=1;
    a=*candles;
    for(i=1;i<candles_count;i++)
    {
        if(*(candles+i)>a)
        {
        a=*(candles+i);
        count=1;
    }
    else if(*(candles+i)==a)
    {
    count++;
    }
    }
    return count;
}
