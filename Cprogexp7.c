//------------------------------------Structures and Union ---------------------------------//

//Write a C program that uses functions to perform the following operations:  
//a. Reading a complex number.  
//b. Writing a complex number.  
//c. Addition and subtraction of two complex numbers  
//Note: represent complex number using a structure.  

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nFirst number: ");
    writeComplex(c1);
    printf("Second number: ");
    writeComplex(c2);

    printf("\nSum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);

    return 0;
}




//Write a C program to compute the monthly pay of 100 employees using each 
//employee‗s name, basic pay. The DA is computed as 52% of the basic pay. 
//Gross-salary (basic pay + DA). Print the employees name and gross salary. 

#include <stdio.h>

#define MAX 100

// Structure to store employee details
struct Employee {
    char name[50];
    float basic;
    union {
        float gross;
        float da;
    } salary;
};

int main() {
    struct Employee emp[MAX];
    int i, n;

    printf("Enter number of employees (max %d): ", MAX);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf(" %[^\n]", emp[i].name);
        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basic);

        // Use union to compute DA first
        emp[i].salary.da = 0.52 * emp[i].basic;

        // Overwrite union to store gross salary
        emp[i].salary.gross = emp[i].basic + emp[i].salary.da;
    }

    printf("\nEmployee Name\tGross Salary\n");
    printf("-------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-15s\t%.2f\n", emp[i].name, emp[i].salary.gross);
    }

    return 0;
}


//Create a Book structure containing book_id, title, author name and price. 
//Write a C program to pass a structure as a function argument and print the 
//book details.  


#include <stdio.h>

// Define the Book structure
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function to display book details
void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("ID     : %d\n", b.book_id);
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : ₹%.2f\n", b.price);
}

int main() {
    struct Book myBook;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", myBook.title);  // Read string with spaces
    printf("Enter Author Name: ");
    scanf(" %[^\n]", myBook.author);
    printf("Enter Book Price: ₹");
    scanf("%f", &myBook.price);

    // Pass structure to function
    printBook(myBook);

    return 0;
}


//Create a union containing 6 strings: name, home_address, hostel_address, 
//city, state and zip. Write a C program to display your present address. 

#include <stdio.h>

// Define the Book structure
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function to display book details
void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("ID     : %d\n", b.book_id);
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : ₹ %.2f\n", b.price);
}

int main() {
    struct Book myBook;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", myBook.title);  // Read string with spaces
    printf("Enter Author Name: ");
    scanf(" %[^\n]", myBook.author);
    printf("Enter Book Price: ₹");
    scanf("%f", &myBook.price);

    // Pass structure to function
    printBook(myBook);

    return 0;
}