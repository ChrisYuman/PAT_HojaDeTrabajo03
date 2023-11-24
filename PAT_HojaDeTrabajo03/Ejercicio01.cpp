#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda < derecha) {
        int mid = izquierda + (derecha - izquierda) / 2;
        if (nums[mid] > nums[derecha]) {
            izquierda = mid + 1;
        }
        else {        
            derecha = mid;
        }
    }

    return nums[izquierda];
}
