#include<stdio.h>
struct store
{
    char name[20];
    float price;
    int quantity;

};
struct store upadate(struct store product,float p,int q);
float  mul(struct store stock);
void main()
{
  float p,value;
  int q;
  struct store item = {"jaimin",7.5,6};

  printf("Enter the increment ane decrment price ");
  scanf("%f%d",&p,&q);
   
  item = upadate(item,p,q);
  printf("%s\n",item.name);
  printf("%f\n",item.price);
  printf("%d\n",item.quantity);

  value = mul(item);
  printf("%f",value);



}
struct store upadate(struct store product,float x,int y)
{
      product.price += x;
      product.quantity += y;
      return(product);



}
float mul(struct store item)
{
   float a;
   a = item.price * item.quantity;
   return(a);


}
