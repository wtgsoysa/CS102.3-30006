
// Q1.
  
    int x =1;
    while (x <= 100) {
        printf ("%d \n”, x);
        x = x +1;
    }
      // Do While..........
    int y =1;
    do {
        printf ("%d \n”, y);
        y = y + 1;

    }
    while (y <=100);
    int z;
    for (z=1; z<=100; z += 1) {
    printf ("%d \n”, z);
  }

    
 // Q2.  
     
    int x=1, total =0,avg,mark;

    while (x <=10) {
        printf ("Enter the Mark %d:”, x);
        scanf ("%d”, &mark);
        total = total + mark;
        x = x +1;

    }
    avg = total/10;
    printf("\n\nTotal Marks is >>> %d \n “, total);
    printf("Average is >>> %d",avg);

    if (avg < 50) {
        printf("Fail!\n");
    } else {
        printf ("Pass! \n");
    }
    


// Q3.
    
    int num1, total=2;
    printf ("Enter the Number:");
    scanf ("%d”, &num1);
    if (num1==0 || num1 ==1) {
        printf("\n Factorial Value is >>> 1");
    }
    else {
        for (num1; num1 >2; num1--) {
        total = total * num1;



    }
    printf("\nFactorial Value is >>> %d”, total);
    } 
    
       



// Q4.
      
    int num1, digit, sum=0;

    printf ("Enter a number: ");
    scanf ("%d", &num1);


    while (number > 0) {
        digit = num1 % 10;
        sum += digit;
        num1 /= 10;
    }

    printf ("Sum of digits: %d\n", sum);   
    


// Q6.
      
    int base, power, sum = 1;
    printf ("Enter the base: ");
    scanf ("%d", &base);
    printf ("Enter the power: ");
    scanf ("%d", &power);
    if (base >= 0) {
        for (int i = 1; i <= power; i++) {
            sum *= base;
        }
        printf ("%d power of %d is %d\n", base, power, sum);
    } else {
        printf (" non-negative integer.\n");
    } 


// Q9.

   char letter;
    printf("ASCII values for letters A to Z:\n");
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c: %d\n", letter, letter);
    }

// Q10.
        
     int rows = 5;
    int i, j;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    


    
// Q11.

    int n, i, flag = 0;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);

  
   if (n == 0 || n == 1)
      flag = 1;

   for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf ("%d is a prime number.", n);
  else
    printf ("%d is not a prime number.", n); */


// Part B

// Q1.

    int num, p = 0, n = 0, z = 0; 

    printf ("Enter 10 numbers:\n"); 

    for (int i = 1; i <= 10; i++) { 
        printf ("Number %d: ", i); 
        scanf ("%d", &num); 
        if (num > 0) { 
            p++; 
        } else if (num < 0) { 
            n++; 
        } else { 
            z++; 
        } 
    } 
    printf ("Positive numbers: %d\n", p); 

    printf ("Negative numbers: %d\n", n); 

    printf ("Zero numbers: %d\n", z); 


// Q2.

    int marks,max,min,total;
    float avg;

    for (int i = 0; i < 10; i++) {
        printf (" enter marks: ");
        scanf ("%d”, &marks);

        if (marks > max) {
            max = marks;
        }

        if (marks < min) {
            min = marks;
        }
        total = total + marks;
    }
    avg = total / 10;
    printf (" %.2f is avarage of your marks \n “, avg);
    printf ("Maximum mark is %d \n", max);
    printf ("Minimum mark is %d \n", min);
    printf ("total mark is %d \n", total);
}


// Q3.

    int value, count=0,avg, total=0;
     
    for (int i = 0; i < 10; i++) {
        printf("enter value: ");
        scanf("%d”, &value);

        total += value;

        if (value > 200) {
            count++;
        }
    }
    
    avg = total / 10;
    printf("avarage value of an item: %d \n", avg);
    printf("Number of an items with greater than 200: %d \n", count);

}



// Q4.   
  employee count = 0

while True:
    employee no = int (input ("Enter Employee no (or -999 to exit): "))
    
    if employee no == -999:
        break
    
    basic_salary = float (input ("Enter Basic Salary: "))

    if basic_salary >= 5000:
        employee_count += 1

printf ("Number of employees with Basic Salary >= 5000:", employee_count);


 // Q5.

    int Enumber,hoursworked,overtimepayment,overtimeexeeding4000count=0,totalemployees=0;

    int normalrate=150,overtimerate=200,maxregularhours=40,overtimethreshold=4000;

    printf("Enter employee number (-999 to the end): ");
    scanf("%d", &Enumber);

    while (Enumber != -999)
        {
        printf("Enter the hours worked by employee: ");
        scanf("%d", &hoursworked);

        if (hoursworked <= maxregularhours)
            {
            overtimepayment = 0;
            }
        else{
            int overtimehours = hoursworked - maxregularhours;
            overtimepayment = (overtimehours * overtimerate) + (maxregularhours * normalrate);
            }

        printf("Employee number : %d\n", Enumber);
        printf("Overtime Payment : Rs. %d\n", overtimepayment);

        if (overtimepayment > overtimethreshold)
            {
            overtimeexeeding4000count++;
            }

            totalemployees++;

        printf("\n Enter employee number (-999 to the end): ");
        scanf("%d", &Enumber);
        }

    if (totalemployees > 0)
        {
        double percentageexceeding4000 = overtimeexeeding4000count / totalemployees * 100;
        printf("\n Percentage of employees whose Overtime Payment exceeds Rs. 4000/-: %f%%\n", percentageexceeding4000);
        }

return 0;
    }