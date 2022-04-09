
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
        float col = (trip[0]+trip[1]+trip[2]);

        if (col==9) {
            new_line.push_back(code[0]); //1
        } else if (col==8) {
            new_line.push_back(code[1]); //2
        } else if (col==7) {
            new_line.push_back(code[2]); //3
        } else if (col==6) {
            new_line.push_back(code[3]); //4
        } else if (col==5) {
            new_line.push_back(code[4]); //5
        } else if (col==4) {
            new_line.push_back(code[5]); //6
        } else if (col==3) {
            new_line.push_back(code[6]); //7
        } else if (col==2) {
            new_line.push_back(code[7]); //7
        } else if (col==1) {
            new_line.push_back(code[8]); //7
        } else if (col==0) {
            new_line.push_back(code[9]); //7
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
        for (int i=0 ; i<10 ; ++i){
            code[i]=arg[i];
        };
}