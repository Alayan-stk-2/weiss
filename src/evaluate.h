// evaluate.h

#pragma once

#include "types.h"


#define MakeScore(mg, eg) ((int)((unsigned int)(eg) << 16) + (mg))
#define S(mg, eg) MakeScore((mg), (eg))
#define MgScore(s) ((int16_t)((uint16_t)((unsigned)((s)))))
#define EgScore(s) ((int16_t)((uint16_t)((unsigned)((s) + 0x8000) >> 16)))


typedef struct EvalInfo {

    bitboard pawnsBB[2];
    bitboard mobilityArea[2];

} EvalInfo;


int EvalPosition(const Position *pos);