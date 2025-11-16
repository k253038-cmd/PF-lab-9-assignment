#include <stdio.h>
void replaceVowel(char arr[][10], int row) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; arr[i][j] != '\0'; j++) {
            if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u'||
               arr[i][j]=='A'||arr[i][j]=='E'||arr[i][j]=='I'||arr[i][j]=='O'||arr[i][j]=='U') {
                arr[i][j] = '*';
            }
        }
    }
}

void displayArray(char arr[][10], int row) {
    for(int i = 0; i < row; i++) {
        printf("%s\n", arr[i]); 
    }
}

int main() {
    char arr[3][10] = {"mine", "sadhna", "naina"};
    int rows = 3;

    printf("Original Array:\n");
    displayArray(arr, rows);

    replaceVowel(arr, rows);

    printf("\nUpdated Array:\n");
    displayArray(arr, rows);

    return 0;
}


