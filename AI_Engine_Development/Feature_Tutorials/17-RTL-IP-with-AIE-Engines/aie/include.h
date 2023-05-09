/*
Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved.
SPDX-License-Identifier: X11
*/
#ifndef __INCLUDE_H__
#define __INCLUDE_H__

#define INTERPOLATOR27_INPUT_SAMPLES 128
#define INTERPOLATOR27_INPUT_MARGIN (16*4)
#define INTERPOLATOR27_COEFFICIENTS 16
#define INTERPOLATOR27_OUTPUT_SAMPLES (INTERPOLATOR27_INPUT_SAMPLES * 2)
#define INTERPOLATOR27_INPUT_BLOCK_SIZE (INTERPOLATOR27_INPUT_SAMPLES * 4)

#define POLAR_CLIP_INPUT_SAMPLES (INTERPOLATOR27_OUTPUT_SAMPLES)
#define POLAR_CLIP_INPUT_BLOCK_SIZE (POLAR_CLIP_INPUT_SAMPLES * 4)
#define POLAR_CLIP_OUTPUT_SAMPLES (POLAR_CLIP_INPUT_SAMPLES)

#define CLASSIFIER_OUTPUT_SAMPLES (POLAR_CLIP_OUTPUT_SAMPLES)
#define CLASSIFIER_OUTPUT_BLOCK_SIZE (CLASSIFIER_OUTPUT_SAMPLES * 4)

#endif /**********__INCLUDE_H__**********/
