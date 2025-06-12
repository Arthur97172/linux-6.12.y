/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright 2024-2025 Tomeu Vizoso <tomeu@tomeuvizoso.net> */

#ifndef __ROCKET_DRV_H__
#define __ROCKET_DRV_H__

#include "rocket_device.h"

struct rocket_file_priv {
	struct rocket_device *rdev;

	struct iommu_domain *domain;
};

#endif
