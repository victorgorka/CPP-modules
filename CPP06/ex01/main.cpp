#include "Serializer.hpp"
#include "data.h"

int main()
{
	// Original Data structure setted with a value
	Data data;
	data.num = 42;
	
	// Data structure pointer in form of uintptr_t
	uintptr_t ptrData = Serializer::serialize(&data);

	// Second Data structure that will recieve ptrData deserialized
	Data *data2 = Serializer::deserialize(ptrData);

	// Showing content of data2
	std::cout << "num of data2: " << data2->num << std::endl;
	return 0;
}