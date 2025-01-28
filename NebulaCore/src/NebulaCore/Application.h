#pragma once

#include "Core.h"

namespace NebulaCore {

	class NEBULACORE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

