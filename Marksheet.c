#include <stdio.h>
int main() {

int e,u,m,p,c,b,per,total;
printf("Enter English Marks:");
scanf("%d", &e);

 printf("Enter Urdu Marks:");
 scanf("%d", &u);

 printf("Enter Math Marks:");
 scanf("%d", &m);

 printf("Enter Physics Marks:");
 scanf("%d", &p);

 printf("Enter Chemistry Marks:");
 scanf("%d", &c);

 printf("Enter Biology Marks:");
 scanf("%d", &b);

 total= e+u+m+p+c+b;
 per= total*100/600;

printf("Subject        Max.Marks      obt.Marks      \n");
printf("-----------------------------------------------\n");
printf("English           100             %d            \n",e);
printf("Urdu              100             %d            \n",u);
printf("Math              100             %d            \n",m);
printf("Physics           100             %d            \n",p);
printf("Chemistry         100             %d            \n",c);
printf("Biology           100             %d            \n",b);
printf("-------------------------------------------------\n");

printf("    Total Marks :  %d |    Percentage  %d %%  \n", total,per);

    return 0;
}