#include <iostream>

#include <fstream>


//#include <vector>

using namespace std;

int main(int argc, char* argv[]) try{
	ifstream file ("./BF.txt", ios::in);
	//file.open("C:/Users/User/source/repos/BFCompiler/BFCompiler/BF.txt", ios::in);
	
	file >> noskipws;
	//file << "test";
	
	ofstream cppfile("./comp.cpp", ios::out);
	cppfile <<
		"#include <iostream>\n"
		"#include <vector>\n"
		"int main(){\n"
		"std::vector<char> reg(1);\n"
		"unsigned long long ind = 0;\n"
		;

	if (!file.is_open()) {
		//std::cout << argv[1];
		throw std::runtime_error("file not opened successfully");
	}
	
	char ch;
	while (file >> ch) {
		switch (ch) {
		case '<':
			cppfile <<
				"if(ind > 0){\n"
				"ind--;\n"
				"}else throw std::runtime_error(\"trying to access register before first register\");\n"
				;
			
			
			break;
		case '>':
			cppfile <<
				"ind++;\n"
				"while(ind > reg.size()){\n"
				"reg.push_back(0);}\n"
				;
			break;

		case '+':
			cppfile <<
				"reg[ind]++;\n"
				;
			break;
		case '-':
			cppfile <<
				"reg[ind]--;\n"
				;
			break;
		case '[':
			cppfile <<
				"do{\n"
				;
			break;
		case ']':
			cppfile <<
				"}while(reg[ind]!=0);\n";
			break;
		case ',':
			cppfile <<
				"std::cin>>reg[ind];\n"
				;
			break;
		case '.':
			cppfile << 
				"std::cout<<reg[ind];\n"
				;
			break;

		}
	}

	cppfile <<
		"return 0;\n"
		"}"
		;

		
	return 0;
}
catch (const std::exception& exc) {
	cout << "ERROR:" << exc.what();
	//system("pause");

}