#pragma once
class CScoreUi
{
public:
	CScoreUi();
	~CScoreUi();
	void Initialize();
	void Render(HDC hDC);
	void Update();
	void LateUpdate();
	void Release();
private:
	int m_Score;
};

