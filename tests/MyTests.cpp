#include "MyTests.h"
#include <CppUTest/TestHarness.h>
#include <iostream>

TEST_GROUP(MyGroup)
{
    void setup() override {
        std::cout << "[SETUP] テストの前処理\n";
    }

    void teardown() override {
        std::cout << "[TEARDOWN] テストの後処理\n";
    }
};

// ✅ 通るテスト
TEST(MyGroup, TestPass) {
    CHECK_EQUAL(100, 100);
}

// ❌ 失敗するテスト
TEST(MyGroup, TestFail) {
    CHECK_EQUAL(1, 2);
}

// 🚫 無視されるテスト
IGNORE_TEST(MyGroup, TestIgnored) {
    FAIL("これは実行されません");
}
