#include "vehicle.h"

struct vehicle create_vehicle(int nb_wheels, char* brand, int door) 
{
    struct vehicle v = {nb_wheels, brand, door};
    return v;
}


int get_number_wheels(struct vehicle v) {
    return v.wheels;
}


int get_number_doors(struct vehicle v) 
{
    return v.doors;
}

char* get_brand(struct vehicle v)
{
    return v.brand;
}