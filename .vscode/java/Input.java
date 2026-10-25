import java.util.Scanner;
public class Input
{
    public static void main(String []args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enetr the radius");
        int r = input.nextInt();
        int area = r * r;
        System.out.print(area);
    }
}