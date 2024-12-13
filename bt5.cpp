#include<stdio.h>
#include<math.h>
    int main() {
        int n;
        printf("nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        if(n<=1){
            printf("nhap vao mot so nguyen duong");
            return 0;
        }
        else{
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    printf("%d khong phai la so nguyen to", n);
                    return 0;
                }
            }
            printf("%d la so nguyen to", n);
        }
}
