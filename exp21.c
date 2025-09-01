#include<stdio.h>
int main(){
    int days;
    float fine=0;
    printf("enter the number of days the book is returned late:");
    scanf("%d",&days);
    if (days<=0) {
        printf("no fine book returned on time");
    }
    else if (days<=5){
        fine = days*1.0;
    }
        else if (days <= 10) {
        fine = (5 * 1.0) + (days - 5) * 2.0; 
    }
    else if (days <= 30) {
        fine = (5 * 1.0) + (5 * 2.0) + (days - 10) * 5.0; 
    }
    else {
        printf("Membership cancelled due to delay more than 30 days.\n");
        return 0;
    }

    if (days > 0 && days <= 30) {
        printf("Fine to be paid: Rs. %.2f\n", fine);
    }

    return 0;
}
    
    
        
    
        
    
