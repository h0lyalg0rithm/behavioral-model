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

/* NIC instance */

#include "pna_nic.h"
#include <bm/bm_sim/target_parser.h>

namespace {
bm::pna::PnaNic *pna_nic;
bm::TargetParserBasic *pna_nic_parser;
}  // namespace

int
main(int argc, char* argv[]) {
  using bm::pna::PnaNic;
  pna_nic = new PnaNic();
  pna_nic_parser = new bm::TargetParserBasic();

  int status = pna_nic->init_from_command_line_options(
     argc, argv, pna_nic_parser);

  if(status != 0) std::exit(status);


  return 0;
}
