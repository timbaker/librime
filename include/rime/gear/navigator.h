//
// Copyright RIME Developers
// Distributed under the BSD License
//
// 2011-11-20 GONG Chen <chen.sst@gmail.com>
//
#ifndef RIME_NAVIGATOR_H_
#define RIME_NAVIGATOR_H_

#include <string>
#include <rime/common.h>
#include <rime/component.h>
#include <rime/processor.h>
#include <rime/algo/syllabifier.h>

namespace rime {

class Navigator : public Processor {
 public:
  Navigator(const Ticket& ticket) : Processor(ticket) {}

  virtual ProcessResult ProcessKeyEvent(const KeyEvent& key_event);

 private:
  void BeginMove(Context* ctx);
  bool JumpLeft(Context* ctx);
  bool JumpRight(Context* ctx);
  bool Left(Context* ctx);
  bool Right(Context* ctx);
  bool Home(Context* ctx);
  bool End(Context* ctx);

  std::string input_;
  Syllabification syllabification_;
};

}  // namespace rime

#endif  // RIME_NAVIGATOR_H_
