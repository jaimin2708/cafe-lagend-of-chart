import java.util.Scanner;
class Simpal
{
    int l;
    int b;
    int h;

    void getdata(Scanner sc)
    {
        System.out.println("enter the value of length breath and height");
        l = sc.nextInt();
        b = sc.nextInt();
        h = sc.nextInt();
    }
    void swap(Simpal s3,Simpal s4)
    {
        int temp,ptr,str;
        temp = s3.l;
        s3.l = s4.l;
        s4.l = temp;

        ptr = s3.b;
        s3.b = s4.b;
        s4.b = ptr;

        str = s3.h;
        s3.h = s4.h;
        s4.h = str;

    }
    void print()
    {
        System.out.println("length: "+ l +"breath: " + b + "height: " + h);
    }
public static void main(String []args)
{
    Simpal s1 = new Simpal();
    Simpal s2 = new Simpal();
    Simpal s3 = new Simpal();
    Scanner sc = new Scanner(System.in);
    s1.getdata(sc);
    s2.getdata(sc);
    System.out.println("Befor swaping");
    s1.print();
    s2.print();
    s3.swap(s1,s2);
    System.out.println("After swaping");
    s1.print();
    s2.print();
}
}