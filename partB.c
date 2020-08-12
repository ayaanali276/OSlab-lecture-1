/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void forkexa() 
{ 
    
    if (fork() == 0) 
        printf("Hello from ayaan!\n"); 
    else
        printf("Hello from 181112012!\n"); 
} 
int main() 
{ 
    forkexa(); 
    return 0; 
}

