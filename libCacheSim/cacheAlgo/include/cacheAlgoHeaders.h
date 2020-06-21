//
// Created by Juncheng Yang on 11/25/19.
//

#ifndef libCacheSim_CACHEHEADERS_H
#define libCacheSim_CACHEHEADERS_H

#ifdef __cplusplus
extern "C"
{
#endif

//#include "ARC.h"
#include "FIFO.h"
//#include "LFU.h"
//#include "LFUFast.h"
#include "LRU.h"
#include "LRUv0.h"
//#include "LRU_K.h"
#include "MRU.h"
//#include "Optimal.h"
#include "Random.h"
//#include "SLRU.h"
//#include "TTL_FIFO.h"


#include "slabLRU.h"
#include "slabLRC.h"
#include "slabObjLRU.h"
#include "slabCommon.h"


//#include "AMP.h"
//#include "PG.h"
//#include "Mithril.h"


#ifdef __cplusplus
}
#endif




#endif //libCacheSim_CACHEHEADERS_H