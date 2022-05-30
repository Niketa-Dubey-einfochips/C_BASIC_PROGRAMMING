#include <stdio.h>
int main(int argc , char **argv)
{
   int subtotal  ,grandtotal;
   double tax;
   double taxrate;
   taxrate = 0.175;
   subtotal = 200;
   tax= subtotal*taxrate;
   grandtotal = tax+subtotal;
   printf("the tax on the price %d is %f and the total amount become is %d ", subtotal , tax , grandtotal);
   return 0;

}