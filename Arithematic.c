#include<stdio.h>
#include<math.h>
int aplusbsqr(int a,int b)
{
    int a,b,answer;

    answer=pow(a,2)+pow(b,2)+2*a*b;

    return answer;
}

int aplusbcube(int a,int b)
{
    int a,b,answer;

    answer=pow(a,3)+pow(b,3)+3*pow(a,2)*b+3*a*pow(b,2);


    return answer;
}