#include <stdio.h>
#include <stdlib.h>
void function(float weight);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float weight;    /* user weight             */

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");/*get input from the user  */
	scanf("%f", &weight);      /* assume platinum is $1700 per ounce          */
							   /* 14.5833 converts pounds  */
	function(weight);
	/*
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	*/
	getchar();
	return 0;
}

void function(float weight)       /* start of function definition */
	{
		float value;     /* platinum equivalent     */

		value = 1700.0 * weight * 14.5833;
		printf("weight = %f\n", weight);
		//���⿡ �ڵ��ϴ� ���� �ʿ���
		printf("Your weight in platinum is worth $%.2f.\n", value); // �Ҽ��� ���ڸ� ���
		printf("You are easily worth that! If platinum prices drop,\n");
		printf("eat more to maintain your value.\n");
		system("pause");
	}
