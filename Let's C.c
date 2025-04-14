#include <stdio.h>

int main(){

//Salary
/*int g_sal,HRA,DA,b_sal;
printf("Enter Basic salary: ");
scanf("%d",&b_sal);
HRA=b_sal*0.4;
DA=b_sal*0.2;
g_sal=HRA+DA+b_sal;
printf("If the Basic salary is %d\n HRA is %d\n DA is %d\n Gross salary is %d",b_sal,HRA,DA,g_sal);*/

//Program to convert distance in Km to m,mm,cm,feet and inches
/*int km,cm,mm,meter;
float feet ,inches;
printf("Enter distance between two cities in Kilometer: ");
scanf("%d",&km);
meter=km*1000;
cm=meter*100;
mm=cm*10;
inches=cm/2.5;
feet=inches*12;
printf("The distance in KM is %d\n",km);
printf("The distance in Meter is %d\n",meter);
printf("The distance in Millimeter is %d\n",mm);
printf("The distance in Centimeter is %d\n",cm);
printf("The distance in Feet is %f\n",feet);
printf("The distance in Inches is %f\n",inches);*/

//MARKS OF FIVE STUDENTS.CALCULATE TOTAL AND PERCENTAGE
/*int math,science,eng,kash,cs;
float TotalM,Percent;
printf("Enter marks obtained in Maths:");
scanf("%d",&math);
printf("Enter marks obtained in Science:");
scanf("%d",&science);
printf("Enter marks obtained English:");
scanf("%d",&eng);
printf("Enter marks obtained in Kashmiri:");
scanf("%d",&kash);
printf("Enter marks obtained in Computer science:");
scanf("%d",&cs);
TotalM=math+science+eng+kash+cs;
Percent=(TotalM/500)*100;
printf("Total marks obtained by student out of 500 is %f\n and Percentage is %f",TotalM,Percent);*/

//convert F to C
//float Farenheit,Celsius;
//printf("Enter Temperature in Farenheit:");
//scanf("%f",&Farenheit);
//Celsius=(Farenheit-32)*5/9;
//printf("When temperature is %.1f%cF in Farenhrit, It is equal to %.1f%cC in Celsius",Farenheit,Celsius);

//area and perimeter of RECTANGLE
/*float len, brdth, area, peri; 
printf("Enter length of Rectangle:\n");
scanf("%f",&len);
area=len*brdth;
peri=2*(len+brdth);
printf("AREA of the given Rectangle is : %f\n Perimeter of the given Reactangle is : %f\n",area,peri);*/

//area and circumference of CIRCLE
/*float radius;
printf("Enter radius of Circle:\n");
scanf("%f",&radius);
float area, peri;
area=3.14*radius*radius;
peri=2*3.14*radius;
printf("AREA of the given circle is : %f\n Perimeter of the given circle is : %f\n",area,peri);*/

//Interchange 
/*nt C,D;
printf("Enter a number for C:");
scanf("%d",&C);
printf("Enter a number for D:");
scanf("%d",&D);
C=C+D;
D=C-D;
C=C-D;
printf("Number in C is %d\n Number in D is %d",C,D);*/

//sum of digits
/*int Num,sum;
printf("Enter a five digit number:");
scanf("%d",&Num);
sum=0;
while(Num !=0){
 sum += Num % 10;
 Num = Num/10;
}
printf("Sum of digits of given number is %d",sum);*/

//reverse 5 digit number
/*int num,a,b,c,d,reverse,d1,d2,d3,d4,d5;
printf("Enter a five digit number:");
scanf("%d",&num);
d5=num%10;
a=num/10;

d4=a%10;
b=a/10;

d3=b%10;
c=b/10;

d2=c%10;
d=c/10;

d1=d%10;
reverse=d5*10000+d4*1000+d3*100+d2*10+d1;
printf("The reverse of the given number is %d",reverse);*/

//sum of first and last digit
/*int num,sum,d1,d4;
printf("Enter a four digit number:");
scanf("%d",&num);
d4=num%10;
d1=num/1000;
sum=d1+d4;
printf("Sum of first and last digit is %d",sum);*/

//Percentage population
/*int men,women,lit,mlit,totalp,litw,illitm,illitw;
totalp=80000;
men=(52*80000)/100;
women=totalp-men;
lit=(48*80000)/100;
mlit=(35*80000)/100;
litw=lit-mlit;
illitm=men-mlit;
illitw=women-litw;
printf("Total population = %d\n",totalp);
printf("Total men = %d\n",men);
printf("Total women = %d\n",women);
printf("Total literate men = %d\n",mlit);
printf("Total  literate women = %d\n",litw);
printf("Total illiterate men = %d\n",illitm);
printf("Total illiterate women = %d\n",illitw);*/

//currency
/*int amount,hundnote,fiftynote,tensnote;
printf("Enter any amount: ");
scanf("%d",&amount);
hundnote=amount/100;
fiftynote=(amount%100)/50;
tensnote=((amount%100)%50)/10;
printf("Notes required of Rs.100 : %d\n",hundnote);
printf("Notes required of Rs.50 : %d\n",fiftynote);
printf("Notes required of Rs.10 : %d\n",tensnote);*/

//Cost price
/*int sellingp,profit,costp;
printf("Enter selling price of 15 items:");
scanf("%d",&sellingp);
printf("Enter profit:");
scanf("%d",&profit);
costp=(sellingp-profit)/15;
printf("Cost price of an item is : %d",costp);*/

//add one to each digit
/*int num,a,b,c,d,oneadd,d1,d2,d3,d4,d5;
printf("Enter a five digit number:");
scanf("%d",&num);
d5=num%10+1;
a=num/10;

d4=a%10+1;
b=a/10;

d3=b%10+1;
c=b/10;

d2=c%10+1;
d=c/10;

d1=d%10+1;
oneadd=d1*10000+d2*1000+d3*100+d4*10+d5;
printf("The new number is %d",oneadd);*/

}
