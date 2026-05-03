#include <stdio.h>

int main() {
    float calories, sugar, fat;
    int score = 0;

    printf("------ FOOD HEALTH ANALYZER ------\n\n");

    printf("Enter total calories of the meal: ");
    scanf("%f", &calories);

    printf("Enter sugar (in grams): ");
    scanf("%f", &sugar);

    printf("Enter fat (in grams): ");
    scanf("%f", &fat);

    printf("\nAnalyzing your meal...\n\n");

    if(calories > 800){
        score += 2;
    }
    else if(calories > 500){
        score += 1;
    }
    
    if(sugar > 30){
        score += 2;
    }
    else if(sugar > 15){
        score += 1;
    }
    
    if(fat > 35){
        score += 2;
    }
    else if(fat > 20){
        score += 1;
    }
    
    if(score <= 2){
        printf("Result: SAFE OPTION\n");
        printf("Nice! Your meal is relatively balanced :D.\n");
    }
    else if(score <= 4){
        printf("Result: RISKY CHOICE\n");
        printf("Not terrible, but maybe don't make this a habit.\n");
    }
    else{
        printf("Result: VERY UNHEALTHY\n");
        printf("This meal is very high in unhealthy nutrients.\n");
    }

    printf("\nHealth Score: %d (Higher = Less Healthy)\n", score);

    printf("\nThank you for using the Food Health Analyzer!\n");

    return 0;
}