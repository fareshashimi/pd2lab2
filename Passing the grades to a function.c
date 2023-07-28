#include <stdio.h>
#include <stdlib.h>

int calculate(int, int);

int main(){
    int num, grd;

    printf("Enter the number of students: ");
    scanf("%d", &num);
    printf("Enter the specific grade of students: ");
    scanf("%d", &grd);
    printf("\n");

    int rest = calculate(num, grd);
    printf("\n\n The number of passed students: %d\n", num-rest);
    printf(" The number of failed students: %d\n", rest);

    return 0;
}

int calculate(int n, int g){
    int grades[100];
    int rest=0;
    int sum=0;

    for(int i=0; i<n; i++){
        printf("%d. Student's grade: ", i+1);
        scanf("%d", &grades[i]);

        if(grades[i]<g)
            rest++;
        sum+=grades[i];
    }
    printf("\n\n The average of grade: %d\n", sum/n);

    return rest;
}
