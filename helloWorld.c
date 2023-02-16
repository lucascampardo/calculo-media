#include <stdio.h>

int main() {
	// My first semester at FSL I have many classes like algorithm, digital circuits, physical, chemical and obviously math!
	
	int nota1 = 10;
	int nota2 = 7;
	int nota3 = 4;
	int nota4 = 8;
	int media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media > 5) {
	printf("Congratulations! See you next semester!");
	} else {
		printf("You need to study more!");
	}		
	return 0;
}
