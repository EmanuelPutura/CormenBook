//
// Created by Emanuel on 02.08.2021.
//

#include "randomized_quicksort.h"

#include <string>
#include <cassert>
#include <iostream>

void testRandomizedQuickSort() {
    std::vector<int> v1 {5, 13, 2, 25, 7, 17, 20, 8, 4};
    std::vector<int> r1 {2, 4, 5, 7, 8, 13, 17, 20, 25};

    randomizedQuickSort(v1, 0, v1.size() - 1);
    assert(v1 == r1);

    std::vector<int> v2 {9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> r2 {1, 2, 3, 4, 5, 6, 7, 8, 9};

    randomizedQuickSort(v2, 0, v2.size() - 1);
    assert(v2 == r2);

    std::vector<int> v3 {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> r3 {1, 2, 3, 4, 5, 6, 7, 8, 9};

    randomizedQuickSort(v3, 0, v3.size() - 1);
    assert(v3 == r3);

    std::vector<std::string> v4 {"dreptunghiul", "este", "un", "paralelogram", "cu", "un", "unghi", "drept"};
    std::vector<std::string> r4 {"cu", "drept", "dreptunghiul", "este", "paralelogram", "un", "un", "unghi"};

    randomizedQuickSort(v4, 0, v4.size() - 1);
    assert(v4 == r4);

    std::cout << "...testing randomized quicksort algorithm\n";
}
