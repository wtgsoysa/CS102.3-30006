Programming with C Language >>> 
Practical 04
Soysa W T G - 30006

#include <stdio.h>
#include <stdlib.h>

int main()
{  
    // Question 1
    
    int num,num1;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d Number is even",num);
    }
    else{
        printf("%d number is odd",num);
    } 

    // Part 2 Switch().....
    
    num1 = (num%2 +1);
    switch(num1){
        case 1:printf("%d Number is even",num);
        break;
        case 2:printf("%d Number is Odd",num);
    }


    // Question 2
    
    int operator;
    printf("These are the Arithmetic operators : \n");
    printf("1.Addition [+]\t\t 2.Substraction [-]\n");
    printf("3.Multiplication [*]\t\t 4.Divition  [/]\n\n");

    printf("Please enter the number of operator if you want");
    scanf("%d",&operator);

    switch(operator){
        case 1:printf("1.Addition       [+]");
        break;
        case 2:printf("2.Substraction   [-]");
        break;
        case 3:printf("3.Multiplication [*]");
        break;
        default:printf("4.Divition      [/]");

    }  





        // Question 3
        
        float PI=3.14159;
        float r,circumf,vol,area;
        printf("Enter The Radius : ");
        scanf("%f",&r);

        circumf  =2*PI*r;
        vol      =4/3*PI*r*r*r;
        area     =PI*r*r;

        printf("%f circumferense of the circle \n\n",circumf);
        printf("%f volume of the circle \n\n",vol);
        printf("%f area of the sphere ",area);  */










        // Question 4

        char vowel,a,e,i,o,u;
        printf("Enter The Character :");
        scanf("%s",&vowel);

        switch(vowel){
        case 'a' :
            printf("%c is a Vowel",vowel);
        break;
        case 'e' :
            printf("%c is a Vowel",vowel);
        break;
        case 'i' :
            printf("%c is a Vowel",vowel);
        break;
        case 'o' :
            printf("%c is a Vowel",vowel);
        break;
        case 'u' :
            printf("%c is a Vowel",vowel);
        break;
        default:
            printf("%c is a Not Vowel",vowel);
        break;
    
        


        
        // Question 5
        
    
        int month,yeartype;

        printf("1.Leap Year \n");
        printf("2.Non Leap Year \n");

        printf("Enter the 1 or 2 : ");
        scanf("%d",&yeartype);

        if(yeartype = 1){
                 printf("Enter the Month :");
                 scanf("%d",&month);
                 switch(month){
            case 1 :
                printf("Total Number of Days in January >>> 31");
            break;
            case 2 :
                printf("Total Number of Days in February >>> 29");
            break;
            case 3 :
                printf("Total Number of Days in March >>> 31");
            break;
            case 4 :
                printf("Total Number of Days in April >>> 30");

            break;
            case 5 :
                printf("Total Number of Days in May >>> 31");

            break;
            case 6 :
                printf("Total Number of Days in June >>> 30");

            break;
            case 7 :
                printf("Total Number of Days in July >>> 31");

            break;
            case 8 :
                printf("Total Number of Days in August >>> 31");

            break;
            case 9 :
                printf("Total Number of Days in September >>> 30");

            break;
            case 10 :
                printf("Total Number of Days in Octomber >>> 31");

            break;
            case 11 :
                printf("Total Number of Days in November >>> 30");

            break;
            default :
                printf("Total Number of Days in December >>> 31");
                 }



        }
        else {
            printf("Enter the Month :");
            scanf("%d",&month);
            switch(month){
            case 1 :
                printf("Total Number of Days in January >>> 31");
            break;
            case 2 :
                printf("Total Number of Days in February >>> 28");
            break;
            case 3 :
                printf("Total Number of Days in March >>> 31");
            break;
            case 4 :
                printf("Total Number of Days in April >>> 30");

            break;
            case 5 :
                printf("Total Number of Days in May >>> 31");

            break;
            case 6 :
                printf("Total Number of Days in June >>> 30");

            break;
            case 7 :
                printf("Total Number of Days in July >>> 31");

            break;
            case 8 :
                printf("Total Number of Days in August >>> 31");

            break;
            case 9 :
                printf("Total Number of Days in September >>> 30");

            break;
            case 10 :
                printf("Total Number of Days in Octomber >>> 31");

            break;
            case 11 :
                printf("Total Number of Days in November >>> 30");

            break;
            default :
                printf("Total Number of Days in December >>> 31");

          }
        }
        




    return 0;
}    
