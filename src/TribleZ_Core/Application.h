#pragma once
#include "Core.h"

namespace TribleZ
{
	class TZ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void RUN();

	};
	/*由于这个是创建APP对象，也就是搭建客户端，而每个客户端都是不一样的，这不是引擎里要做的事，所以这个函数我们放在客户端(sandbox)定义*/
	Application* CreatApplication();
}


