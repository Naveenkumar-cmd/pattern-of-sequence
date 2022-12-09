#include <stdio.h>

int main() {
    int s=1,addition=2,i,n;
    printf("enter no. of terms:\n");
    scanf("%d",&n);
    
    printf("the series is: %d\t",s);
    
    for(i=1;i<n;i++){
       
       s = s+addition; 
       printf("%d\t\t",s);
       addition = addition + 2;
    }
    
    return 0;
}
