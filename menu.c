#include<stdio.h>
#include<conio.h>
#include"Algebra.c"
#include"mesuration.c"
#include"trigometry.c"
#include"arithmetic.c"
 int main()
 {
     int choice,choice2,a,b,c;
     int l,b; //Length and breath of rectangle
     int rarea,rperimeter;  //rectangle area and perimeter
     int sqside,sarea,sperimeter;   //square side,area and perimeter
     int srhombus,d1rhombus,d2rhombus;  //Rhombus side digonals
     int rharea,rhperimeter;    //Rhombus area and perimeter

     printf("\n1.Algebra\n2.Trignometry\n3.Mesuration");
     choice=getche();

     switch(choice)
     {
         case '1':  //Declared in algebra.c
            printf("");
          break;
         case '2': //Declared in trigonmetry.c

          break;
         case '3': //Declared in mesuration.c
            printf("\nA.RectangleOperations\nB.SquareOperations\nC.RhombusOperations");
            choice2=getche();
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
          break;
               
     }
     
 }