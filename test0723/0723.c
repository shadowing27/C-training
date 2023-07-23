#define _CRT_SECURE_NO_WARNINGS 1

//为了考虑学生隐私，现打算将学生成绩单科成绩以ABCDE方式呈现，如果:
//a : 学生成绩介于[90，100]间， 请输出A
//b : 学生成绩介于[80，90)间，请输出B
//c : 学生成绩介于[70，80)间，请输出C
//d : 学生成绩介于[60，70)间，请输出D
//b : 学生成绩介于[0，60) 间，请输出E
//e : 否则请输出非法成绩
//请输入一个成绩，然后输出该成绩对应的级别，如果成绩不在[0, 100]间，输出非法成绩


#include<stdio.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	if (score >= 0 && score <= 100)
	{
		if (score >= 90 && score <= 100)
			printf("A");
		else if(score >= 80 && score < 90)
			printf("B");
		else if (score >= 70 && score < 80)
			printf("C");
		else if (score >= 60 && score < 70)
			printf("D");
		else
			printf("E");
	}
	else
		printf("非法成绩");
	return 0;
}
