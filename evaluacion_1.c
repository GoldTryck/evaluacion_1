/*
@date <19-02-2023>
@author <Larios Ponce Hector Manuel>
@version <versión 1.0>
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
	char preguntas[10][100] = {"Vive en la misma ciudad?","Tienen mas de 10 anios de edad que tu?","Tiene casa propia?",
	"Tienen el mismo grado de estudios?","Tienen hobbies en comun?","Le gusta el mismo tipo de musica?",
	"Habla el mismo idioma?","Tiene la misma religion?","Tiene hijos?","Sabe cual es tu fecha de nacimiento?",};
	int ponderacion[10] = {4,-4,8,12,2,6,8,12,-4,4};
	float sumaPuntos = 0;

	printf("\nTEST PARA ENCONTRAR AL VERDADERO AMOR DE TU VIDA\n\n");
	printf("\nInstrucciones:\n\n1.Teclee la letra de la opcion que indique su respuesta a la pregunta que se muestra.\n2. Teclee Enter para registrar la seleccion.");
	
	
	for(int i = 0; i < 10;i ++)
	{
		char respuesta;
		do
		{
			
			printf("\n\nPregunta No. %i: %s\n\na)Verdadero\nb)Falso\n",i + 1,preguntas[i]);
			scanf(" %c",&respuesta);
			//Si el usuario introduce alguna de las opciones con letras mayusculas 
			respuesta=tolower(respuesta);
			//Si el usuario ingresa algun otro valor
			if(respuesta < 97 || respuesta > 98) printf("\nERROR. Registre una opcion valida.");
			
		}while(respuesta < 97 || respuesta > 98); //se usa un ciclo do while para asegurarnos que se ingreso una respuesa dentro de rango. 
		
		if(respuesta == 97) sumaPuntos += ponderacion[i];
		else sumaPuntos = sumaPuntos + 2;
	}
	
	//El maximo de puntos a obtener es de 60, 42 puntos representan el 70% del total, tal que:
	
	printf("El porcentaje obtenido fue: %.2f%",(sumaPuntos / 60) * 100);
	if(sumaPuntos > 42) printf("\nEsa persona puede ser conveniente a tus intereses.");
	else printf("\nQuisa esa persona no es lo que buscas en estos momentos.");
	return 0;
}
