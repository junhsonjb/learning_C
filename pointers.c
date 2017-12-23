#include <stdio.h>
#include <string.h>

int main() {

	int age = 19;
	printf("Address \t Name \t Value\n");
	printf("%p \t %s \t %d\n", &age, "age", age);

	int * p_age = &age;
	printf("%p \t %s \t %p\n", p_age, "p_age", p_age);

	return 0;
}
