#include <iostream>
using namespace std;

int main(){
    int num1 = 5;
    int num2 = 10;
    int resultado;

    __asm__ __volatile__(
        "movl %1, %%eax\n"
        
        "cmpl $5, %%eax\n"
        "je es_cinco\n"

        "movl $0, %%ebx\n"
        "jmp fin\n"

        "es_cinco:\n"
        "movl %2, %%ebx\n"
        "movl %%ebx, %1\n"
        "movl %%eax, %2\n"

        "movl %1, %%ebx\n"
        "addl $1, %%ebx\n"

        "fin:\n"

        "movl %%ebx, %0\n"
        : "=r"(resultado)
        : "m"(num1), "m"(num2)
        : "eax", "ebx", "cc", "memory"
    );
    
    cout << resultado << endl;

    return 0;
}