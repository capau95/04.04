#include <stdio.h>

int ggt(int zahl1, int zahl2) {

	if (zahl1 == zahl2) {
		return zahl1;
	}
	else if (zahl1 > zahl2) {
		return ggt(zahl1 - zahl2, zahl2);
	}
	else {
		return ggt(zahl1, zahl2 - zahl1);
	}
	
}

int main() {

	int zahl1, zahl2;
	
	printf("Geben Sie die erste Zahl ein:\n");
	scanf("%d", &zahl1);
	printf("Geben Sie die zweite Zahl ein:\n");
	scanf("%d", &zahl2);

	printf("Der größte gemeinsame Teiler ist %d\n", ggt(zahl1, zahl2));

}


