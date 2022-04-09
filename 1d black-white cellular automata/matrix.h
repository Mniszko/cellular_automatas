#ifndef Matrix_
#define Matrix_

#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <fstream>
#include <string>
#include <cstdlib>

class Matrix
{
    private:
	    const int length;
	    const int width;
	    int code[8];

        std::vector<int> first_line;
        std::vector<int> before_line;
        std::vector<int> new_line;
        std::vector<std::vector<int>> matrix;


    public:

        void genline();
        void readFile();
        void passline();
        void writeFile ();

        Matrix();
        Matrix(int l, int w, int arg[8]);
        ~Matrix(){};
};

#endif
