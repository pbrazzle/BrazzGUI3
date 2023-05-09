#include "Control.test.hpp"
#include "ComboBox.hpp"

class ComboBoxTests : public ControlTests
{
	public:
		std::unique_ptr<Control> getTestInstance() 
		{ 
			return std::make_unique<ComboBox>(); 
		}
};

TEST_CASE("ComboBox Control tests", "[ComboBox]")
{
	ComboBoxTests tests;
	tests.run();
}