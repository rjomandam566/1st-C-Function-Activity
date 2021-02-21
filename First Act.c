#include <stdio.h>

int main() {

	int english, filipino, science, math, mapeh;

	english = 95;
	filipino = 89;
	science = 92;
	math = 90;
	mapeh = 88;

	int addSub = english + filipino + science + math + mapeh;

	float Ave = (float)addSub / 5;

	printf("The average is: %f\n", Ave);


}