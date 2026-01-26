#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Estudiante {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    bool activo;
};

void mostrarInformacionCompleta(struct Estudiante e) {
    printf("\n--- DATOS DEL ESTUDIANTE ---\n");
    printf("Nombre: %s\n", e.nombre);
    printf("Codigo: %s\n", e.codigo);
    printf("Edad: %d anos\n", e.edad);
    printf("Promedio: %.1f\n", e.promedio);
    printf("Estado: %s\n", e.activo ? "Activo" : "Inactivo");
    printf("----------------------------\n");
}

int main() {
    struct Estudiante lista[50];
    int total = 0;
    int opcion;

    do {
        printf("\n--- MENU ACADEMICO ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante especifico\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        getchar();

        if (opcion == 1) {
            printf("Nombre completo: ");
            fgets(lista[total].nombre, 100, stdin);
            lista[total].nombre[strcspn(lista[total].nombre, "\n")] = 0;

            printf("Codigo: ");
            scanf("%s", lista[total].codigo);
            printf("Edad: ");
            scanf("%d", &lista[total].edad);
            printf("Promedio (0-10): ");
            scanf("%f", &lista[total].promedio);
            lista[total].activo = true;

            total++;
            printf("Guardado.\n");

        } else if (opcion == 2) {
            int id;
            printf("Ingrese el numero de estudiante (0 a %d): ", total - 1);
            scanf("%d", &id);
            if (id >= 0 && id < total) {
                mostrarInformacionCompleta(lista[id]);
            } else {
                printf("No encontrado.\n");
            }

        } else if (opcion == 3) {
            for (int i = 0; i < total; i++) {
                printf("%d. %s [%s]\n", i, lista[i].nombre, lista[i].codigo);
            }
        }

    } while (opcion != 4);

    return 0;
}
