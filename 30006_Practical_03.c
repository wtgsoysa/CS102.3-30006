


 // Question 01
    
    float num1, num2;

    printf ("Enter the First Number: ");
    scanf ("%f”, &num1);

    printf ("Enter the Second Number: ");
    scanf ("%f”, &num2);

    if (num1>num2) {
        printf ("The Highest Number is: %f\n”, num1);
    }
    else if(num2>num1) {
        printf ("The Highest Number is: %f\n”, num2);
    }
    else {
        printf ("Both numbers are equal.\n");
    } 



 // Question 02

    int num1, num2, num3, largest, smallest;

    printf ("Enter Integer Numbers:");
    scanf ("%d”, &num1);

    printf ("Enter Integer Numbers:");
    scanf ("%d”, &num2);

    printf ("Enter Integer Numbers:");
    scanf ("%d", &num3);

    largest=num1;
    if(num2>largest) {
            largest=num2;
    }
    if(num3>largest) {
            largest=num3;


    }
    printf ("Largest value is:%d\n",largest);


    smallest=num1;
    if(num2<smallest){
            smallest=num2;

    }

    if(num3<smallest){
            smallest=num3;



    }
    printf("Smallest value is: %d\n”, smallest);

    




 // Question 03

    char eName [50];
    printf ("Enter employee name:");
    scanf ("%s”, &eName);

    float bSalary, nSalary, incr;
    printf ("Enter basic salary:");
    scanf("%f",&bSalary);

    if(bSalary<5000){
        incr=bSalary*0.05;
    }
    else if(bSalary<10000){
        incr=bSalary*0.10;
    }
    else{
        incr=bSalary*0.15;
    }

    nSalary=bSalary+incr;

    printf("Employee Name:%s\n",eName);
    printf("New Salary:%.2f\n",nSalary);
    



    //Question 04
    
    float PI=3.14159;
    float radius,diameter,circumference,area;

    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    diameter=2*radius;
    circumference=2*PI*radius;
    area=PI*radius*radius;

    printf("Diameter:%f\n",diameter);
    printf("Circumference:%f\n",circumference);
    printf("Area:%f\n",area);

    

    //Question 05
    
    int num1,num2;

    printf("Enter the first integer:");
    scanf("%d",&num1);

    printf("Enter the second integer:");
    scanf("%d",&num2);

    if(num2!=0&&num1%num2==0){
        printf("is a multiple of %d\n",num1,num2);
    }
     else {
        printf("is not a multiple of %d\n",num1,num2);
    }   


    //Question 07
    

    int Bsalary, Exp, Msales, salary = 0;
    char Wplace;

    printf("Enter the Basic Salary: ");
    scanf("%d", &Bsalary);

    printf("Enter the Experience Time Period: ");
    scanf("%d", &Exp);

    printf("Enter the Number Of Monthly Salesmen: ");
    scanf("%d", &Msales);

    if (Exp > 5) {
        salary = Bsalary + (Bsalary * 0.1);
    } else {
        salary = Bsalary;
    }

    printf("Enter the First letter of Work Place: ");
    scanf(" %c", &Wplace);

    if (Wplace == 'C' || Wplace == 'c') {
        salary += 2500;
    }

    if (Msales >= 0 && Msales <= 25000) {
        salary += Msales * 0.1;
    } else if (Msales > 25000 && Msales <= 50000) {
        salary += Msales * 0.12;
    } else if (Msales > 50000) {
        salary += Msales * 0.15;
    }
    printf("Gross Monthly Remuneration of a salesman: %d\n", salary);
    return 0;
}









































































































 
