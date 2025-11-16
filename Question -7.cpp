#include <stdio.h>

#define PLAYERS 11


void inputRuns(int *runs, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter runs scored by player %d: ", i + 1);
        scanf("%d", runs + i);
    }
}


void calculateTotalAndAverage(int *runs, int n, int *total, float *average) {
    *total = 0;
    for (int i = 0; i < n; i++) {
        *total += *(runs + i);
    }
    *average = (float)(*total) / n;
}

// Function to find the highest scorer and their index
void findHighestScorer(int *runs, int n, int *highest, int *playerIndex) {
    *highest = *runs;
    *playerIndex = 0;
    for (int i = 1; i < n; i++) {
        if (*(runs + i) > *highest) {
            *highest = *(runs + i);
            *playerIndex = i;
        }
    }
}

int main() {
    int runs[PLAYERS];
    int total, highest;
    float average;
    int highestIndex;

    
    inputRuns(runs, PLAYERS);

   
    calculateTotalAndAverage(runs, PLAYERS, &total, &average);

 
    findHighestScorer(runs, PLAYERS, &highest, &highestIndex);

  
    printf("\nTotal runs scored: %d\n", total);
    printf("Average runs: %.2f\n", average);
    printf("Highest scorer: Player %d with %d runs\n", highestIndex + 1, highest);

    return 0;
}
