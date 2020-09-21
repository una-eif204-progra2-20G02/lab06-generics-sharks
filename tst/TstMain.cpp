//
// Created by johne on 13/9/2020.
//

#include "gtest/gtest.h"

int main(int argc, char **argv) {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}