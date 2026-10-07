#include "Sorter.h"
#include <utility>

void Sorter::bubbleSort(std::vector<int>& vet) const {
    for (size_t i = vet.size(); i >= 2; i--)
        for (size_t j = 0; j + 1 < i; j++)
            if (vet[j] > vet[j + 1]) std::swap(vet[j], vet[j + 1]);
}
