#include <fstream>
#include <iostream>
int main(int argc, char** argv) {
    std::ifstream fin("in.txt");
    int r, c, r1, c1;
    fin >> r;
       int* arr = new int [r];
    for (int i = 0; i < r; i++) {
        fin >> c;
        arr[i] = c;
    }
    fin >> r1;
    int* arr1 = new int[r1];
    for (int i = 0; i < r1; i++) {
        fin >> c1;
        arr1[i] = c1;
    }
    std::ofstream fout("out.txt");
    fout << r1 << std::endl;
    fout << arr1[r1-1] << " ";
    for (int i = 0; i < r1-1; i++) {
        fout << arr1[i] << " ";
    }
    fout << std::endl;
      fout << r << std::endl;
       for (int i = 1; i < r; i++) {
        fout << arr[i] << " ";
    }
       fout << arr[0] << " ";
    delete[] arr;
    fout.close();
        delete[] arr1;
    fin.close();
}