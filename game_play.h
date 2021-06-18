#ifndef ETRC21_GAME_PLAY_H_
#define ETRC21_GAME_PLAY_H_

#include "info_type.h"
#include "game_info.h"

class BingoAgent {
 public:
  BingoAgent(bool is_Rcourse);
  ~BingoAgent();
  void SetBlockPos(BlockId block_id, char circle_id);

 private:
  bool is_Rcourse_;
  BingoArea* bingo_area_;
};

#endif  // ETRC21_GAME_PLAY_H_