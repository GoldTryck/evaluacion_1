/* Laboratorio4
Author: Larios Ponce Hector Manuel
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

//---------------------INSTRUCCIONES-----------------------
//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int leerNum() {
    /* 
    Name: leerNum
    Return: int
    */
    int num;
    char input[10];
    while (1) {
        fgets(input,10,stdin);
        int i = 0;
        while (input[i] != '\0') {
            if(i == 0 && input[0] == '-'){
                i ++;
                continue;
            }
            if(input[i] == '\n'){
                input[i] = '\0';
                break;
            }
            if (!isdigit(input[i])) {
                printf("Error: Debe ingresar un numero entero.\n");
                break;
            }
            i++;
        }
        if (input[i] == '\0') {
            num = atoi(input);
            break;
        }
    }
    fflush(stdin);
    return num;
}
void suma(){
    /* 
    Name: suma
    Return: void
    */
    int num1, num2;
    printf("\tSuma dos numeros pares.\n\n");
    printf("Ingrese un numero entero: ");
    num1 = leerNum();
    printf("Ingrese otro numero entero: ");
    num2 = leerNum();
    if(num1%2 == 0 && num2%2 == 0) printf("\n%d + %d = %d\n",num1,num2,num1 + num2);
    else printf("La suma no se puede realizar debido a que alguno de los numeros no es par.\n");
}
void resta(){
    /* 
    Name: resta
    Return: void
    */
    int num1, num2;
    printf("\tResta de dos numeros impares.\n\n");
    printf("Ingrese un numero entero: ");
    num1 = leerNum();
    printf("Ingrese otro numero entero: ");
    num2 = leerNum();

    if(num1%5 == 0 && num2%5 == 0) printf("\n%d - %d = %d\n",num1,num2,num1 - num2);
    else printf("La resta no se puede ralizar debido a que alguno de los numeros no es impar (multiplo de 5).\n");
}
void division(){
    /* 
    Name: division
    Return: void
    */
    int num1, num2;
    printf("\tDivisi%cn exacta de dos numeros.\n\n",162);
    printf("Ingrese un numero entero: ");
    num1 = leerNum();
    printf("Ingrese otro numero entero: ");
    num2 = leerNum();
    if(num1 % num2 == 0) printf("\n%d / %d = %d\n",num1,num2,num1 / num2);
    else printf("La division no se puede realizar porque la division no es exacta.\n");

}
void mult(){
    /* 
    Name: mult
    Return: void
    */
    int num1, num2;
    printf("\tMultipicaci%cn de dos numeros mayores que 10.\n\n",162);
    printf("Ingrese un numero entero: ");
    num1 = leerNum();
    printf("Ingrese otro numero entero: ");
    num2 = leerNum();
    if(num1 > 10 && num2 > 10) printf("%d",num1 * num2);
    else printf("La multiplicacion no se puede realizar porque alguno de los numeros no es mayor que 10.\n");
}
void printMenu(int *option){
    /* 
    Name: printMenu
    Param: option int
    Return void
    */
    system("cls");
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Suma\n"); printf("\t2)Resta\n"); printf("\t3)Divisi%cn\n",162); printf("\t4)Multipicaci%cn\n",162);
    *option = leerNum();
}
int main(){
    int opc;
    while(1){
    printMenu(&opc);
    system("cls");
    switch(opc){
    case 1:
        suma();
        break;
    case 2:
        resta();
        break;
    case 3:
        division();
        break;
    case 4:
        mult();
        break;
    default:
        printf("No valido.\n\n");
        break;
    }
    printf("\nPara regresar al men%c tecla Enter, cualquier otra tecla y Enter para salir.\n",163);
    if(getchar() != '\n') break; 
    }
    return 0;
}
//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
/*      El código tiene una función printMenu() de tipo entero. Ejecuta un comando de sistema que limpia los datos de la terminal, 
        limpia el buffer de entrada y recibe una entrada del usuario que se asigna a una variable de tipo entero (option),
        si el valor asignado es diferente de 0 la función retorna la variable option, caso contrario devuelve el valor 0.
        La función principal ejecuta un bucle while mientras la variable flag sea diferente que 4, llama printMenu y asigna el
        valor que retorna a la variable flag, inicializada previamente en 0, después evalúa esta variable y según sea el caso
        imprime un mensaje en la terminal, finalmente al salir del bucle for, imprime otro mensaje en terminal.

        2. ¿Para qué sirve la función fflush? 
        Para limpiar el bufer de entrada en este caso, que son todos los caracteres que no fueron leidos, quedando almacenadas en
        el buffer en espera de ser recibidos.

        3. ¿Cuál es la sintaxis de un while? 
        La sintaxis de un bucle while implica una condicion booleana, que se evalua antes de cada ciclo while, mientras la
        condicion sea verdadera se repetira el codigo contenido en el while, caso contrario se saltara esta parte del codigo. 

        4. ¿Cuál es la sintaxis de un switch?
        Swhitch recibe como argumento una expresion y una serie de constantes que se van a comparar con la expresion, si coinsiden
        se ejecuta el bloque de codigo correspondiente, define un caso default el cual ejecutara su codigo si no hay coincidencia
        con ninguna otra constante.

            switch(expresion){
    
                case constante1:
                    //codigo a ejecutar//
                    break; <---- detiene la ejecucion del switch ya que al encontrar coincidencia ejecutara todo el codigo contenido en adelante
                case constante2;
                    //codigo a ejecutar//
                    break;
                default:
                    //código que se ejecuta si no hay coincidencia con constante1 ni constante2//
            }
       
        Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para
        preguntar si se deasea volver al menú principal.
        
        Guarde y suba su código a un repositorio.
        */