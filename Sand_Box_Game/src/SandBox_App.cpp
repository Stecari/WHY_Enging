#include "TribleZ.h"
//#include <TribleZ.h>  //���Ҳ���ԣ�������Ϊ�˷ֵ����һ���������Ǹ�
#include <vector>


class SandBox : public TribleZ::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}

};

TribleZ::Application* TribleZ::CreatApplication()
{
	return new SandBox;
}
