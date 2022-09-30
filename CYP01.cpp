/* AUTOR: ADGE. Programa que dado un conjunto de parámetros, sea capaz de calcular la
posición de un elemento en una pantalla de tamaño variable. */

#include <stdio.h>
int main(void) {
	int ancho, alto, x1, y1, x2, y2;
	float porc_x, porc_y, ele_an, ele_al;
	scanf_s("%i %i %f %f %f %f", &ancho, &alto, &porc_x, &porc_y, &ele_an, &ele_al);

	x1 = ancho * porc_x;
	x2 = x1 + (ancho * ele_an);
	y1 = alto * porc_y;
	y2 = y1 + (alto * ele_al);
	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, porc_x, porc_y, ele_an, ele_al, x1, y1, x2, y2);
	return 0;
}
