#ifndef __VEHICLE_H__
#define __VEHICLE_H__


struct vehicle {
    int wheels;
    char* brand;
    int doors;
};

struct vehicle create_vehicle(int nb_wheels, char* brand, int door);

int get_number_wheels(struct vehicle v);

int get_number_doors(struct vehicle v);

char* get_brand(struct vehicle v);

#endif // __CAR_H__