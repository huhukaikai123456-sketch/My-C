#include <stdio.h>

         int main() {

         int my_money = 10000;
	 int my_age = 16;

	 if (my_money >= 10000) {
	 printf("You are rich!Ready for the visa.\n");
	 }
	 else if(my_money < 10000 && my_age < 20) {
         printf("You are young!Time is your wealth.\n");
	 }
	 else  {
         printf("Work harder,apprentice!\n"); 
	 }
	 return 0;
	 }
