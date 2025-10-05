#include <iostream>
using namespace std;

int main(){
    int a=3, b=7, resultado;

    __asm__ __volatile__ (
        "movl %1, %%eax\n"
        "movl %2, %%ebx\n"
        "addl %%ebx, %%eax\n"
        : "=r"(resultado) 
        : "r"(a), "r"(b)
    );

    cout << resultado << endl;

    return 0;
}