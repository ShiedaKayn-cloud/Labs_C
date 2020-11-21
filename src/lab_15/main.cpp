#include "Employee.h"

int main() {
	int size = 3;
	struct Employee* arrEmployeers;
	arrEmployeers = (struct Employee*)malloc(size * sizeof(struct Employee));
	fread(arrEmployeers,size);
	write(arrEmployeers,size);
	sort(arrEmployeers,size);
	fwrite(arrEmployeers,size);
	struct Employee* employee = (struct Employee*)malloc(1 * sizeof(struct Employee));
	employee = &create();
	write(employee,1);
	fwriteB(employee,1);
	
	return 0;
}