#include<stdio.h>

void fill_array_iv(void);

void fill_array_iv(){
    int j, i, number, odd_array[5], even_array[5];
    int ctrl_odd = 0;
    int ctrl_even = 0;
    
    for(j = 0; j < 15; j++){
        scanf("%d", &number);
        if(number % 2 == 0){
            odd_array[ctrl_odd] = number;
            ctrl_odd++;            
        }
        
        else{
            even_array[ctrl_even] = number;
            ctrl_even++;
        }

        if(ctrl_odd == 5){
            for(i = 0; i < 5; i++){
                printf("par[%d] = %d\n", i, odd_array[i]);
            }
            ctrl_odd = 0;
        }
        
        else if(ctrl_even == 5){
            for(i = 0; i < 5; i++){
                printf("impar[%d] = %d\n", i, even_array[i]);
            }
            ctrl_even = 0;
        }    
    }

    for(i = 0; i < ctrl_even; i++){
        printf("impar[%d] = %d\n", i, even_array[i]);
    }
    
    for(i = 0; i < ctrl_odd; i++){
        printf("par[%d] = %d\n", i, odd_array[i]);
    }
}    


int main(void){
    fill_array_iv();
    return 0;
}