#include <iostream>
using namespace std;

int main() {
	
	 char uin = '0';

	 while (true) {
		 scanf_s("%c", &uin);

		 if (uin >= '1' && uin <= '9') {

			 for (int j = 0; j < uin - 48; j++) {
				 for (int i = 49; i <= 49 + j; i++) {
					 printf("%c", i);
				 }
				 
				 printf("\n");
			 }
			 break;

		 }
		 else if (uin >= 'A' && uin <= 'Z') {
			 
			 for (int j = 0; j < uin - 64; j++) {
				 for (int i = 65; i <= 65 + j; i++) {
					 printf("%c", i);
				 }

				 printf("\n");
			 }
			 break;
		 }
		 else
			 printf("Error: Input needs to be number or uppercase letter\n");

	 }
	return 0;
}