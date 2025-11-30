#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  

    
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    
    if (strcmp(month, "01") == 0)
        strcpy(month, "Jan");
    else if (strcmp(month, "02") == 0)
        strcpy(month, "Feb");
    else if (strcmp(month, "03") == 0)
        strcpy(month, "Mar");
    else if (strcmp(month, "04") == 0)
        strcpy(month, "Apr");
    else if (strcmp(month, "05") == 0)
        strcpy(month, "May");
    else if (strcmp(month, "06") == 0)
        strcpy(month, "Jun");
    else if (strcmp(month, "07") == 0)
        strcpy(month, "Jul");
    else if (strcmp(month, "08") == 0)
        strcpy(month, "Aug");
    else if (strcmp(month, "09") == 0)
        strcpy(month, "Sep");
    else if (strcmp(month, "10") == 0)
        strcpy(month, "Oct");
    else if (strcmp(month, "11") == 0)
        strcpy(month, "Nov");
    else if (strcmp(month, "12") == 0)
        strcpy(month, "Dec");

    printf("Formatted date: %s-%s-%s\n", day, month, year);

    return 0;
}