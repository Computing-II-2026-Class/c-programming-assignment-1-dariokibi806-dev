/*KIBI DARIUS*/
/*25/U/BIO/01383/PD*/
# include<stdio.h>
int main()
{
    //define the variables//
 float distancetravelled, fuelused, fuelefficiency;
 printf("enter distancetravelled(km):"); //enter the distance travelled in km//
 scanf("%d",&distancetravelled);//display the distance travelled//
 printf("enter fuelused(litres)");
 scanf("%d",&fuelused);
//calculate the fuelefficiency using the formula: fuelefficiency=distancetravelled/fuelused
 fuelefficiency=(distancetravelled/fuelused);
 printf("fuelefficiency is(km/l):%.2f\n",fuelefficiency); //.2f assign the fuelefficency to 2 decimal places in km/l
 







 return 0;   
}
