#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i,count=0;
    char str[30];
fgets(str,30,stdin);
for(i=0;str[i]!='\0';i++){
    if(str[i]!=' ')
    count++;
    if(count==3&&str[i+1]==' '){
    printf("%c%c%c",str[i-2],str[i-1],str[i]);
        count=0;
    }
}

    return 0;
}
