#include <stdio.h>

    int main()
    
    {
        float peso;
        float altura;
        float imc; //Indice de massa corporal
        
        printf("Diga sua altura (ex 1.65):");
        scanf("%f", &altura);
        printf("Agora diga o seu peso(ex 78.6):");
        scanf("%f", &peso);
        
        imc = peso / (altura * altura);
        
        if(imc<20){
            printf("Você esta abaixo do peso");
        }else if(imc > 19 && imc < 26 ){
            printf("Você esta no seu peso ideal");
        }else if(imc > 25 && imc < 31 ){
            printf("Você esta acima do peso");
        }else{
            printf("Você esta obeso");
            }
            
            printf("Seu imc é: %2.0f\n" , imc);
            return 0;
        
        
        
    
    
    
    
    
    
    }