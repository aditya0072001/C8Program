#include<stdio.h>
#include<conio.h>
#include"Algebra.c"
#include"mesuration.c"
#include"trigometry.c"
#include"arithmetic.c"
 int main()
 {
     int choice,choice2,choice3,a,b,c;
     //Mensuration.c declaration
     int l,b; //Length and breath of rectangle
     int rarea,rperimeter;  //rectangle area and perimeter
     int sqside,sarea,sperimeter;   //square side,area and perimeter
     int srhombus,d1rhombus,d2rhombus;  //Rhombus side digonals
     int rharea,rhperimeter;    //Rhombus area and perimeter
     //Algebra.c declaration
     int aplusbs; //a+b square
     int aplusbc; //a+b cube
    

     printf("\n1.Algebra\n2.Trignometry\n3.Mesuration\n4.Arithemetic");
     choice=getche();
    do{ //loop for repeation of menu of choice1
     switch(choice)
     {
         case '1':  //Declared in algebra.c
            printf("\na.Square of (A+B)\nb.Cube of (A+B)");
            choice3=getche();
                do{
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
            printf("");
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
            printf("");
               
     }
    }while((choice<'1')||(choice>'4'));
     
 }