#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int key;
    int count;
} TaskCount;

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minimumRounds(int* tasks, int tasksSize) {
    if (tasksSize == 0) return 0;
    
    // Sort the array to group identical tasks
    qsort(tasks, tasksSize, sizeof(int), compare);
    
    int rounds = 0;
    int current = tasks[0];
    int count = 1;
    
    for (int i = 1; i < tasksSize; i++) {
        if (tasks[i] == current) {
            count++;
        } else {
            if (count == 1) {
                return -1;
            }
            // Calculate rounds needed for this task count
            rounds += count / 3;
            if (count % 3 != 0) {
                rounds++;
            }
            current = tasks[i];
            count = 1;
        }
    }
    
    // Process the last group
    if (count == 1) {
        return -1;
    }
    rounds += count / 3;
    if (count % 3 != 0) {
        rounds++;
    }
    
    return rounds;
}