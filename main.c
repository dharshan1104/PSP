/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int rm[10],rd[10],lm[10],ld[10],nl,nr,i,sum,sumR=0,sumL=0;
    printf("Enter the no. of forces on thr right \n");
    scanf("%d",&nr);
    printf("Enter the no. of forces on thr left \n");
    scanf("%d",&nl);
    printf("Enter the magnitude of forces and distance on the right \n");
    for(i=0;i<nr;i++)
    {
        scanf("%d",&rm[i]);
        scanf("%d",&rd[i]);
    }
    printf("Enter the magnitude of forces and distance on the left \n");
    for(i=0;i<nl;i++)
    {
        scanf("%d",&lm[i]);
        scanf("%d",&ld[i]);
    }
    for(i=0;i<nr;i++)
    {
        sumR=sumR+rm[i]*rd[i];
    }
    for(i=0;i<nl;i++)
    {
        sumL=sumL+lm[i]*ld[i];
    }
    if(sumR>sumL)
    {
        sum=sumR-sumL;
        printf("The balance will rotate with torque of %d in clockwise direction",sum);
    }
    else if(sumL>sumR)
    {
        sum=sumL-sumR;
         printf("The balance will rotate with torque of %d in anti-clockwise direction",sum);
    }
    else 
    printf("Torque are equal and doesnt rotate");
}