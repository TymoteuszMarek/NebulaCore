#pragma once

#ifdef NC_PLATFORM_WINDOWS

extern NebulaCore::Application* NebulaCore::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NebulaCore::CreateApplication();
	app->Run();
	delete app;
}

#endif