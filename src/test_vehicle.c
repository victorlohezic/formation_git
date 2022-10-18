#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../src/vehicle.h"

void test_get_number_wheels() {
    printf("%s", __func__);
    struct vehicle v = create_vehicle(4, "Ferrari", 2);
    assert(get_number_wheels(v) == 4);
    printf("\tOK\n");
}

void test_get_number_doors() {
    printf("%s", __func__);
    struct vehicle v = create_vehicle(4, "Ferrari", 2);
    assert(get_number_doors(v) == 2);
    printf("\tOK\n");
}   

int main() {
    test_get_number_wheels();
    test_get_number_doors();
}