#include <stdio.h>

int main() {
    // Determine whether the year is a Bissextile Year
    int year;
    scanf("%d", &year);
    if (year % 400 == 0) printf("Bissextile Year\n");
    else if (year % 100 == 0) printf("Common Year\n"); 
    else if (year % 4 == 0) printf("Bissextile Year\n");
    else printf("Common Year\n");
}
