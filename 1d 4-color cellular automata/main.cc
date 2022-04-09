
#include "matrix.h"


/*
 _______________
|				|
|				|
|				|
|				|
|_______________|

/**/

int main(int argc, char** argv) {




/* code is used to generate matrices depicting evolution of 1D lines [0-1 arrays] with rules passed directly to as main arguments/**/
/* arguments are as follows: int width, int* rules (8 of ones or zeros)/**/
	std::ifstream numfile("inst.txt");
	
	std::string numline;	
	int first = 0;
	while (getline (numfile, numline)) {
		++first;
	}
	numfile.close();
	 




	int second = std::atof(argv[1]);
	std::string third = argv[2];

	int thrd[10];
	for (int i=0;i<10;++i){
		thrd[i]=(int)third[i]-48; /*conversion takes place in ASCII universe where everything sucks - that's the explenation for "48"/**/
	};

	Matrix view(first,second,thrd);

	view.readFile();
	for (int l = 0 ; l < second-1 ; ++l){  
		view.genline();
		view.passline();
	};
	std::cout << "pulchra es humana" << std::endl;
	view.writeFile();



	return 0;
};
