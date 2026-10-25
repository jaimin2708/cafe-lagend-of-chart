class FiboSeries
{
    int fibo(int a,int b,int i)
    {
        if(i == 10)
        {
            return 0;
        }
        else
        {
            int sum;
            sum = a + b;
            System.out.print(sum + " ");
            a = b;
            b = sum;
            i++;
           return fibo(a,b,i);
        }
        
    }
    public static void main(String []args)
    {
        FiboSeries f1  = new FiboSeries();
        System.out.print("1 1 ");
        f1.fibo(1,1,0);

        
    }
}