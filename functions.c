#include <stdio.h>
#include <stdlib.h>



int leapYear(int year) {
  if ((year % 4 == 0) && (year % 100 != 0)) {
    return 1;
  } else if (year % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}



int testDate(int day, int month, int year) {
  int lastDay;
  if (year < 0 || month < 1 || month > 12)
    return 0;
  if (month == 2) {
    if (leapYear(year)) 
      lastDay = 29;
    else
      lastDay = 28;
  } else if (month == 4 || month == 6 || 
             month == 9 || month == 11) {
               lastDay = 30;
  } else
    lastDay = 31;

  if (day < 1 || day > lastDay)
    return 0;

  return 1;
}
