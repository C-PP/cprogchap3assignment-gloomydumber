/*
Problem 8

Student ID : 201661701
Student Name : °­µ¿¹Î

Please refer to my coding environment on below Sir.

Solution Platform : X86
Target Platform : Windows 10
Platform Toolset : Visual Studio 2017(v141)
Project Properties - Linker - System - SubSystem : 'Console'
*/

#include <stdio.h>

void convert(void);
void fmsg(void);

int main(void)
{
	fmsg();
	convert();

	/*
	getchar();
	getchar();
	Project Properties - Linker - System - SubSystem : 'Console'
	*/
	return 0;
}

void fmsg(void) // fmsg stands for 'first message'
{
	printf("type volume in 'cup(s)' to convert : ");
}
void convert(void)
{
	float cup, pint, ounce, Ts, ts; 
	scanf("%f", &cup);
	pint = cup * 0.5;
	ounce = cup * 8;
	Ts = cup * 16; // Ts stands for tablespoons
	ts = cup * 48; // ts stands for teaspoons
	printf("CONVERSION RESULT\n");
	printf("%.2f cup(s) =\n", cup);
	printf("pints : %.2f\n", pint);
	printf("ounces : %.2f\n", ounce);
	printf("tablespoons : %.2f\n", Ts);
	printf("teaspoons : %.2f\n", ts);
}

// Q. Why does a floating-point type make more sense for this application than an integer type?
// A. because, 1 cup is 0.5 pints, so this needs floating-point type.

/*
8. In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?
*/