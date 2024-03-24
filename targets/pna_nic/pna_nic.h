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

#include "externs/pna_counter.h"
#include "externs/pna_meter.h"
#include "externs/pna_random.h"
#include "externs/pna_internet_checksum.h"
#include "externs/pna_hash.h"
#include "externs/pna_crypto_accelerator.h"

namespace bm {

namespace pna {

class PnaNic {
 public:
  PnaNic();

  ~PnaNic();

};

}  // namespace bm::pna

}  // namespace bm

#endif  // PNA_NIC_PNA_NIC_H_
