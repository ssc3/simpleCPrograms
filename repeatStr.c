#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	char src[] = "dog";

	int count = 3;

	char* dst = (char*) malloc(count*strlen(src));

	for (int i=0; i<count; i++) {
		strncat(dst, src, sizeof(src));
	}
	printf("Repeated str = %s\n", dst);

	return 0;
}

