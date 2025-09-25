#include <stdio.h>
#include <string.h>
void main() {
    int amount, notevalue, count, i, remaindermoney;int switch_code=0;
    char yesorno[10];
  printf("Please enter the currency notes inside deposit of machine\n");
    printf("Please enter 'YES' if you entered the notes\n");
    scanf("%s", yesorno);
  
 if (strcmp(yesorno, "YES") == 0) {
        printf("Please enter the amount you want\n");
        scanf("%d", &amount);

        printf("Please enter the value per currency of your notes deposited\n");
        scanf("%d", &notevalue);

         if (amount < notevalue) {
            printf("Amount is less than the note value, can't proceed.\n");
        } else {
            count = amount / notevalue;
            remaindermoney = amount % notevalue;

            printf("The machine will provide you with %d notes of %d\n", count, notevalue);

            switch_code=1;
            for (i = 1; switch_code==1; i++) {
                printf("Dispensing %d note(s)\n", i);
if(i==count)
{
switch_code=0;
            }}

            if (remaindermoney > 0) {
                printf("No change to return, remaining money: %d\n", remaindermoney);
            } else {
                printf("Amount dispensed.\n");
            }
       printf("Collect the amount from the machine.\n");
        }
    } 
    printf("Thank you!\n");
}
