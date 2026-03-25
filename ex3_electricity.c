/*Name: KIBI DARIUS*/
/*Student Number: 25/U//BIO/01383/PD*/

#include<stdio.h>
int main()
{
   // define the variables
   float unitsconsumed, costperunit, totalelectricitybill;

   printf("enter the unitsconsumed:");// enter the unitsconsumed
   scanf("%f",&unitsconsumed);// display and assign the unitsconsumed

   printf("enter the costperunit:");
   scanf("%f",&costperunit);

   //calculate and display the totalelcectricitybill from the fromaula
   totalelectricitybill=((unitsconsumed*costperunit));
   printf("totalelectricitybill is:%.2fUGX\n",totalelectricitybill);



return 0;  
}