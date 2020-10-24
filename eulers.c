#include<stdio.h>

float f(float X, float Y);

int main(){
    float y0, x0, x, h, A, B, n;
    printf(" enter Y(0):");
    scanf("%f", &y0);
    printf(" enter X :");
    scanf("%f", &x);
    
    x0 = 0;
    h = x - x0;
   
    A = y0 + h * f(x0, y0);

    printf(" enter number of iterations to be performed:");
    scanf("%f", &n);
    printf("\n");
    for(int i=1; i<=n; i++){
        A = y0 + (h/2)*((f(x0, y0) + f(x, A)));
        printf(" y1(%d) = %.4f \n", i, A);
    }

    printf("\n The value of Y(%.1f) = %.4f ", x, A);
    return 0; 
}

float f(float X, float Y){
    float z;
    z = (Y - X) / (Y + X);
    return z; 
}





