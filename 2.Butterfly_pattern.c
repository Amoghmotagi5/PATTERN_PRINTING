#include <stdio.h>

int main() {
    int n;
    printf("Entre how many lines you want:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        
        if(i==n-1 || i==n-2){
            printf("* * ");
        }
        else{
            printf("    ");
        }
        for(int k=0;k<=i;k++){
           printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<=n;i++){
        printf("  ");
        }
    printf("* * \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("  ");
        }
        for(int k=0;k<n-i;k++){
            printf("* ");
        }
        if(i==0 || i==1){
            printf("* * ");
        }
        else{
            printf("    ");
        }
        for(int k=0;k<n-i;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}