#include <stdio.h>
#include <string.h>
#include<locale.h>

int main () 
{
	setlocale (LC_CTYPE,"Russian");

	struct student 
	{
		char surname[15];
		char name[15];
		int age;
		char falucty[15];
	}stud[3];

	char person[15];
	for (int i = 0; i < 3; i++)
	{
		printf("������� ������� ��������: \n");
		scanf("%s", &stud[i].surname);
		printf("\n������� ��� ��������: \n");
		scanf("%s", &stud[i].name);
		printf("\n������� ������� ��������: \n");
		scanf("%d", &stud[i].age);
		printf("\n������� ��������� ��������: \n");
		scanf("%s", &stud[i].falucty);
	}

	printf("������� ������� ��������, ��� ������: \n");
	scanf("%s", person);
	
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(person, stud[i].surname) == 0)
		{
			printf("�������: %s\n", stud[i].surname);
			printf("���: %s\n", stud[i].name);
			printf("�������: %d\n", stud[i].age);
			printf("���������: %s\n", stud[i].falucty);
			return 0;
		}
		else
			printf("��� ������ ������������!");
	}
	return 0;
}