#pragma once


#ifdef TZ_PLATFORM_WINDOWS	//����ƽ̨��ֻΪWindows���
	#ifdef TZ_BUILD_DLL			//��������ļ���DLL�ļ����Ͷ������
		#define TZ_API __declspec(dllexport)
	#else						//��Ȼ�������
		#define TZ_API __declspec(dllimport)
	#endif TZ_BUILD_DLL
#else						//ƽ̨�������δ����ᱨ��
	#error TribleZ only build for windows!
#endif TZ_PLATFORM_WINDOWS
