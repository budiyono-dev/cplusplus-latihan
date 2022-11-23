#include <stdio.h>
#include <string.h>

char subString(int start, int end, char str){
    int len = sizeof(str);
}

int main(int argc, char const *argv[]){
    /* code */char name[4]="name";
    printf("%d",strlen(name) );
    char NIK[36];
    printf("input NIK : ") ;
    fgets(NIK,sizeof(NIK)+1,stdin);
    printf(NIK);
    printf("\n");
    printf("%d",strlen(NIK) );
    
    return 0;
}
