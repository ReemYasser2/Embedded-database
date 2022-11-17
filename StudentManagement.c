#include "StudentManagement.h"
#include "StudentDatabase.h"

// external data types
/////////////////////////////////////////
extern int i; // Change this i into number of student in your progrm
extern student st[STUDNET_NUM];
//////////////////////////////////////////////////////////////////

// 2- Function to add the student
// 3- Function to find the student
// by the roll number
// 4- Function to find the student
// by the first name
// 5- Function to find
// the students enrolled
// in a particular course
// 6- Function to print the total
// number of students
// 7- Function to delete a student
// by the roll number
// 8- Function to update a students data


//function definetion
/////////////////////////////////////////////////////////

// Function to add the student
void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of student\n");
	scanf_s("%s", st[i].fname);
	printf("Enter the last name"
		" of student\n");
	scanf_s("%s", st[i].lname);
	printf("Enter the Roll Number\n");
	scanf_s("%d", &st[i].roll);
	printf("Enter the CGPA "
		"you obtained\n");
	scanf_s("%f", &st[i].cgpa);
	printf("Enter the course ID"
		" of each course\n");
	for (int j = 0; j < 5; j++) {
		scanf_s("%d", &st[i].cid[j]);
	}
	i = i + 1;
}

// Function to find the student
// by the roll number
void find_rl()
{
	int x;
	printf("Enter the Roll Number"
		" of the student\n");
	scanf_s("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID"
				" of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"The course ID are %d\n",
				st[i].cid[j]);
		}
		break;
	}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	scanf_s("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The Roll Number is %d\n ",
				st[i].roll);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].cid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to find
// the students enrolled
// in a particular course
void find_c()
{
	int id;
	printf("Enter the course ID \n");
	scanf_s("%d", &id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[i].fname);
				printf(
					"The Last name is %s\n",
					st[i].lname);
				printf(
					"The Roll Number is %d\n ",
					st[i].roll);
				printf(
					"The CGPA is %f\n",
					st[i].cgpa);

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
		}
	}
}

// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of"
		" Student is %d\n",
		i);
	printf("\n you can have a "
		"max of 50 students\n");
	printf("you can have %d "
		"more students\n",
		50 - i);
}

// Function to delete a student
// by the roll number
void del_s()
{
	int a;
	printf("Enter the Roll Number"
		" which you want "
		"to delete\n");
	scanf_s("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number"
		" is removed Successfully\n");
}

// Function to update a students data
void up_s()
{

	printf("Enter the roll number"
		" to update the entry : ");
	long int x;
	scanf_s("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (st[j].roll == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. roll no.\n"
				"4. CGPA\n"
				"5. courses\n");
			int z;
			scanf_s("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new "
					"first name : \n");
				scanf_s("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf_s("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"roll number : \n");
				scanf_s("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf_s("%f", &st[j].cgpa);
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf_s(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

