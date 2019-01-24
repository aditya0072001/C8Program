#include<stdio.h>
#include<conio.h>
#include"Algebra.c"
#include"mesuration.c"
#include"trigometry.c"
#include"arithmetic.c"
 int main()
 {
     //choices
     int choice,choice2,choice3,choice4,choice5,a,b,c;
     //Mensuration.c declaration
     int l,b; //Length and breath of rectangle
     int rarea,rperimeter;  //rectangle area and perimeter
     int sqside,sarea,sperimeter;   //square side,area and perimeter
     int srhombus,d1rhombus,d2rhombus;  //Rhombus side digonals
     int rharea,rhperimeter;    //Rhombus area and perimeter
     //Algebra.c declaration
     int aplusbs; //a+b square
     int aplusbc; //a+b cube
     //Arithmetic.c declaration
     int a2,b2;
     int add,minus,mul,div;
     float a3,b3;
     //Trigometry.c declaration
     double si,cs,tn;
     double degree;
    

     printf("\n1.Algebra\n2.Trignometry\n3.Mesuration\n4.Arithemetic");
     choice=getche();
    do{ //loop for repeation of menu of choice1
     switch(choice)
     {
         case '1':  //Declared in algebra.c
            printf("\na.Square of (A+B)\nb.Cube of (A+B)");
            choice3=getche();
                do{ //Loop for choice3
                    switch(choice3)
                        case 'a':
                            printf("\nEnter 2 numbers");
                            scanf("%d%d",&a,&b);
                            aplusbs=aplusbsqr(a,b);
                            printf("\nAnswer is %d",aplusbs);
                            break;
                        case 'b':
                            printf("\nEnter 2 numbers");
                            scanf("%d%d",&a,&b);
                            aplusbc=aplusbcube(a,b);
                            printf("\nAnswer is %d",aplusbc);
                            break;    

                }while((choice3<a)||(choice3>b));
          break;
         case '2': //Declared in trigonmetry.c
            printf("\n8.Sin Value\n9.Cos Value\n10.Tan Value");
            choice5=getche();
                do{ //Loop for choice5
                    switch(choice5)
                        case '8':
                            printf("Enter the degree");
                            scanf("%lf",&degree);
                            si=sin(degree);
                            printf("Answer is %lf",si);
                            break;
                        case '9':
                            printf("Enter the degree");
                            scanf("%lf",&degree);
                            cs=cos(degree);
                            printf("Answer is %lf",cs);
                            break;
                        case '10':
                            printf("Enter the degree");
                            scanf("%lf",&degree);
                            tn=tan(degree);
                            printf("Answer is %lf",tn);
                            break;    
                }while((choice5<8)||(choice5>10));
          break;
         case '3': //Declared in mesuration.c
            printf("\nA.RectangleOperations\nB.SquareOperations\nC.RhombusOperations");
            choice2=getche();
            do{ //loop for repeation of menu of choice2
                switch(choice2)
                    case 'A':
                        printf("\nEnter the length and breath of rectangle");
                        scanf("%d%d",&l,&b);
                        rarea=arearectangle(l,b);
                        rperimeter=perimeterrectangle(l,b);
                        printf("\nArea =%d and Perimeter =%d",rarea,rperimeter);
                        break;
                    case 'B':
                        printf("\nEnter side of Square");
                        scanf("%d",&sqside);
                        sarea=areasquare(sqside);
                        sperimeter=perimetersquare(sqside);
                        printf("\nArea =%d and Perimeter =%d",sarea,sperimeter);
                        break;
                    case 'C':
                        printf("\nEnter the diagonals and side of rhombus");
                        scanf("%d%d%d",&d1rhombus,&d2rhombus,&srhombus);
                        rharea=arearhombus(d1rhombus,d2rhombus);
                        rhperimeter=perimeterrhombus(srhombus);
                        printf("\nArea =%d and Perimeter =%d",rharea,rhperimeter);
                        break;  
            }while((choice2<'A')||(choice2>'C'));      
          break;
          case '4': //Declared in arithmetic.c
            printf("\n6.Sum\n7.Substraction\n8.Multiply\n9.Division");
            choice4=getche();
                do{ //Loop for choice4
                    switch(choice4)
                        case '6':
                            printf("\nEnter two numbers");
                            scanf("%d%d",&a2,&b2);
                            add=sum(a2,b2);
                            printf("\nAnswer is %d",sum);
                            break;
                        case '7':
                            printf("\nEnter two numbers");
                            scanf("%d%d",&a2,&b2);
                            minus=substract(a2,b2);
                            printf("\nAnswer is %d",minus);
                            break;
                        case '8':
                            printf("\nEnter two numbers");
                            scanf("%d%d",&a2,&b2);
                            mul=multiply(a2,b2);
                            printf("\nAnswer is %d",mul);
                            break;
                        case '9':
                            printf("\nEnter two numbers");
                            scanf("%f%f",&a3,&b3);
                            div=divison(a3,b3);
                            printf("\nAnswer is %d",div);
                            break;    

                }while((choice4<6)||(choice4>9));
               
     }
    }while((choice<'1')||(choice>'4'));
     
   return 0;   
 }