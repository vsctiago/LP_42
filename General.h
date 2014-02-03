/* 
 * File:   General.h
 * Author: Psycku
 *
 * Created on 30 de Janeiro de 2014, 15:03
 */

#ifndef GENERAL_H
#define	GENERAL_H

#include <string.h>
#include <time.h>

#include "Utils.h"

#define MSG_ID "Insert ID(10000000-99999999): "
#define MSG_ID_EXIST_ERROR "ERROR: ID already exists. "
#define MSG_ID_ERROR "ERROR: ID not within limits. "
#define MSG_NAME "Insert name: "
#define MSG_NAME_ERROR "ERROR: Name invalid. "
#define MSG_STREET "Insert street name: "
#define MSG_STREET_ERROR "ERROR: Street name invalid. "
#define MSG_NUMBER "Insert number(1-9999): "
#define MSG_NUMBER_ERROR "ERROR: Number must be between 1 and 9999. "
#define MSG_POSTALCODE "Insert postal code(1111-111): "
#define MSG_POSTALCODE_ERROR "ERROR: Postal code not within limits. "
#define MSG_CITY "Insert city: "
#define MSG_CITY_ERROR "ERROR: City name invalid. "
#define MSG_PHONE "Insert phone number: "
#define MSG_PHONE_ERROR "ERROR: Phone number invalid. (91, 92, 93, 96 or 253"
#define MSG_DAY "Insert day: "
#define MSG_DAY_ERROR "ERROR: Day must be between 1 and 31. "
#define MSG_MONTH "Insert month: "
#define MSG_MONTH_ERROR "ERROR: Month must be between 1 and 12. "
#define MSG_YEAR "Insert year: "
#define MSG_FEB_ERROR "ERROR: February only has 28 days. "
#define MSG_DAYS_ON_MONTH_ERROR "ERROR: Month inserted doesn't have 31 days. "
#define MSG_BIRTHDAY_DAY "Insert birthday day: "
#define MSG_BIRTHDAY_MONTH "Insert birthday month: "
#define MSG_BIRTHDAY_YEAR "Insert birthday year: "
#define MSG_SIGNUPDATE_DAY "Insert signup day: "
#define MSG_SIGNUPDATE_MONTH "Insert signup month: "
#define MSG_SIGNUPDATE_YEAR "Insert signup year: "
#define MSG_DATE_ERROR "ERROR: Invalid day, month or year. "
#define DATE_DAY 0
#define DATE_MONTH 1
#define DATE_YEAR 2
#define DATE_SIZE 3

static const int DAY_MINIMUM = 1;
static const int DAY_MAXIMUM = 31;
static const int MONTH_MINIMUM = 1;
static const int MONTH_MAXIMUM = 12;
static const int YEAR_MINIMUM = 1900;
static const int YEAR_MAXIMUM = 2100;

typedef struct tm Date;

unsigned short getDay();

unsigned short getDate();

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* GENERAL_H */

