/* 
 * File:   Vehicle.h
 * Author: Psycku
 *
 * Created on 30 de Janeiro de 2014, 15:14
 */

#ifndef VEHICLE_H
#define	VEHICLE_H

#include "Utils.h"

#define REGISTRATION_LENGTH 8+1
#define NAME_LENGTH 100+1
static const int ENGINE_MINIMUM = 0;
static const int ENGINE_MAXIMUM = 9999;
static const int HP_MINIMUM = 0;
static const int HP_MAXIMUM = 9999;
static const int SEATS_MINIMUM = 1;
static const int SEATS_MAXIMUM = 20;

typedef enum type {
    CONVERTIBLE, COUPE, SEDAN, LUXURY, SUV, VAN, TRUCK, HYBRID, WAGON
} Type;

typedef enum fuel {
    DIESEL, GASOLINE
} Fuel;

typedef enum actualStatus {
    A, B
} ActualStatus;


typedef struct vehicleChars {
    unsigned short engine;
    unsigned short hp;
    Fuel fuel;
    unsigned short seats;
} VehicleChars;

typedef struct vehicle {
    char registration[REGISTRATION_LENGTH];
    char name[NAME_LENGTH];
    Type type;
    VehicleChars vehicleChars;
    ActualStatus actualStatus;
} Vehicle;



#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* VEHICLE_H */

