#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void starRB(int n){
    //star:
    for(int i=0;i<n-1;i++){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[31m* ");
        }
        printf("\n");
    }
    //2nd phase:
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[34m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[34m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //3D phase:
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[31m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("\033[31m* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[31m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //4D phase
    for(int i=n-1;i>=0;i--){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[34m* ");
        }
        printf("\n");
    }
}

void starBG(int n){
    //star:
    for(int i=0;i<n-1;i++){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[34m* ");
        }
        printf("\n");
    }
    //2nd phase:
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[32m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("\033[32m* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[32m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //3D phase:
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[34m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("\033[34m* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[34m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //4D phase
    for(int i=n-1;i>=0;i--){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[32m* ");
        }
        printf("\n");
    }
}

void starGR(int n){
    //star:
    for(int i=0;i<n-1;i++){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[32m* ");
        }
        printf("\n");
    }
    //2nd phase:
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[31m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("\033[31m* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[31m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //3D phase:
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[32m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //imaginary rectangle
        for(int j=0;j<n-2;j++){
            if(i==0) printf("\033[32m* ");
            else printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("\033[32m* ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
    //4D phase
    for(int i=n-1;i>=0;i--){
        //imaginary rectangle
        for(int j=0;j<n-1;j++){
            printf("  ");
        }
        //EQUILATERAL TRIANGLE WITHOUT BASE
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("\033[31m* ");
        }
        printf("\n");
    }
}
void clear(){
    sleep(1);
    printf("\033[0m");
    system("cls");
}
int main(){
    system("cls");
    int n;
    printf("Enter star printing n: ");
    scanf("%d",&n);
    while(1){
        starRB(n);
        clear();
        starBG(n);
        clear();
        starGR(n);
        clear();
    }
}