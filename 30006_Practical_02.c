
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PRACTICAL 02

    // 01 Question

    int age;
    printf("HI, HOW OLD ARE YOU?");
    scanf("%d",&age);
    printf("\n\n");
    printf("%d \n",age);
    printf("%d",age);


    // 02 Question

    printf("%5d%5d%5d\n", 2, 4, 8);	//Right Align
	printf("%5d%5d%5d\n", 3, 9, 27);//Right Align
	printf("%5d%5d%5d\n", 4, 16,64);//Left Align


    // 03 Question

    float dis,time,average;
    printf("Enter the Distance Travelled in Meters:");
    scanf("%f",&dis);
    printf("Enter the Taken Time in Hours :");
    scanf("%f",&time);

    average = dis/time;
    printf("Average Speed is %.2f ms-1",average);

    //Their is a some problems,Because we don't know user Input distant in KM or M


    // 04 Question

    float fahrenheit, celsius;

    // read temperature in degrees Fahrenheit from user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // convert Fahrenheit to Celsius using formula
    celsius = (5.0/9.0) * (fahrenheit - 32.0);


    printf("Temperature in Celsius: %.2f\n", celsius);

    












    return 0;
}
