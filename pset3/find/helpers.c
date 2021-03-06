/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

bool search(int value, int values[], int n)
{
    if (value < 0)
        return false;
    else
        return binary_search(value, values, n);
}

void sort(int values[], int n)
{
    bubble_sort(values, n);
    return;
}

bool binary_search(int value, int values[], int n)
{
    int ending = n-1;
    int beggining = 0;

    while (ending >= beggining)
    {
        int middle = (beggining + ending) / 2;
        if (values[middle] == value)
            return true;
        else if (values[middle] > value)
            ending = middle - 1;
        else
            beggining = middle + 1;
    }

    return false;
}

void bubble_sort(int values[], int n)
{
    bool iter;

    do
    {
        iter = false;
        for (int i = 0; i < n-1; i++)
        {
            if (values[i] > values[i+1])
            {
                int temp = values[i];
                values[i] = values[i+1];
                values[i+1] = temp;
                iter = true;
            }
        }
    } while (iter);
    return;
}

