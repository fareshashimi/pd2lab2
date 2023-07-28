#include <stdio.h>
#include <stdlib.h>

int bodyIndex(float, float);

int main(){
    int h;
    int w;
    int result;

    printf("Enter the number of height: ");
    scanf("%d", &h);
    printf("Enter the number of weight: ");
    scanf("%d", &w);

    result = bodyIndex(w, h);
    switch(result){
        case 1:
            printf("\n\n Skinny\n");
        break;

        case 2:
            printf("\n\n Normal\n");
        break;

        case 3:
            printf("\n\n Fat\n");
        break;

        case 4:
            printf("\n\n Obese\n");
        break;
    }

    return 0;
}

int bodyIndex(float weight, float height){
    int bmi = weight / (height * height);

    if(bmi<=18){
        return 1;
    }
    else if(bmi<=25){
        return 2;
    }
    else if(bmi<=30){
        return 3;
    }
    else{
        return 4;
    }
}
