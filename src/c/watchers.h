/*
 * Copyright (c) 2019
 * IoTech Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#ifndef _EDGEX_DEVICE_WATCHERS_H_
#define _EDGEX_DEVICE_WATCHERS_H_ 1

/* Manages provision watchers for the SDK. */

#include "edgex/edgex.h"
#include "devsdk/devsdk-base.h"
#include "iot/logger.h"

struct edgex_watchlist_t;
typedef struct edgex_watchlist_t edgex_watchlist_t;

extern edgex_watchlist_t *edgex_watchlist_alloc (void);
extern void edgex_watchlist_free (edgex_watchlist_t *list);

extern unsigned edgex_watchlist_populate (edgex_watchlist_t *list, const edgex_watcher *entry);
extern bool edgex_watchlist_remove_watcher (edgex_watchlist_t *list, const char *id);
extern void edgex_watchlist_update_watcher (edgex_watchlist_t *list, const edgex_watcher *updated);

extern const edgex_watcher *edgex_watchlist_match (const edgex_watchlist_t *list, const devsdk_nvpairs *ids);

extern void edgex_watchlist_dump (const edgex_watchlist_t *list, iot_logger_t *logger);

#endif
