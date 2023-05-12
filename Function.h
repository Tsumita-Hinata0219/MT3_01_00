#pragma once

#include "Struct.h"
#include "assert.h"
#include <cmath>
#include <Novice.h>


// 描画
static const int kRowHeight = 20;
static int kColumnWidth = 60;
void MatrixScreenPrintf(int x, int y, Matrix4x4 matrix, const char* string);


// 1.perspectiveFovMatrix
Matrix4x4 MakePerspectiveFovMatrix(
	float fovY, float aspecrRatio, float nearClip, float farClip);

// 2.orthographicMatrix
Matrix4x4 MakeOrthographicMatrix(
	float left, float top, float right, float bottom, float nearClip, float farClip);

// 3.viewportMatrix
Matrix4x4 MakeViewportMatrix(
	float left, float top, float width, float height, float minDepth, float maxDepth);


