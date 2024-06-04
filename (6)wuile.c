// 6 factorial de un numero
#include <stdio.h>
int main (){
    //n como valor ingresado por el usuario
    //i, se define la variable fuera de el bucle
    //f es la que almacenara el valor factorial, partiendo con el valor de 1
    int n, i=1,f=1 ;
    printf("ingrese un numero ");
    scanf("%d", &n);
    //se imprime en pantalla el valor de i 
    // y f se actualiza la multiplicando i
    //fa almacena el alor para la suigiente vuelta 
    while (i<n){
        i++;
        f*=i;
    }
    printf(" %d", f);
    return 0;
}
