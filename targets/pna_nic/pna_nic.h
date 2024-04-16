/* Copyright 2024-present
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Suraj Shirvankar (surajshirvankar@gmail.com)
 *
 */

#ifndef PNA_NIC_PNA_NIC_H_
#define PNA_NIC_PNA_NIC_H_

#include <bm/bm_sim/switch.h>

#include "externs/pna_counter.h"
#include "externs/pna_meter.h"
#include "externs/pna_random.h"
#include "externs/pna_internet_checksum.h"
#include "externs/pna_hash.h"
#include "externs/pna_crypto_accelerator.h"

namespace bm {

namespace pna {

// TODO: For now we can use switch base class
// might create NIC
class PnaNic : public Switch {
 public:
  PnaNic();

  ~PnaNic();

  int receive_(port_t port_num, const char *buffer, int len);

  void start_and_return_();

  int init_from_command_line_options(int argc, char* argv[], bm::TargetParserBasic *parser);
};

}  // namespace bm::pna

}  // namespace bm

#endif  // PNA_NIC_PNA_NIC_H_
