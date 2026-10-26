#include <stdio.h>

int main() {

    int n;
    printf("How how many line you want sierpinski Triangle: ");
    scanf("%d",&n);
    if(n%2==0) n+=1;
    for(int i=1;i<=n/2+1;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==i || i==n/2+1)
                printf("*   ");
            else
                printf("    ");
        }
        printf("\n");
    }
    for(int i=2;i<=n/2+1;i++){
        for(int j=1;j<=n/2-i+1;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==i || i==n/2+1)
                printf("*   ");
            else
                printf("    ");
        }
        for(int j=n/2-i;j>0;j--){
            printf("    ");
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==i || i==n/2+1){
                if(i==n/2+1 && k==i){
                    printf("  ");
                }
                else
                    printf("*   ");
            }
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}