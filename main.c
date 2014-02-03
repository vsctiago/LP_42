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
#include "Menu.h"
#include "Utils.h"

/*
 * 
 */
int main(int argc, char** argv) {
    Client clients[CLIENTS_SIZE];
    Vehicle vehicle[VEHICLE_MAX];
    int menuOpt, clientOpt;
    
   /* readClientFile(clients);
    
    do {
        Menu();
        scanf("%d", &menuOpt);
        if(menuOpt == 1) {
            ClientMenu();
            scanf("%d", &clientOpt);
            if(clientOpt == 1) {
                addClient(clients);
                saveClientFile(clients);
            } else if(clientOpt == 2) {
                modifyClient(clients);
                
            } else if(clientOpt == 4) {
                listClients(clients);
            }
        } else if(menuOpt == 2) {

        } else {
            
        }
    } while(menuOpt != 5);
    * 
    */
    return (EXIT_SUCCESS);
}

