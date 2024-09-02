#include "Serialization.hpp"

int main() {
	
	Data *data = new Data;

    data->age = 21;
    data->name = "Foo";

    std::cout << "Age	: " << Serialization::deserialize(Serialization::serialize(data))->age << std::endl;
    std::cout << "Name	: " << Serialization::deserialize(Serialization::serialize(data))->name << std::endl;

    delete data;

    return 0;
}