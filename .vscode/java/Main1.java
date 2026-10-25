interface Animal
{
    void sound();
};
class Dog implements Animal
{
    public  void sound()
    {
        System.out.println("Dod speaks");
    }
};
class Cow implements Animal
{
    public  void sound()
    {
        System.out.println("Cow speaks");
    }
};
    class Main1
    {
    public static void main(String []args)
    {
        Animal d1 = new Dog();
        d1.sound();
        Animal c1 = new Cow();
        c1.sound();
    }
    }
