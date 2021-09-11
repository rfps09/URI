#include <iostream>

using namespace std;

int pickPivotIndex(long long int *values, int left, int right) {
    int mid = (left + right) / 2;
    int aux = 0;
    
    int sorted[] = {values[left], values[mid], values[right]};
    for (int i = 0; i < 3; i++) {
        if(sorted[1] < sorted [2]) {
            aux = sorted[1];
            sorted[1] = sorted[2];
            sorted[2] = aux;
        }
        else if (sorted[1] > sorted [0]) {
            aux = sorted[1];
            sorted[1] = sorted[0];
            sorted[0] = aux;
        }
    }
    
    if (sorted[1] == values[left]) return left;
    else if (sorted[1] == values[mid]) return mid;
    else return right;
}

int partition(long long int *values, int left, int right) {
    int pivot;
    int i = left;
    int aux = 0;
    int index = pickPivotIndex(values, left, right);
    
    aux = values[left];
    values[left] = values[index];
    values[index] = aux;

    pivot = values[left];

    for (int j = left + 1; j <= right; j++) {
        if (values[j] <= pivot) {
            i+=1;
            aux = values[i];
            values [i] = values[j];
            values[j] = aux;
        }
    }

    // troca pivot (values[left]) com i.
    aux = values[i];
    values [i] = values[left];
    values[left] = aux;

    return i;
}

void quickSort(long long int *values, int left, int right) {
	if (left < right) {
		int index_pivot = partition(values, left, right);
		quickSort(values, left, index_pivot - 1);
		quickSort(values, index_pivot + 1, right);
	}
}
int main() {
    int n = 0, i = 0, count = 0;
    long long int num[20000];
    long long int numSort[10000];

    while(scanf("%d", &n) && n > 0) {
        count = 0;
        for (i = 0; i < 2*n; i++) {
            scanf("%lld", &num[i]);
            if (i < n) {
                numSort[i] = num[i];
            }
        }

        for (i = 2*n-1; i >= n ; i--) {
            numSort[count] += num[i];
            count++;
        }

        quickSort(numSort, 0,n-1);

        printf("%d %d\n", numSort[n-1], numSort[n-n]);
    }

    return 0;
}