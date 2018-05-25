#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void reverse(char src[]) {

	int len = strlen(src);
	int start = 0;
	int end = len-1;

	while (start < end) {
		char tmp = src[end];
		src[end] = src[start];
		src[start] = tmp;

		start++;
		end--;
	}

}

int main() {
	char src[] = "This is a string";

	reverse(src);

	printf("Reversed str = %s\n", src);

	return 0;
}

