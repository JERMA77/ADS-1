// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value <= 1)
        return false;
    if (value == 2)
        return true;
    if (value % 2 == 0)
        return false;
    for (uint64_t i = 3; i*i <= value; i += 2) {
        if (value % i == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t count = 0;
    uint64_t value = 2;
    while (count < n) {
        if (checkPrime(value))
            count++;
        value++;
    }
    return value-1;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    if (value < 2)
        return 2;
    value++;
    while (!checkPrime(value))
        value++;
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i))
            sum += i;
    }
    return sum;
}
