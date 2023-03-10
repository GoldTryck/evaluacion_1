'''
@date 10-03-2023
@author Larios Ponce Hector Manuel
@version 1.0
'''
import os
def leerNum():
    '''
    Name: leerNum
    Return: int
    '''
    while(1):
        try:
            num = int(input("Registre su entrada: "))
            break
        except ValueError:
            print("Error. Debe ingresar un numero entero valido.")
    return num
def sumaPares():
    '''
    Name: sumaPares
    Return: none
    '''
    print("\tSuma de dos numeros pares")
    print("\nLeyendo numero...")
    num1 = leerNum() 
    print("\nLeyendo numero...")
    num2 = leerNum()
    if num1 % 2 == 0 and num2 % 2 == 0:
        res = num1 + num2
        print(num1," + ",num2," = ",res)
    else: print("La suma no se puede realizar debido a que alguno de los numeros no es par.")

def restaMultiplos():
    '''
    Name: restaMultiplos
    Return: none
    '''
    print("\tResta de dos numeros multiplos de 5.")
    print("\nLeyendo numero...")
    num1 = leerNum() 
    print("\nLeyendo numero...")
    num2 = leerNum()
    if num1 % 5 == 0 and num2 % 5 == 0:
        res = num1 - num2
        print(num1," - ",num2," = ",res)
    else: print("La suma no se puede realizar debido a que alguno de los numeros no es multiplo de 5.")

def divisionExacta():
    '''
    Name: divisionExacta
    Return: none
    '''
    print("\tDivision exacta de dos numeros.")
    print("\nLeyendo numero...")
    num1 = leerNum() 
    print("\nLeyendo numero...")
    num2 = leerNum()
    if num1 % num2 == 0:
        res = num1 / num2
        print(num1," / ",num2," = ",res)
    else: print("La division no se puede realizar debido a que la division no es exacta.")

def mult():
    '''
    Name: mult
    Return: none
    '''
    print("\tRMultiplicacion de dos numeros mayores que 10")
    print("\nLeyendo numero...")
    num1 = leerNum() 
    print("\nLeyendo numero...")
    num2 = leerNum()
    if num1 > 10 and num2 > 10:
        res = num1 * num2
        print(num1," * ",num2," = ",res)
    else: print("La multiplicacion no se puede realizar debido a que alguno de los numeros no es mayor que 10")
    
def printMenu():
    '''
    Name: printMenu
    Return: int
    '''
    os.system('clear')
    print("Bienvenido al menú seleccione una opción \n\n")
    print("\t1)Suma\n")
    print("\t2)Resta\n")
    print("\t3)Division\n")
    print("\t4)Multiplicacion\n")
    while(1):
        option = leerNum()
        if(option < 1 or option > 4): print("Error. Seleccione una opcion valida.")
        else: break
    return option

def main():
    '''
    Name: main
    Return: none
    '''
    while(1):
        opc = printMenu()
        os.system('clear')
        if opc == 1:
            sumaPares()
        elif opc == 2:
            restaMultiplos()
        elif opc == 3:
            divisionExacta()
        elif opc == 4:
            mult()
        
        if(str(input("Regresar al menu principal tecla Enter, cualquier otra y Enter para salir: ")) != ""): break

if __name__ == "__main__":
main()

#explique:
''' 
       1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
       El código tiene una función printMenu() de tipo entero. Ejecuta un comando de sistema que limpia los datos de la terminal, 
       limpia el buffer de entrada y recibe una entrada del usuario que se asigna a una variable de tipo entero (option),
       si el valor asignado es diferente de 0 la función retorna la variable option, caso contrario devuelve el valor 0.
       La función principal ejecuta un bucle while mientras la variable flag sea diferente que 4, llama printMenu y asigna el
       valor que retorna a la variable flag, inicializada previamente en 0, después evalúa esta variable y según sea el caso
       imprime un mensaje en la terminal, finalmente al salir del bucle for, imprime otro mensaje en terminal.

       2. ¿Cuál es la sintaxis de un while?

       while bool condition:
           code to execute while condition is true
        
       3. ¿Exite swhitch en python? No existe la funcion switch en python, se puede sustituir con una estructura if-elif-else
       4. ¿Qué es un elif? Es una abreviatura de else if y se usa para agregar nuevas condicionales a la estructura if-else, de forma secuencial, si la primera resuta falsa evalua la siguiente.
       5. ¿Qué función de se ejecuta al correr el script? Se ejecuta la funcion main().

       Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
       Guarde y suba su código a un repositorio.
'''