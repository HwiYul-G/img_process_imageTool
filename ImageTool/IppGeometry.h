#pragma once

#include "IppImage.h"

void IppTranslate(IppByteImage& imgSrc, IppByteImage& imgDst, int sx, int sy);
void IppResizeNearest(IppByteImage& imgSrc, IppByteImage& imgDst, int nw, int nh);
void IppResizeBilinear(IppByteImage& imgSrc, IppByteImage& imgDst, int nw, int nh);
void IppResizeCubic(IppByteImage& imgSrc, IppByteImage& imgDst, int nw, int nh);
double cubic_interpolation(double v1, double v2, double v3, double v4, double d);

// 회전 변환
void IppRotate90(IppByteImage& imgSrc, IppByteImage& imgDst);
void IppRotate180(IppByteImage& imgSrc, IppByteImage& imgDst);
void IppRotate270(IppByteImage& imgSrc, IppByteImage& imgDst);
// 대칭변환
void IppMirror(IppByteImage& imgSrc, IppByteImage& imgDst);
void IppFlip(IppByteImage& imgSrc, IppByteImage& imgDst);