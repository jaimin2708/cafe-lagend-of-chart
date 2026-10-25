interface Shape
{
    void area();
    void display();
    int l = 20;
    int b = 20;
    double r = 10;
}
class Rectangle implements Shape
{
    int answer;
    public void area()
    {
        answer = l * b;
    }
    public void display()
    {
        System.out.println(answer);
    }
}
class Cricle implements Shape
{
    double answer;
    public void area()
    {
        answer = 3.14 *r*r;
    }
    public void display()
    {
        System.out.println(answer);
    }
}
class Area
{
    public static void main(String []args)
    {
        Shape r1 = new Rectangle();
        Shape c1 = new Cricle();

        r1.area();
        r1.display();
        c1.area();
        c1.display();
    }
}