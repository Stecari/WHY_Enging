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
	/*��������Ǵ���APP����Ҳ���Ǵ�ͻ��ˣ���ÿ���ͻ��˶��ǲ�һ���ģ��ⲻ��������Ҫ�����£���������������Ƿ��ڿͻ���(sandbox)����*/
	Application* CreatApplication();
}


