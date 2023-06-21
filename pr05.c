/*  In C, a function pointer is a variable that stores the address of a function.
A function pointer can be used to pass a function as an argument to another function, or to call a function dynamically.
 */





#include <stdio.h>
int add(int x, int y, int z) {
    return x + y +z;
}
int multiply(int x, int y, int z) {
    return x * y *z;
}
int main() {
    int x = 10, y = 20, z = 30;
    int (*func_ptr)(int, int, int); // function pointer variable declaration

    // assign the address of add function to function pointer
	func_ptr = &add; 
    // calling add function using function pointer
	printf("Addition: %d\n", (*func_ptr)(x, y, z)); 

    // assign the address of multiply function to function pointer
	func_ptr = &multiply; 
	// calling multiply function using function pointer
    printf("\nMultiplication: %d\n", (*func_ptr)(x, y, z)); 
    return 0;
}

