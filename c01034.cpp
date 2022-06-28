/*
9 50

5

9

16

25

36

49
*/

#include <stdio.h>
#include <math.h>

int main() {
	long long m , n;
	scanf("%lld %lld", &m, &n);
	long long count = 0;
	for(long long i = sqrt(m); i <= sqrt(n); i++) {
		if (i * i >= m) {
			count++;
		}
	}
	printf("%lld\n", count);
	for (long long i = sqrt(m); i <= sqrt(n); i++) {
		if (i * i >= m) {
			printf("%lld\n", i*i);
		}
	}
}