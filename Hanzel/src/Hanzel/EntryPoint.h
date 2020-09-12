#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application * Hazel::CreateApplication();

int main()
{
	printf("EntryPoint!!!");
	auto app = Hazel::CreateApplication();
	app->Run();

	delete app;

	return 0;
}

#endif
