#include<stdio.h>
#include<math.h>
int aplusbsqr(int n1,int n2)
{
    int answer;

    answer=pow(n1,2)+pow(n2,2)+2*n1*n2;

return answer;
}

int aplusbcube(int n1,int n2)
{
    int answer;

    answer=pow(n1,3)+pow(n2,3)+3*pow(n1,2)*n2+3*n1*pow(n2,2);
    
 return answer;
}