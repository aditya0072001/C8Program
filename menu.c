#include<stdio.h>
#include<conio.h>
#include"Algebra.c"
#include"mesuration.c"
#include"trigometry.c"
 int main()
 {
     int choice,choice2,a,b,c;
     int l,b; 
     int rarea,rperimeter;
     int sqside,sarea,sperimeter;
     int srhombus,d1rhombus,d2rhombus;
     int rharea,rhperimeter;

     printf("\n1.Algebra\n2.Trignometry\n3.Mesuration");
     choice=getche();

     switch(choice)
     {
         case '1':
            printf("");
          break;
         case '2':

          break;
         case '3':
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