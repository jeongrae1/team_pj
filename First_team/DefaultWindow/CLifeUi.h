#pragma once
class CLifeUi
{
public:
	CLifeUi();
	~CLifeUi();
	void Initialize();
	void Render(HDC hDC);
	void Update();
	void LateUpdate();
	void Release();
private:
};

