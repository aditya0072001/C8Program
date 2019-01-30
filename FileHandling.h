#include<stdio.h>
#include<conio.h>
int FileSave(float answer)
{
    FILE *fp;
    fopen("Answers.txt","w");
    
    

    fclose(fp);

    return answer;
}