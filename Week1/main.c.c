#include <stdio.h>

int main() {
  	char municipalname[60];
	char mayorname[60];
	int population;

	printf("\nWelcome to Windhoek Municipal\n" );

	printf("Enter Municipal Name: ");
	scanf("%59s", municipalname);

	printf("Enter Mayor's Name: ");
	scanf("%59s", mayorname);

	printf("Enter Population: ");
	scanf("%d", &population);

	printf("\nMunicipal Name: %s", municipalname);
	printf("\nMayor's Name: %s", mayorname);
	printf("\nPopulation: %d\n", population);



	return 0;

}