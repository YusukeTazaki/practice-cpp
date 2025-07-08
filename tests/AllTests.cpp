#include <CppUTest/CommandLineTestRunner.h>

// 別ファイルのテスト登録
#include "MyTests.h"

int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
