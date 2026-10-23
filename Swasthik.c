#include <stdio.h>

int main() {
    int n;
    printf("Enter the width of swasthik: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        for(int k=0;k<n;k++){
            printf("  ");
        }
        for(int j=0;j<3*n;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        for(int k=0;k<n;k++){
            printf("  ");
        }
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5*n;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            printf("  ");
        }
        for(int k=0;k<n;k++){
            printf("* ");
        }
        for(int j=0;j<n;j++){
            printf("  ");
        }
        for(int k=0;k<n;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3*n;j++){
            printf("* ");
        }
        for(int k=0;k<n;k++){
            printf("  ");
        }
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}