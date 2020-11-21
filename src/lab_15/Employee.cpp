#include "Employee.h"

void fread(struct Employee* employee, int size) {
	FILE* file;
	file = fopen(filename, "r");

	for (int i = 0; i < size; i++) {
		fgets(employee[i].name, SIZE, file);
		fgets(employee[i].patronymic, SIZE, file);
		fgets(employee[i].surname, SIZE, file);
		fgets(employee[i].data, SIZE, file);
		fscanf(file, "%d\n", &employee[i].workExperienceInMonth);
		fscanf(file, "%d\n", &employee[i].salary);
		fgets(employee[i].post, SIZE, file);
		fscanf(file, "%d\n", &employee[i].lecturer);
	}
	fclose(file);
}
void fwrite(struct Employee* employee, int size) {
	FILE* file;
	file = fopen(filename, "w");

	for (int i = 0; i < size; i++) {
		fprintf(file, employee[i].name);
		fprintf(file, employee[i].patronymic);
		fprintf(file, employee[i].surname);
		fprintf(file, employee[i].data);
		fprintf(file, "%d\n", employee[i].workExperienceInMonth);
		fprintf(file, "%d\n", employee[i].salary);
		fprintf(file, employee[i].post);
		fprintf(file, "%d\n", employee[i].lecturer);
	}

	fclose(file);
}
void write(struct Employee* employee, int size) {
	for (int i = 0; i < size; i++) {
		printf("Name:%s", employee[i].name);
		printf("Patr.:%s", employee[i].patronymic);
		printf("Surname:%s", employee[i].surname);
		printf("Birthday:%s", employee[i].data);
		printf("WorkExperience:%d\n", employee[i].workExperienceInMonth);
		printf("Salary:%d\n", employee[i].salary);
		printf("Post:%s", employee[i].post);
		printf("Lecturer?:%s\n\n", employee[i].lecturer ? "Yes" : "No");
	}
}
void sort(struct Employee* employee, int size) {
	struct Employee tmp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (employee[j].workExperienceInMonth > employee[j + 1].workExperienceInMonth) {
				tmp = employee[j];
				employee[j] = employee[j + 1];
				employee[j + 1] = tmp;
			}
		}
	}
}
Employee create() {
	Employee employee;
	strcpy(employee.name, "example\n");
	strcpy(employee.patronymic, "example\n");
	strcpy(employee.surname, "example\n");
	strcpy(employee.data, "example\n");
	employee.workExperienceInMonth = rand() % 154 + 17;
	employee.salary = rand() % 50000 + 12000;
	strcpy(employee.post, "example\n");
	employee.lecturer = rand() % 2;

	return employee;
}

void fwriteB(struct Employee* employee, int size) {
	FILE* file;
	file = fopen(filenameB, "wb");
	for (int i = 0; i < size; i++)
		fwrite(&employee, sizeof(Employee), 1, file);

	fclose(file);
}

//void fwriteB(struct Employee* employee, int size) {
//    int n;
//    for (int i = 0; i < size; i++) {
//        writeB(employee[i].name, n = sizeof(employee[i].name) / sizeof(' '));
//        writeB(employee[i].patronymic, n = sizeof(employee[i].patronymic) / sizeof(' '));
//        writeB(employee[i].surname, n = sizeof(employee[i].surname) / sizeof(' '));
//        writeB(employee[i].data, n = sizeof(employee[i].data) / sizeof(' '));
//        char tmp[SIZE];
//        sprintf(tmp, "%d", employee[i].workExperienceInMonth);
//        writeB(tmp, n = sizeof(employee[i].workExperienceInMonth) / sizeof(' '));        
//        char tmp1[SIZE];
//        sprintf(tmp1, "%d", employee[i].salary);
//        writeB(tmp1, n = sizeof(employee[i].salary) / sizeof(' '));
//        writeB(employee[i].post, n = sizeof(employee[i].post) / sizeof(' '));       
//        char tmp2[SIZE];
//        sprintf(tmp2, "%d", employee[i].lecturer);
//        writeB(tmp2, n = sizeof(employee[i].lecturer) / sizeof(' '));
//    }
//}
//int writeB(char message[], int size)
//{
//    FILE* fp;
//    if ((fp = fopen(filenameB, "w")) == NULL)
//    {
//        perror("Error occured while opening file");
//        return 1;
//    }
//    for (int i = 0; i < size; i++)
//    {
//X           putc(message[i], fp);
//    }
//
//    fclose(fp);
//    return 0;
//}
//
Employee freadB()
{
	struct Employee employee;
	FILE* file;
	file = fopen(filenameB, "rb");
		fread(&employee, sizeof(Employee), 1, file);

	fclose(file);
	return employee;
}