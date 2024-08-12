#include <stdio.h>
int main() {
	long a, b, d, e;
	double c;

	printf("birinci sayiyi girin: ");
	scanf_s("%d", &a);
    printf("ikinci sayiyi girin: ");
	scanf_s("%d", &b);
	printf("yapilacak islemi senin\ntopalama islemi icin: 1\ncikartma islemi icin: 2\ncarpma  islemi icin: 3\nbolme islemi icin; 4 \n");
		scanf_s("%d", &d);
		if (d == 1) {
			e = a + b;
			printf("%d + %d = %d", a, b, e);
		}
		else if (d == 2) {
			e = a - b;
			printf("%d + %d = %d", a, b, e);
		}
		else if (d == 3) {
			c = a * b;
			printf("%d * %d = %.6lf", a, b, c);
		}
		else if (d == 4) {
			c = (double)a / b;
			printf("%d / %d = %.9lf", a, b, c);
		}

		else (d > 4); {

			printf("yanlis secim yaptin");

			
		}








	return 0;
		}