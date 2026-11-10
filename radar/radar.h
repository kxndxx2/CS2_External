#pragma once
#define _USE_MATH_DEFINES
#include "../Game.h"
#include <math.h>
#include <tuple>

class Base_Radar
{
public:
	// ÉèÖÃÀ×´ïÊý¾Ý
	void SetSize(const float& Size);
	void SetPos(const Vec2& Pos);
	void SetRange(const float& Range);
	void SetCrossColor(const ImColor& Color);
	void SetProportion(const float& Proportion);
	void SetDrawList(ImDrawList* DrawList);
	// »ñÈ¡À×´ïÊý¾Ý
	float GetSize();
	Vec2 GetPos();
	// Ìí¼Ó»æÖÆµã
	void AddPoint(const Vec3& LocalPos,const float& LocalYaw, const Vec3& Pos, ImColor Color, int Type = 0, float Yaw = 0.0f);
	// äÖÈ¾
	void Render();
public:
	ImDrawList* DrawList = nullptr;
	// Ê®×ÖÏÔÊ¾
	bool ShowCrossLine = true;
	// Ê®×ÖÑÕÉ«
	ImColor CrossColor = ImColor(255, 255, 255, 255);
	// ±ÈÀý
	float Proportion = 2680;
	// Ô²µã°ë¾¶
	float CircleSize = 4;
	// ¼ýÍ·³ß´ç
	float ArrowSize = 11;
	// Ô²»¡¼ýÍ·³ß´ç
	float ArcArrowSize = 7;
	// À×´ï·¶Î§
	float RenderRange = 250;
	// ±¾µØYawÊý¾Ý
	float LocalYaw = 0.0f;
	// ×´Ì¬
	bool Opened = true;
	// À×´ï»æÖÆÀàÐÍ 0:Ô²ÐÎ 1:¼ýÍ· 2:Ô²»¡¼ýÍ·
	int  PointType = 0;
private:
	Vec2  Pos{ 0,0 };
	float Width = 200;
	std::vector<std::tuple<Vec2, ImColor, int, float>> Points;
};
