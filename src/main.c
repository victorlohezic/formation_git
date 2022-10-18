#include <stdio.h>
#include <stdlib.h>

#include "vehicle.h"

int main(int argc, char *argv[])
{
    printf("Début du scénario \n");
    struct vehicle v = create_vehicle(4, "Ferrari", 2);
    int number_wheels = get_number_wheels(v);
    int number_doors = get_number_doors(v);
    char* brand = get_brand(v);
    printf("Le vehicule a %d roues. \n", number_wheels);
    printf("Le vehicule a %d portes \n", number_doors);
    printf("La marque du véhicule est %s. \n", brand);
    return 0;
}