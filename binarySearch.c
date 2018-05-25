#include "stdio.h"
#include "stdlib.h"


int main() {
	
	int src[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11};

	int left = 0;
	int right = sizeof(src)/sizeof(src[0]) - 1;

	while (left <= right) {
		int mid = (left+right)/2;

		if (left-mid == src[left]-src[mid]) {
			left = mid;
		}
		else {
			right = mid;
		}
		if (abs(left-right) <= 1) {
			if (src[mid] - src[mid-1] > 1)
				printf("Missing no=%d\n", src[mid-1]+1);
			if (src[mid+1] - src[mid] > 1)
				printf("Missing no=%d\n", src[mid]+1);
			return 0;
		}

	}



	return 0;
}


