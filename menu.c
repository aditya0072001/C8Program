#include<stdio.h>
#include<conio.h>
#include"Algebra.h"
#include"mesuration.h"
#include"trigometry.h"
#include"arithmetic.h"
 int main()
 {
     //choices
     int choice,a,b,c;
     char choice5;
     char choice2;
     char choice3;
     char choice4;
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
     //Trigometry.c declaration1
     double si,cs,tn;
     double degree;
    

     printf("\nThis program does the following functions\n1.Algebra\n2.Trignometry\n3.Mesuration\n4.Arithemetic\n\nPress Esc for exit \t:");
     choice=getche();
    do{ //loop for repeation of menu of choice1
     switch(choice)
     {
         case '1':  //Declared in algebra.c
            printf("\na.Square of (A+B) \t:\nb.Cube of (A+B) \n\nPress Esc for exit  \n");
            choice3=getche();
                do{ //Loop for choice3
                    switch(choice3)
                    {
                        case 'a':
                            printf("\nEnter 2 numbers \t:");
                            scanf("%d%d",&a,&b);
                            aplusbs=aplusbsqr(a,b);
                            printf("\nAnswer is %d \n\nPress Esc for exit" ,aplusbs);
                            choice3=getch();
                            break;  
                        case 'b':
                            printf("\nEnter 2 numbers \t:");
                            scanf("%d%d",&a,&b);
                            aplusbc=aplusbcube(a,b);
                            printf("\nAnswer is %d \n\nPress Esc for exit ",aplusbc);
                            choice3=getch();
                            break; 

                    }              

                }while(((choice3<a)||(choice3>b))&&choice4=='27');
          
         case '2': //Declared in trigonmetry.c
            printf("\ni.Sin Value\nj.Cos Value\nk.Tan Value \n\nPress Esc for exit \t:");
            choice5=getche();
                do{ //Loop for choice5
                    switch(choice5)
                    {
                        case 'i':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            si=sin(degree);
                            printf("Answer is %lf \n\nPress Esc for exit ",si);
                            choice5=getch();
                            break;
                        case 'j':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            cs=cos(degree);
                            printf("Answer is %lf \n\nPress Esc for exit ",cs);
                            choice5=getch();
                            break;
                        case 'k':
                            printf("Enter the degree \t:");
                            scanf("%lf",&degree);
                            tn=tan(degree);
                            printf("Answer is %lf \n\nPress Esc for exit ",tn);
                            choice5=getch();
                            break;
                    }     
                }while(((choice5<'i')||(choice5>'k'))&&choice4=='27');
         case '3': //Declared in mesuration.c
            printf("\nA.RectangleOperations\nB.SquareOperations\nC.RhombusOperations\n Press Esc for exit \t:");
            choice2=getche();
            do{ //loop for repeation of menu of choice2
                switch(choice2)
                {
                    case 'A':
                        printf("\nEnter the length and breath of rectangle \t:");
                        scanf("%d%d",&l,&br);
                        rarea=arearectangle(l,br);
                        rperimeter=perimeterrectangle(l,br);
                        printf("\nArea =%d and Perimeter =%d \n\nPress Esc for exit ",rarea,rperimeter);
                        choice2=getch();
                        break;
                    case 'B':
                        printf("\nEnter side of Square \t:");
                        scanf("%d",&sqside);
                        sarea=areasquare(sqside);
                        sperimeter=perimetersquare(sqside);
                        printf("\nArea =%d and Perimeter =%d \n\nPress Esc for exit ",sarea,sperimeter);
                        choice2=getch();
                        break;
                    case 'C':
                        printf("\nEnter the diagonals and side of rhombus \t:");
                        scanf("%d%d%d",&d1rhombus,&d2rhombus,&srhombus);
                        rharea=arearhombus(d1rhombus,d2rhombus);
                        rhperimeter=perimeterrhombus(srhombus);
                        printf("\nArea =%d and Perimeter =%d \n\nPress Esc for exit ",rharea,rhperimeter);
                        choice2=getch();
                        break;
                }         
            }while(((choice2<'A')||(choice2>'C'))&&choice4=='27');      
          
          case '4': //Declared in arithmetic.c
            printf("\ne.Sum\nf.Substraction\ng.Multiply\nh.Division\n\nPress Esc for exit  \t:");
            choice4=getche();
                do{ //Loop for choice4
                    switch(choice4)
                    {
                        case 'e':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            add=sum(a2,b2);
                            printf("\nAnswer is %d \n\nPress Esc for exit ",add);
                            choice4=getch();
                            break;
                        case 'f':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            minus=substract(a2,b2);
                            printf("\nAnswer is %d \n\nPress Esc for exit ",minus);
                            choice4=getch();
                            break;
                        case 'h':
                            printf("\nEnter two numbers \t:");
                            scanf("%d%d",&a2,&b2);
                            mul=multiply(a2,b2);
                            printf("\nAnswer is %d \n\nPress Esc for exit ",mul);
                            choice4=getch();
                            break;
                        case 'g':
                            printf("\nEnter two numbers \t:");
                            scanf("%f%f",&a3,&b3);
                            div=divison(a3,b3);
                            printf("\nAnswer is %d \n\nPress Esc for exit ",div);
                            choice4=getch();
                            break;
                    }          

                }while(((choice4<'e')||(choice4>'g'))&&choice4=='27');
              
     }
    }while(((choice<'1')||(choice>'4'))&&choice4=='27');
     
   return 0;   
 }