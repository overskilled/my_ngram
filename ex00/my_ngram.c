
#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128


void fill_array(int* array,char *str){
   int i=0;
    //printf("COMMENT STRING %s\n",str);
    while(str[i]!='\0'){
        if(str[i]!='"'){
            array[(int)str[i]]+=1;
        }
        i+=1;
    }
}

void print_array(int* array, int size_array){
    int i=0;

    while(i<size_array){
        if(array[i]>0){
        printf("%c:%d\n",i,array[i]);
        }
        i+=1;
    }
  
}

int main(int n,char **str){
    int i;
    int array[MAX_ARRAY_SIZE]= {0};

    while(i<n){
        fill_array(&array[0],str[i]);
        i+=1;}
  print_array(&array[0],MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}