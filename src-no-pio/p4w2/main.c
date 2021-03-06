#include <stdio.h>

#include <stdlib.h>

#include "pointer-practice.c"
#include "string-practice.c"

int main(void)
{
    int array[] = { 0, 0 ,0 ,0, 0 };
    printArray(array);
    makeArray(array);
    printArray(array);
    printf("\n");
     
    char names[MAX_STRING][NAME_LENGTH] = { "Moe", "Larry", "Currly", "James", "John", "Robert", "Michael"};
    printFirstLetters(names);
    printf("\n");
    printLastLetters(names);
    
    char *smallest = searchShortestName(names);
    printf("\nShortest = %s\n", smallest);

    return 0;
}
