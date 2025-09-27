//----------------------------Experiment 4: Variable and Scope of Variable-------------------------------
//Declare a global variable outside all functions and use it inside various functions
//to understand its accessibility.
#include <stdio.h>


int counter = 0;

void increment() {
    counter++; 
    printf("Counter after increment: %d\n", counter);
}

void decrement() {
    counter--; 
    printf("Counter after decrement: %d\n", counter);
}

int main() {
    printf("Initial counter: %d\n", counter);
 
    increment();
    increment();
    decrement();

    printf("Final counter in main: %d\n", counter);

    return 0;
}





//Declare a local variable inside a function and try to access it outside the
//function. Compare this with accessing the global variable from within the
//function.


#include <stdio.h>


int globalVar = 100;

    void showGlobal() {
    printf("Inside showGlobal(): globalVar = %d\n", globalVar);
}

    void localExample() {
    int localVar = 50; 
    printf("Inside localExample(): localVar = %d\n", localVar);
}

    int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    showGlobal();      
    localExample();    

    return 0;
}





//Declare variables within different code blocks (enclosed by curly braces) and
//test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {

    int x = 10;
    printf("Outside block: x = %d\n", x);

    {
        int y = 20; 
        printf("Inside first block: x = %d, y = %d\n", x, y);
    }

   
    {
        int z = 30; 
        printf("Inside second block: z = %d\n", z);
    }


    return 0;
}



//Declare a static local variable inside a function. Observe how its value persists
//across function calls
#include <stdio.h>

void demoFunction() {
    static int count = 0; 
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    demoFunction();
    demoFunction(); 
    demoFunction(); 

    return 0;
}
//----------------------------------------------------------------------------------