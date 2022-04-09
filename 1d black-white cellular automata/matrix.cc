
#include "matrix.h"



void Matrix::readFile() {
	std::ifstream File("inst.txt");
	
	std::string Line;	
	int i = 0;
	while (getline (File, Line)) {
		this->first_line.push_back(atof(Line.c_str()));		
		++i;
	}
	File.close();
    for (int i=0;i<length;++i){
    }
    this->matrix.push_back(first_line);
    this->before_line=first_line;
    return;
};

void Matrix::genline(){
    new_line.clear();
    new_line.push_back(0);
    for (int num=1 ; num < length - 1 ; ++num){
        int trip[3] = {before_line[num-1],before_line[num],before_line[num+1]};    
/*
        if (trip[0]==0 && trip[1]==0 && trip[2]==0) {
            new_line.push_back(code[0]); //8
        } else if (trip[0]==0 && trip[1]==0 && trip[2]==1) {
            new_line.push_back(code[1]); //7
        } else if (trip[0]==0 && trip[1]==1 && trip[2]==0) {
            new_line.push_back(code[2]); //6
        } else if (trip[0]==1 && trip[1]==0 && trip[2]==0) {
            new_line.push_back(code[3]); //4
        } else if (trip[0]==1 && trip[1]==0 && trip[2]==1) {
            new_line.push_back(code[4]); //3
        } else if (trip[0]==1 && trip[1]==1 && trip[2]==0) {
            new_line.push_back(code[5]); //2
        } else if (trip[0]==0 && trip[1]==1 && trip[2]==1) {
            new_line.push_back(code[6]); //5
        } else if (trip[0]==1 && trip[1]==1 && trip[2]==1) {
            new_line.push_back(code[7]); //1
        };
    };
/**/
        if (trip[0]==1 && trip[1]==1 && trip[2]==1) {
            new_line.push_back(code[0]); //1
        } else if (trip[0]==1 && trip[1]==1 && trip[2]==0) {
            new_line.push_back(code[1]); //2
        } else if (trip[0]==1 && trip[1]==0 && trip[2]==1) {
            new_line.push_back(code[2]); //3
        } else if (trip[0]==1 && trip[1]==0 && trip[2]==0) {
            new_line.push_back(code[3]); //4
        } else if (trip[0]==0 && trip[1]==1 && trip[2]==1) {
            new_line.push_back(code[4]); //5
        } else if (trip[0]==0 && trip[1]==1 && trip[2]==0) {
            new_line.push_back(code[5]); //6
        } else if (trip[0]==0 && trip[1]==0 && trip[2]==1) {
            new_line.push_back(code[6]); //7
        } else if (trip[0]==0 && trip[1]==0 && trip[2]==0) {
            new_line.push_back(code[7]); //8
        };
    };







    
    new_line.push_back(0);
    this->before_line = new_line;
    return;
};

void Matrix::passline(){
    this->matrix.push_back(new_line);
    return;
};

void Matrix::writeFile () {
    std::ofstream File("matrix.txt");
    for (int k=0 ; k<first_line.size() ; ++k){
        for (int i=0 ; i < matrix.size() ; ++i){
            File << matrix.at(i).at(k) << '\t'; 
        };
        File << '\n';
    };
    File.close();
    return;
};

Matrix::Matrix(int l, int w, int arg[8]):length(l),width(w){
        for (int i=0 ; i<8 ; ++i){
            code[i]=arg[i];
        };
}