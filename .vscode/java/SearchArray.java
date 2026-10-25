import java.util.Scanner;
class SearchArray
{
    public static void main(String [] args)
    {
        int [] arr;
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.println("Enter the total size of array");
        num = sc.nextInt();
        arr = new int[num];

        for(int i=0;i<num;i++)
        {
            arr[i] = sc.nextInt();
        }

        int n;
        int c=0;
        System.out.println("Enter the number you want to search in aray");
        n = sc.nextInt();

        for(int i=0;i<num;i++)
        {
            if(arr[i]==n)
            {
               
                System.out.println("your number is found at index value"+i);
                return;
            }
        }
        System.out.println("element not fouend");

        
    }
}