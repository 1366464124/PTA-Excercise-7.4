#include <stdio.h>
int main()
{
	int n, m, a[20], b[20];
	int temp, k, j, i;

	scanf_s("%d %d", &n,&a[0]);
	for (i = 1; i < n; i++) {
		scanf_s("%d", &temp);
		k = 0;
		for (j = 0; j < i; j++) {
			if (temp == a[j]) {
				k++;
				break;
			}
		}
		if (k == 0) a[i] = temp;
		else {
			n--;
			i--;
		}
	}
	scanf_s("%d %d", &m, &b[0]);
	for (i = 1; i < m; i++) {
		scanf_s("%d", &temp);
		k = 0;
		for (j = 0; j < i; j++) {
			if (temp == b[j]) {
				k++;
				break;
			}
		}
		if (k == 0) b[i] = temp;
		else {
			m--;
			i--;
		}
	}

	int count = 0;
	for (i = 0; i < n; i++) {
		k = 0;
		for (j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				k++;
				break;
			}
		}
		if (k == 0) count++;
		if (k == 0 && count == 1) printf("%d", a[i]);
		else if (k == 0 && count >= 2) printf(" %d", a[i]);
	}
	for (i = 0; i < m; i++) {
		k = 0;
		for (j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				k++;
				break;
			}	
		}
		if (k == 0&&count == 0) printf("%d", b[i]);
		else if (!k) printf(" %d", b[i]);
	}
	return 0;
}
