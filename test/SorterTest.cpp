#include <gtest/gtest.h>
#include "../src/Sorter.h"

using Vec = std::vector<int>;

class SorterTest : public ::testing::Test {
protected:
    Sorter* sorter;
    void SetUp() override    { sorter = new Sorter(); }  // Inicializar SUT
    void TearDown() override { delete sorter; }
};

TEST_F(SorterTest, CP1_NoEntraAlBucle) {
    Vec v = {5};                          // Arrange
    sorter->bubbleSort(v);                // Act
    EXPECT_EQ(v, (Vec{5}));               // Assert
}

TEST_F(SorterTest, CP2_IfSiempreFalso) {
    Vec v = {1, 2};
    sorter->bubbleSort(v);
    EXPECT_EQ(v, (Vec{1, 2}));
}

TEST_F(SorterTest, CP3_IfVerdadero) {
    Vec v = {2, 1};
    sorter->bubbleSort(v);
    EXPECT_EQ(v, (Vec{1, 2}));
}

TEST_F(SorterTest, CP4_BucleExternoVariasIteraciones) {
    Vec v = {3, 1, 2};
    sorter->bubbleSort(v);
    EXPECT_EQ(v, (Vec{1, 2, 3}));
}
