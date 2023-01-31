#include <stdio.h>
#include "employee.h"
#include "heap.h"

int main(int argc, char *argv[])
{
	const int MAX_EMPLOYEES;
	scanf("%d", &MAX_EMPLOYEES);
	int counter = 0;
	Employee workerList[];
	while(counter < MAX_EMPLOYEES){
		char workerName[MAX_NAME_LENGTH];
		int paidSalary;
		int nameEnter = 0;
		printf("Enter a name: ");
		scanf("%s", workerName);
		printf("Enter a salary: ");
		scanf("%d", &salary);
		Employee e;
		e.name = workerName;
		e.salary = paidSalary; 
		workerList[counter] = e;
		counter++;
	}
}
