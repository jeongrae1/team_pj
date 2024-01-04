#pragma once

#define WINCX		800
#define WINCY		600

#define PURE		= 0


template<typename T>
void Safe_Delete(T& Temp)
{
	if (Temp)
	{
		delete Temp;
		Temp = nullptr;
	}
}

typedef struct tagInfo
{
	float	fX;
	float	fY;
	float	fCX;
	float	fCY;

}INFO;

enum class Obj_Event
{
	NOEVENT = 1,
	DEAD = 2,
	END = 3
};

extern HWND g_hWnd;