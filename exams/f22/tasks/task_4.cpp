//
// Created by Edvard Schøyen on 09/07/2023.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Matrix {
public:
    vector<vector<T>> data;

    explicit Matrix(vector<vector<T>> input) : data(std::move(input)) {};

    Matrix<T> operator*(const Matrix<T>& other) {
        vector<vector<T>> result;
        for (const auto& row : data) {
            vector<T> row_result;
            for (int i = 0; i < other.data[0].size(); ++i) {
                T sum = 0;
                for (int j = 0; j < row.size(); ++j) {
                    sum += row[j] * other.data[j][i];
                }
                row_result.push_back(sum);
            }
            result.push_back(row_result);
        }
        return Matrix<T>(result);
    }

    friend ostream& operator<<(ostream& os, const Matrix<T>& m) {
        for (const auto& row : m.data) {
            os << "[ ";
            for (const auto& col : row) {
                os << col << " ";
            }
            os << "]" << endl;
        }
        return os;
    }

};



int main() {
    Matrix<int> m_a({{1, 2}, {3, 4}, {5, 6}});
    Matrix<int> m_b({{1, 2, 3}, {4, 5, 6}});

    cout << m_a << endl;
    cout << m_b << endl;
    cout << m_a * m_b << endl;
    cout << m_b * m_a << endl;


    Matrix<int> m_c({{1, 2}});
    Matrix<int> m_d({{2}, {2}});

    cout << m_c * m_d << endl;
    cout << m_d * m_c << endl;
    return 0;
}