
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Client.h"

void getId(Client *pClients, unsigned short pos) {
    bool valId = false, valExist = true;
    unsigned long id;
    unsigned short i;
    
    do {
        do {
            printf(MSG_ID);
            scanf("%lu", &id);
            if(id > ID_MINIMUM && id < ID_MAXIMUM) {
                valId = true;
            } else {
                printf(MSG_ID_ERROR);
            }
        } while(valId == false);
        for(i=0; i<CLIENTS_SIZE; i++){
            if(pClients[i].id == id) {
                printf(MSG_ID_EXIST_ERROR);
                valExist = true;
                break;
            } else {
                valExist = false;
            }
        }
    } while(valExist == true);
    pClients[pos].id = id;
}

void getName(Client *pClients, unsigned short pos) {
    bool val = false;
    char name[NAME_LENGTH];
    unsigned short i;
    
    do {
        printf(MSG_NAME);
        lerFrase(name, NAME_LENGTH);
        for(i=0; i<NAME_LENGTH && name[i] != '\0'; i++) {
            if(isalpha(name[i]) || isspace(name[i])) {
                val = true;
            } else {
                val = false;
                printf(MSG_NAME_ERROR);
                break;
            }
        }
    } while(val == false);
    strcpy(pClients[pos].name, name);
}

void getStreet(Client *pClients, unsigned short pos) {
    bool val = false;
    char street[STREET_LENGTH];
    unsigned short i;
    
    do {
        printf(MSG_STREET);
        lerFrase(street, STREET_LENGTH);
        for(i=0; i<STREET_LENGTH && street[i] != '\0'; i++) {
            if(isalpha(street[i]) || isspace(street[i])) {
                val = true;
            } else {
                val = false;
                printf(MSG_STREET_ERROR);
                break;
            }
        }
    } while(val == false);
    strcpy(pClients[pos].address.street, street);
}

void getNumber(Client *pClients, unsigned short pos) {
    bool val = false;
    unsigned short number;
    
        do {
            printf(MSG_NUMBER);
            scanf("%hu", &number);
            if(number > NUMBER_MINIMUM && number < NUMBER_MAXIMUM) {
                val = true;
            } else {
                printf(MSG_NUMBER_ERROR);
            }
        } while(val == false);
        pClients[pos].address.number = number;
}

// TODO: FIX BUFFER PROBLEM AFTER ERROR
void getPostalCode(Client *pClients, unsigned short pos) {
    bool val = false;
    char postalcode[POSTALCODE_LENGTH];
    unsigned short i;
    
    do {
        printf(MSG_POSTALCODE);
        lerFrase(postalcode, POSTALCODE_LENGTH);
        getchar();
        if(postalcode[PC_DASH] != '-' && postalcode[PC_END] != '\0'){
            val = false;
        } else {
            for(i=0; i<PC_DASH; i++) {
                if(isdigit(postalcode[i])) {
                    val = true;
                } else {
                    val = false;
                    break;
                }
            }
            if(val == true) {
                for(i=PC_ADASH; i<PC_END; i++) {
                    if(isdigit(postalcode[i])) {
                        val = true;
                    } else {
                        val = false;
                        break;
                    }
                }
            }
        }
    } while(val == false);
    strcpy(pClients[pos].address.postalCode, postalcode);
}

void getCity(Client *pClients, unsigned short pos) {
    bool val = false;
    char city[CITY_LENGTH];
    unsigned short i;
    
    do {
        printf(MSG_CITY);
        lerFrase(city, CITY_LENGTH);
        for(i=0; i<CITY_LENGTH && city[i] != '\0'; i++) {
            if(isalpha(city[i]) || isspace(city[i])) {
                val = true;
            } else {
                val = false;
                printf(MSG_CITY_ERROR);
                break;
            }
        }
    } while(val == false);
    strcpy(pClients[pos].address.city, city);
}

void getPhone(Client *pClients, unsigned short pos) {
    bool val = false;
    unsigned long phone;
    
    do {
        printf(MSG_PHONE);
        scanf("%lu", &phone);
        if(phone > VODAFONE_MINIMUM && phone < VODAFONE_MAXIMUM) {
            val = true;
        } else if (phone > ZON_MINIMUM && phone < ZON_MAXIMUM){
            val = true;
        } else if (phone > OPTIMUS_MINIMUM && phone < OPTIMUS_MAXIMUM){
            val = true;
        } else if (phone > TMN_MINIMUM && phone < TMN_MAXIMUM){
            val = true;
        } else if (phone > LANDLINE_MINIMUM && phone < LANDLINE_MAXIMUM){
            val = true;
        } else {
            printf(MSG_NUMBER_ERROR);
        }
    } while(val == false);
    pClients[pos].phone = phone;
}

void getBirthday(Client *pClients, unsigned short pos) {
    unsigned short day;
    unsigned short month;
    unsigned short year;
    
    day = getDay();
    month = getMonth();
    year = getYear();
    
    pClients[pos].birthDay.tm_mday = day;
    pClients[pos].birthDay.tm_mon = month;
    pClients[pos].birthDay.tm_year = year;
    
}

void addClient(Client *pClients) {
    unsigned short pos;
    
    getId(pClients, pos);
}