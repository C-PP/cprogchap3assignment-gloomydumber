//* two_func.c -- a program using two functions in one file */
// main()에서 butler() 함수 호출을 실행하여 확인
#include <stdio.h>
void butler(void);
/* ANSI/ISO C function prototyping */
int main(void) {
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	getchar(); //butler() 호출로 변경하여 실습
	return 0;
}

void butler(void)       /* start of function definition */
{
	printf("You rang, sir?\n");
}
