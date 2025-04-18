//You are given two arrays A and B, both of the same length. Your task is to determine whether every element of array A is a multiple of the corresponding element in array B, after sorting both arrays in non-decreasing order.
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'are_all_multiples' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY A
 *  2. INTEGER_ARRAY B
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
void sortArr(int a[], int n){
    
    for(int i=0; i<n-1; i++){
    int swap=0;    
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
            }
        }
        if(swap==0){
            break;
        }
    }
}
char* are_all_multiples(int A_count, int* A, int B_count, int* B) {
    sortArr(A, A_count);
    sortArr(B, B_count);
    for(int i=0; i<A_count; i++){
        if(A[i]%B[i]){
            return "False";
        }
    }
    return "True";
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int N = parse_int(ltrim(rtrim(readline())));

    int* A = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int A_item = parse_int(ltrim(rtrim(readline())));

        *(A + i) = A_item;
    }

    int* B = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int B_item = parse_int(ltrim(rtrim(readline())));

        *(B + i) = B_item;
    }

    char* result = are_all_multiples(N, A, N, B);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
