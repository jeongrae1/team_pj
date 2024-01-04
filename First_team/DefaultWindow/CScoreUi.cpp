#include "stdafx.h"
#include "CScoreUi.h"

CScoreUi::CScoreUi()
{
}

CScoreUi::~CScoreUi()
{
	Release();
}

void CScoreUi::Initialize()
{
}

void CScoreUi::Render(HDC hDC)
{
	TCHAR szScore[32] = L"Score:";
	TextOut(hDC, 10, 10, szScore, lstrlen(szScore));
}

void CScoreUi::Update()
{
}

void CScoreUi::LateUpdate()
{
}

void CScoreUi::Release()
{
}
