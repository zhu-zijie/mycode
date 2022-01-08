#include <stdio.h>
void main() {
	int i, sum;
	i = 1;
	sum = 0;
	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("1+2+3+4+5+6+7+8+9+10=%d\n", sum);
	return 0;
}