#include <iostream>
#include <vector>

std::vector<int> create_int_vector(uint16_t size){
	std::vector<int> v;
	for (uint16_t k=0; k<size; k++){
		v.push_back(1);	
	}
	return v;
}

int main(int argc, char* argv[]){
	int sz = 16;
	auto v = create_int_vector(sz);
	std::cout << "Vector is: " << std::endl;
	for (uint16_t j=0; j<v.size(); j++){
		std::cout << v[j] << " ";
	}
	std::cout << std::endl;
	return 0;
}
