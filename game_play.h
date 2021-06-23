#ifndef ETRC21_GAME_PLAY_H_
#define ETRC21_GAME_PLAY_H_

#include "game_info.h"

class BlockDecision {
 public:
  BlockDecision(BingoArea* bingo_area);
  Block* NextCarryBlock();

 private:
  BingoArea* bingo_area_;
};

class BingoAgent {
 public:
  BingoAgent(bool is_Rcourse);
  ~BingoAgent();
  void SetBlockPos(BlockId block_id, char circle_id);
  void SolveBingo();

 private:
  bool is_Rcourse_;
  BingoArea* bingo_area_;
  BlockDecision* block_decision_;
};

#endif  // ETRC21_GAME_PLAY_H_
