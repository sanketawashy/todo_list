#include <stdio.h>
#include <stdlib.h>

// Define the maximum number of tasks
#define MAX_TASKS 100

// Function to add a task to the to-do list
void addTask(char tasks[MAX_TASKS][1000], int *taskCount) {
    if (*taskCount < MAX_TASKS) {
        printf("Enter task: ");
        scanf("%s", tasks[*taskCount]);
        (*taskCount)++;
        printf("Task added successfully!\n");
    } else {
        printf("To-do list is full. Cannot add more tasks.\n");
    }
}

// Function to list all tasks in the to-do list
void listTasks(char tasks[MAX_TASKS][1000], int taskCount) {
    if (taskCount > 0) {
        printf("To-do List:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s\n", i + 1, tasks[i]);
        }
    } else {
        printf("To-do list is empty.\n");
    }
}

int main() {
    char tasks[MAX_TASKS][1000];  // Array to store tasks
    int taskCount = 0;           // Variable to keep track of the number of tasks

    int choice;

    do {
        // Display menu
        printf("\n1. Add Task\n");
        printf("2. List Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                listTasks(tasks, taskCount);
                break;
            case 3:
                printf("Exiting the to-do app.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

