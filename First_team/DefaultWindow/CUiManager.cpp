#include "stdafx.h"
#include "CUiManager.h"

CUiManager::CUiManager()
{
}

CUiManager::~CUiManager()
{
	Release();
}

void CUiManager::Initialize()
{
}

void CUiManager::Render(HDC hDC)
{
	m_Score.Render(hDC);
}

void CUiManager::Update()
{
	Update();
}

void CUiManager::LateUpdate()
{
}

void CUiManager::Release()
{
}
