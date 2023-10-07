/*---------------------------------------------------------------*/
/*			Solucion en C			   	*/
/*--------------------------------------------------------------*/
#include <iostream>

int main() {
    int pares[5][2] = {{10, 20}, {5, 15}, {8, 12}, {25, 35}, {30, 40}};
    int suma = 0;

    for (int i = 0; i < 5; ++i) {
        int valor1 = pares[i][0];
        int valor2 = pares[i][1];
        int media = (valor1 + valor2) / 2;
        suma += media;
    }

    int media_aritmetica = suma / 5;

    std::cout << "La media aritmética de los pares de valores es: " << media_aritmetica << std::endl;

    return 0;
}

/*--------------------------------------------------------------*/
/*			Seccion  de datos			*/
/*--------------------------------------------------------------*/
@ DATA SECTION

.data
string:	.asciz	"%d\n"


/*--------------------------------------------------------------*/
/*                     Seccion de codigo			*/
/*--------------------------------------------------------------*/
@ CODE SECTION

.text
.extern printf
.global main
main:
	@ primera ...
	push	{r0, r1}	@ almacenamiento de valores iniciales
	mov 	r0, #3
	mov 	r1, #2
	add 	r2, r0, r1	@ (r0+r1)
	mov 	r2, r2, LSR #1	@ (r0+r1)/2
	mov 	r1, r2		@ impresion del resultado...
	ldr 	r0, =string
	bl	printf

	@ segunda ...
        mov     r0, #4
        mov     r1, #6
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ tercera ...
        mov     r0, #7
        mov     r1, #2
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ cuarta ...
        mov     r0, #0
        mov     r1, #3
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ quinta ...
        mov     r0, #3
        mov     r1, #5
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf
	pop	{r0, r1}	@ recuperacion de estados iniciales para salir
	bx	lr		@ BREAK
