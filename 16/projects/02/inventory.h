#ifndef INVENTORY_H
#define INVENTORY_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory[MAX_PARTS];

void quicksort(struct part a[], int low, int high);
int split(struct part a[], int low, int high);
int read_line(char str[], int n);

#endif
