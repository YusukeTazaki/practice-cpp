// src/my_code.cpp

#include "my_code.h"

int add(int a, int b) {
    return a + b;
}

int divide(int a, int b) {
    if (b == 0) return -1; // エラー処理（簡易）
    return a / b;
}
