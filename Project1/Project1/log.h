#ifndef _LOG_H_
#define _LOG_H_
// 防止重复定义头文件
void Log (const char* message)
{
	std::cout << message << std::endl;
}
#endif

#pragma once//也可以直接用pragma once