import java.util.Scanner;
class Test
{
    public static void main(String [] args)
    {
        int day;
        int [] arr;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the total days");
        day = sc.nextInt();
        
         
        arr = new int[day]; 
        System.out.println("Enter the number in array"); 
        for(int i=0;i<day;i++)
        {
            arr[i] = sc.nextInt();
        }
        for(int i=0;i<day;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}