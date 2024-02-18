#include <stdio.h>
#include <stdlib.h>

int main()
{
  // impresion nombre estudiante
  printf("========================== \n");
  printf("DATOS DEL ESTUDIANTE:\n");
  printf("========================== \n");
  printf("NOMBRE DEL ESTUDIANTE: Daniel Pinon Formoso\n");
  printf("MATRICULA: ES241102457 \n");
  printf("GRUPO: 011 \n");
  printf("\n");

  // inicio de seleccionador de estudiants
  printf("========================== \n");
  printf("SELECCIONADOR DE ESTUDIANTES \n");
  printf("========================== \n");

  // declaracion de variables
  char name[100];
  int age, score, isDoingExtraCurricular;
  int shouldEvaluate = 1;
  char *message = "";
  int points;

  while(shouldEvaluate == 1)
  {
    
    // leer datos del estudiante
    printf("Introduce el nombre del estudiante: ");
    fgets(name, 100, stdin);
    
    printf("Introduce la edad del estudiante: ");
    scanf("%d", &age);
    
    printf("Introduce el promedio del estudiante: ");
    scanf("%d", &score);
    
    printf("¿Participa en actividades extracurriculares o voluntariado (1 para sí, 0 para no): ");
    scanf("%d", &isDoingExtraCurricular);

    // evaluar si cumple con los requisitos
    if(!(age >= 18 && age <= 30 && score >= 80)) 
    {
      printf("\n");
      message = "El estudiante no reúne las condiciones para participar";
      printf("%s \n", message);
    } 
    else 
    {
      // asignacion de puntos
      points = 0;
      message = "Calificado para el programa de tutoria especial";

      if(score >= 80 && score <= 85) points = points + 1;
      if(score >= 86 && score <= 89) points = points + 2;
      if(score >= 90) points = points + 3;
      if(isDoingExtraCurricular == 1) points = points + 1;

      printf("\n");
      printf("Estudiante: %s", name);
      printf("Edad: %d \n", age);
      printf("Promedio: %d \n", score);
      printf("Extracurriculares: %d \n", isDoingExtraCurricular);
      printf("Puntos: %d \n", points);
      printf("%s \n", message);
    }
    printf("\n");
    printf("¿Desea evaluar otro estudiante? (1 para sí, 0 para no): ");
    printf("\n");
    
    scanf("%d", &shouldEvaluate);
    
    // Limpiar el búfer de entrada después de cada scanf
    while (getchar() != '\n');
  }
  exit(0);
}