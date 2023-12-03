#include "Serializer.hpp"
#include "data.h"

int main()
{
	Data data;
	data.num = 42;
	Data *data2 = &data;
	Data *data3 = NULL;

	std::cout << "Data num before serializer: " << data.num << std::endl;
	data3 = Serializer::deserialize(Serializer::serialize(data2));
}