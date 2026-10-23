#include <stdio.h>

int main() {
    int n,m,l;
    printf("Enter the base width of diamond for diamond pattern: ");
    scanf("%d",&n);
    printf("How many Diamonds you want in row: ");
    scanf("%d",&m);
    printf("How many Diamonds you want in coloumns: ");
    scanf("%d",&l);
    for(int z=0;z<m;z++){
        for(int i=0;i<n;i++){
            //first
            for(int j=0;j<n-i-1;j++){
                printf("  ");
            }
            for(int k=0;k<=i;k++){
                printf("*   ");
            }
            for(int j=0;j<n-i-2;j++){
                printf("  ");
            }
            for(int a=0;a<l-1;a++){
                for(int j=0;j<n-i-2;j++){
                    printf("  ");
                }
                for(int k=0;k<=i;k++){
                    if(k!=i || i!=n-1) 
                        printf("*   ");
                }
                for(int j=0;j<n-i-2;j++){
                    printf("  ");
                }
            }
            printf("\n");
        }
        for(int i=n-1;i>0;i--){
            //first
            for(int j=0;j<=n-i-1;j++){
                printf("  ");
            }
            for(int k=0;k<i;k++){
                printf("*   ");
            }
            for(int j=0;j<=n-i-2;j++){
                printf("  ");
            }
            for(int b=0;b<l-1;b++){
                for(int j=0;j<n-i-1;j++){
                    printf("  ");
                }
                for(int k=0;k<i;k++){
                    printf("*   ");
                }
                for(int j=0;j<n-i-1;j++){
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}