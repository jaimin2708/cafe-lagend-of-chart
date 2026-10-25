import java.util.Scanner;
class Addition
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int []arr1;
        int []arr2;
        int []arr3;
        System.out.println("Enter the size of array");
        int size  = sc.nextInt();
        arr1 = new int[size];
        arr2 = new int[size];
        arr3 = new int[size];
        int i,j;
        int temp;
        for(i=0;i<size;i++)
        {
            arr1[i]  = sc.nextInt();
        }
        for(i=0;i<size;i++)
        {
            arr2[i]  = sc.nextInt();
        }
        for(i=0;i<size;i++)
        {
            arr3[i]  = arr1[i] + arr2[i];
        }

        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr3[j] < arr3[i])
                {
                    temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }
        for(i=0;i<size;i++)
        {
            System.out.print(arr3[i]+" ");
        }

    }
}