#include <NebulaCore.h>

class Sandbox : public NebulaCore::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

NebulaCore::Application* NebulaCore::CreateApplication()
{
	return new Sandbox();
}