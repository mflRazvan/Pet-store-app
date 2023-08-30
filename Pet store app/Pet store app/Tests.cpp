#include "Tests.h"

void testAll()
{
	Repository* repo = new Repository();
	FileRepository* file_repo = new FileRepository("tests.txt", repo);
	Service service(file_repo);
	//service.add_pet("Labrador", "Maxi", 4, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fwww.animalutze.com%2Fwp-content%2Fuploads%2F2017%2F10%2Fanimalutze-cainele-labrador-900x400.jpg&tbnid=-ZuCTsuffZ_M1M&vet=12ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ..i&imgrefurl=https%3A%2F%2Fwww.animalutze.com%2Flabradorul-putere-si-inteligenta%2F&docid=aALaZeXjWukMbM&w=900&h=400&q=labrador&ved=2ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ");
	assert(service.get_pet(0).get_breed() == "Labrador");
	assert(service.get_pet(0).get_name() == "Maxi");
	assert(service.get_pet(0).get_photograph() == "https://www.google.com/imgres?imgurl=https%3A%2F%2Fwww.animalutze.com%2Fwp-content%2Fuploads%2F2017%2F10%2Fanimalutze-cainele-labrador-900x400.jpg&tbnid=-ZuCTsuffZ_M1M&vet=12ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ..i&imgrefurl=https%3A%2F%2Fwww.animalutze.com%2Flabradorul-putere-si-inteligenta%2F&docid=aALaZeXjWukMbM&w=900&h=400&q=labrador&ved=2ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ");
	assert(service.get_pet(0).get_age() == 4);
	bool exception_thrown = false;
	try
	{
		service.add_pet(service.get_pet(0).get_breed(), service.get_pet(0).get_name(), service.get_pet(0).get_age(), service.get_pet(0).get_photograph());
	}
	catch (std::exception&)
	{
		exception_thrown = true;
	}
	assert(exception_thrown == true);

	assert(service.find_unique_pet("da", "da", 1, "da") == 0);
	assert(service.find_unique_pet("Labrador", "Maxi", 4, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fwww.animalutze.com%2Fwp-content%2Fuploads%2F2017%2F10%2Fanimalutze-cainele-labrador-900x400.jpg&tbnid=-ZuCTsuffZ_M1M&vet=12ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ..i&imgrefurl=https%3A%2F%2Fwww.animalutze.com%2Flabradorul-putere-si-inteligenta%2F&docid=aALaZeXjWukMbM&w=900&h=400&q=labrador&ved=2ahUKEwi8lKi9tpf-AhUT76QKHQtMBEMQMygJegUIARDQAQ") == 1);

	exception_thrown = false;
	try
	{
		service.remove_pet("Max");
	}
	catch (std::exception&)
	{
		exception_thrown = true;
	}
	assert(exception_thrown == true);

	service.update_pet("Caine lup", "Maxi", 1, "da");
	assert(service.get_pet(0).get_breed() == "Caine lup");
	assert(service.get_pet(0).get_photograph() == "da");
	assert(service.get_pet(0).get_age() == 1);
	exception_thrown = false;
	try
	{
		service.update_pet("da", "da", 11, "da");
	}
	catch (std::exception&)
	{
		exception_thrown = true;
	}
	assert(exception_thrown == true);

	service.adopt_pet(Pet("Caine lup", "Maxi", 1, "da", 1));
	assert(service.get_pet(0).get_adoption() == 1);

	assert(service.find_pet("Maxi") == 0);
	assert(service.find_pet("Msters") == -1);

	assert(service.get_pet_list_size() == 1);

	service.set_pet(0, Pet("da", "da", 3, "nu", 1));
	assert(service.get_pet(0).get_name() == "da");
	assert(service.get_pet(0).get_breed() == "da");
	assert(service.get_pet(0).get_photograph() == "nu");
	assert(service.get_pet(0).get_age() == 3);
	assert(service.get_pet(0).get_adoption() == 1);

	service.remove_pet("da");
	assert(service.find_pet("Maxi") == -1);

	Pet test_pet("da", "da", 3, "da", 1);
	test_pet.set_adoption(0);
	assert(test_pet.get_adoption() == 0);
	test_pet.set_age(1);
	assert(test_pet.get_age() == 1);
	test_pet.set_breed("nu");
	assert(test_pet.get_breed() == "nu");
	test_pet.set_name("nu");
	assert(test_pet.get_name() == "nu");
	test_pet.set_photograph("nu");
	assert(test_pet.get_photograph() == "nu");
}
