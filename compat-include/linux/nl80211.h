/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (C) 2007-2020  B.A.T.M.A.N. contributors:
 *
 * Marek Lindner, Simon Wunderlich
 *
 * This file contains macros for maintaining compatibility with older versions
 * of the Linux kernel.
 */

#ifndef _NET_BATMAN_ADV_COMPAT_LINUX_NL80211_H_
#define _NET_BATMAN_ADV_COMPAT_LINUX_NL80211_H_

#include <linux/version.h>
#include_next <linux/nl80211.h>

#if LINUX_VERSION_IS_LESS(3, 16, 0)

/* Linux 3.15 misses the uapi include.... */
#include <uapi/linux/nl80211.h>

#endif /* LINUX_VERSION_IS_LESS(3, 16, 0) */

#endif	/* _NET_BATMAN_ADV_COMPAT_LINUX_NL80211_H_ */
