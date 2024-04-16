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

#ifndef PNA_NIC_PNA_CRYPTO_ACCELERATOR_H_
#define PNA_NIC_PNA_CRYPTO_ACCELERATOR_H_

#include <bm/bm_sim/extern.h>

namespace bm {

namespace pna {

class PNA_Crypto_Accelerator : public bm::ExternType {
  public:
  BM_EXTERN_ATTRIBUTES {
    BM_EXTERN_ATTRIBUTE_ADD(algo);
  }
  void init() override;

  void get_sa_index(bm::Field &f) {};
  void get_iv(bm::Field &f) {};
  void set_key(bm::Field &f, bm::Field &g) {};
  void set_auth_data_offset(bm::Field &f) {};
  void set_auth_data_len(bm::Field &f) {};
  void add_auth_data(bm::Field &f) {};
  void set_icv_offset(bm::Field &f) {};
  void set_icv_len(bm::Field &f) {};
  void set_payload_offset(bm::Field &f) {};
  void set_payload_len(bm::Field &f) {};
  void enable_encrypt(bm::Field &f) {};
  void enable_decrypt(bm::Field &f) {};
  void disable() {};

  private:
    std::string algo;
};

}  // namespace bm::pna

}  // namespace bm
#endif
