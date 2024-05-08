#include <stdio.h>
int main() {

    int month=0;
    int day=0;
    int year=0;
    
    printf("Enter a date in the form mm-dd-yy");
    scanf("%d%*c%d%*c%d%", &month, &day, &year);
    printf("month= %d day=%d year= %d\n\n", month, day, year);
   
   
   return 0;


}
   
  


  