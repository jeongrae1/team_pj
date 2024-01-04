#pragma once
#include "CScoreUi.h"
#include "CLifeUi.h"

class CUiManager
{
public:
	CUiManager();
	~CUiManager();
	void Initialize();
	void Render(HDC hDC);
	void Update();
	void LateUpdate();
	void Release();

private:
	CScoreUi m_Score;
	CLifeUi m_Life;
};

