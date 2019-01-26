#include<stdio.h>
#include<conio.h>
#include"Algebra.h"
#include"mesuration.h"
#include"trigometry.h"
#include"arithmetic.h"
 int main()
 {
     //choices
     int choice,choice2,choice3,choice4,choice5,a,b,c;
     //Mensuration.c declaration
     int l,br; //Length and breath of rectangle
     int rarea,rperimeter;  //rectangle area and perimeter
     int sqside,sarea,sperimeter;   //square side,area and perimeter
     int srhombus,d1rhombus,d2rhombus;  //Rhombus side digonals
     int rharea,rhperimeter;    //Rhombus area and perimeter
     //Algebra.c declaration
     int aplusbs; //a+b square
     int aplusbc; //a+b cube
     //Arithmetic.c declaration here
     int a2,b2;
     int add,minus,mul,div;
     float a3,b3;
     //Trigometry.c declaration
     double si,cs,tn;
     double degree;
    

     printf("\n1.Algebra\n2.Trignometry\n3.Mesuration\n4.Arithemetic \t:");
     choice=getche();
    do{ //loop for repeation of menu of choice1
     switch(choice)
     {
         case '1':  //Declared in algebra.c
            printf("\na.Square of (A+B) \t:\nb.Cube of (A+B) \t:");
            choice3=getche();
                do{ //Loop for choice3
                    switch(choice3)
                    {
                        case 'a':
                            printf("\nEnter 2 numbers \t:");
                            scanf("%d%d",&a,&b);
                            aplusbs=aplusbsqr(a,b);
                            printf("\nAnswer is %d",aplusbs);
                            getch();
                            break;  
                        case 'b':
                            printf("\nEnter 2 numbers \t:");
                            scanf("%d%d",&a,&b);
                            aplusbc=aplusbcube(a,b);
                            printf("\nAnswer is %d",aplusbc);
                            getch();
                            break; 
                        default:
                            printf("invalid input, please type again:"); 
                    }              

                }while((choice3<a)||(choice3>b));
          
         case '2': //Declared in trigonmetry.c
            printf("\ni.Sin Value\nj.Cos Value\nk.Tan Value \t:");
            choice5=getche();
                do{ //Loop for choice5
                    switch(choice5)
                    {
                        case 'i':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            si=sin(degree);
                            printf("Answer is %lf",si);
                            getch();
                            break;
                        case 'j':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            cs=cos(degree);
                            printf("Answer is %lf",cs);
                            getch();
                            break;
                        case 'k':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            tn=tan(degree);
                            printf("Answer is %lf",tn);
                            getch();
                            break;
                    }     
                }while((choice5<'i')||(choice5>'k'));
         case '3': //Declared in mesuration.c
            printf("\nA.RectangleOperations\nB.SquareOperations\nC.RhombusOperations \t:");
            choice2=getche();
            do{ //loop for repeation of menu of choice2
                switch(choice2)
                {
                    case 'A':
                        printf("\nEnter the length and breath of rectangle \t:");
                        scanf("%d%d",&l,&br);
                        rarea=arearectangle(l,br);
                        rperimeter=perimeterrectangle(l,br);
                        printf("\nArea =%d and Perimeter =%d",rarea,rperimeter);
                        getch();
                        break;
                    case 'B':
                        printf("\nEnter side of Square \t:");
                        scanf("%d",&sqside);
                        sarea=areasquare(sqside);
                        sperimeter=perimetersquare(sqside);
                        printf("\nArea =%d and Perimeter =%d",sarea,sperimeter);
                        getch();
                        break;
                    case 'C':
                        printf("\nEnter the diagonals and side of rhombus \t:");
                        scanf("%d%d%d",&d1rhombus,&d2rhombus,&srhombus);
                        rharea=arearhombus(d1rhombus,d2rhombus);
                        rhperimeter=perimeterrhombus(srhombus);
                        printf("\nArea =%d and Perimeter =%d",rharea,rhperimeter);
                        getch();
                        break;
                }         
            }while((choice2<'A')||(choice2>'C'));      
          
          case '4': //Declared in arithmetic.c
            printf("\ne.Sum\nf.Substraction\ng.Multiply\nh.Division \t:");
            choice4=getche();
                do{ //Loop for choice4
                    switch(choice4)
                    {
                        case 'e':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            add=sum(a2,b2);
                            printf("\nAnswer is %d",add);
                            getch();
                            break;
                        case 'f':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            minus=substract(a2,b2);
                            printf("\nAnswer is %d",minus);
                            getch();
                            break;
                        case 'h':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            mul=multiply(a2,b2);
                            printf("\nAnswer is %d",mul);
                            getch();
                            break;
                        case 'g':
                            printf("\nEnter two numbers \t:");
                            scanf("%f%f",&a3,&b3);
                            div=divison(a3,b3);
                            printf("\nAnswer is %d",div);
                            getch();
                            break;
                    }          

                }while((choice4<'e')||(choice4>'g'));
              
     }
    }while((choice<'1')||(choice>'4'));
     
   return 0;   
 }