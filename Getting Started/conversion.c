
/*Just getting started :D */
#include<stdio.h>

/*
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {

        celsius = (5.0/9.0) * (fahr - 32.0);

        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;   
    }
}
*/

/*With for loop */
/*
int main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
}
*/

/* Reverse order of the table - for loop*/
/*
int main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
}
*/


/*Reverse order of the table - While loop */

int main(){

    float  fahr, celsius;
    float  lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;

    while (fahr >= lower){

        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step; 
    }
}