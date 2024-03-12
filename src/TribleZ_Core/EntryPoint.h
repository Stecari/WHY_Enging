#pragma once
#ifdef TZ_PLATFORM_WINDOWS

extern TribleZ::Application* TribleZ::CreatApplication();

int main(int argc, char** argv)
{
	std::cout << "TribleZ Engine!" << std::endl;
	auto app = TribleZ::CreatApplication();
	app->RUN();
	delete app;
}

#endif

