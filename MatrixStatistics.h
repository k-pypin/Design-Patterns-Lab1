//
// Created by trojan52 on 10.10.18.
//

#ifndef LAB1_2_MATRIXSTATISTICS_H
#define LAB1_2_MATRIXSTATISTICS_H

#include "AMatrix.h"

class MatrixStatistics {
public:
    explicit MatrixStatistics(AMatrix* const matrix);

public:
    long notZeroCount() const;
    long sum() const;
    int maxValue() const;
    double average() const;

private:
    long _sum;
    long _notZeroCount;
    int _maxValue;
    double _average;
};


#endif //LAB1_2_MATRIXSTATISTICS_H