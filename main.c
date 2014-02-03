/* 
 * File:   main.c
 * Author: psycku
 *
 * Created on 29 de Janeiro de 2014, 17:54
 */

#include <stdio.h>
#include <stdlib.h>

#include "Client.h"
#include "Vehicle.h"
#include "General.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    Client clients[CLIENTS_SIZE];
    int i ;
    
    getBirthday(clients, 1);
    
    //for(i=0; i<CLIENTS_SIZE; i++) {
        printf("%d \n", clients[1].birthDay.tm_mday);
        printf("%d \n", clients[1].birthDay.tm_mon);
        printf("%d \n", clients[1].birthDay.tm_year);
    //}
    
    return (EXIT_SUCCESS);
}

