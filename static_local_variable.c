#include<stdio.h>

int main(void){
    void test_function(void);
    
    test_function();
    test_function();
    test_function();

    return 0;
}

void test_function(void){
    /* 
    Static variables preserve their 
    previous value in their previous 
    scope and are not initialized again 
    in the new scope. A static variable
    remains in memory while program is running. 
    */
   
    static int static_local_variable = 2;
    printf("%d\n", static_local_variable);
    static_local_variable *= 2;
}