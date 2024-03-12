#include "TribleZ.h"
//#include <TribleZ.h>  //这个也可以，但是我为了分得清楚一点用上面那个
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
