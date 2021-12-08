#include <stdio.h>
#define MAX_ARRAY_SIZE 128

void fill_array(int* array,char* str){
    int i=0;
    while(str[i] != '\0'){
        if(str[i] != '"'){
      array[(int)str[i]]+=1;}
        i++;
    }
}
void print_array(int* array, int size_array){
    int i=0;
    while(i<size_array){
        if(array[i]>0){
            printf("%c:%d\n", i, array[i]);}
        i++;;
            }
}
int main(int ac, char** av){
    int i=1;
    int array[MAX_ARRAY_SIZE]= {0};
    while(i<ac){
    fill_array(&array[0],av[i]);
    i++;
    }
    print_array(&array[0],MAX_ARRAY_SIZE);
    return 0;
}