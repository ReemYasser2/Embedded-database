#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StudentDatabase.h"
#include "StudentManagement.h"

// Variable to keep track of
// number of students
int i/*change this*/ = 0; //  Change this i into number of student in your progrm

void main()

{
	int choice, count, initial_choice, initial_count;
	while (i = 1) {
		printf("Choose the database you want to access\n");
		printf("1. Student Database\n");
		printf("2. Hotel Database\n");
		printf("3. Factory Database\n");
		scanf_s("%d", &initial_choice);
		switch (initial_choice)
		{
		case 1:
			while (i = 1) {
				printf("The Tasks that you "
					"want to perform\n");
				printf("1. Add the Student Details\n");
				printf("2. Find the Student "
					"Details by Roll Number\n");
				printf("3. Find the Student "
					"Details by First Name\n");
				printf("4. Find the Student "
					"Details by Course Id\n");
				printf("5. Find the Total number"
					" of Students\n");
				printf("6. Delete the Students Details"
					" by Roll Number\n");
				printf("7. Update the Students Details"
					" by Roll Number\n");
				printf("8. To Exit\n");
				printf("Enter your choice to "
					"find the task\n");
				scanf_s("%d", &choice);
				switch (choice) {
				case 1:
					add_student();
					break;
				case 2:
					find_rl();
					break;
				case 3:
					find_fn();
					break;
				case 4:
					find_c();
					break;
				case 5:
					tot_s();
					break;
				case 6:
					del_s();
					break;
				case 7:
					up_s();
					break;
				case 8:
					exit(0);
					break;
				}
			}
			break;
		case 2:
			while (i = 1)
			{
				printf("2. Hotel Database\n");
			}
		case 3:
			while (i = 1)
			{
				printf("3. Factory Database\n");
			}
		}
		
	}

		


}
