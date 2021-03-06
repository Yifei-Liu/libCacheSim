//
//  ARC cache replacement algorithm
//  libCacheSim
//
//  Created by Juncheng on 09/28/20.
//  Copyright © 2020 Juncheng. All rights reserved.
//


#ifndef ARC_h
#define ARC_h

#ifdef __cplusplus
extern "C"
{
#endif

#include "../cache.h"
#include "ARC.h"




// by default, the ghost list size is the same size as cache size

typedef struct ARC_params {
  cache_t *LRU1;            // normal ARC segment
  cache_t *LRU1g;           // ghost list for normal ARC segment
  cache_t *LRU2;            // normal ARC segement for items accessed more than once
  cache_t *LRU2g;           // ghost list for normal LFU segment
  double ghost_list_factor;  // size(ghost_list)/size(evictionAlgo)
  int move_pos;             /* where the eviction should come from */
} ARC_params_t;


typedef struct ARC_init_params {
  double ghost_list_factor;
} ARC_init_params_t;


cache_t *ARC_init(common_cache_params_t ccache_params,
                  void *cache_specific_params);

void ARC_free(cache_t *cache);

cache_ck_res_e ARC_check(cache_t *cache, request_t *req, bool update);

cache_ck_res_e ARC_get(cache_t *cache, request_t *req);

void ARC_remove_obj(cache_t *cache, cache_obj_t *obj_to_remove);

void ARC_insert(cache_t *ARC, request_t *req);

void ARC_evict(cache_t *ARC, request_t *req, cache_obj_t *cache_obj);


#ifdef __cplusplus
}
#endif


#endif  /* ARC_H */ 
