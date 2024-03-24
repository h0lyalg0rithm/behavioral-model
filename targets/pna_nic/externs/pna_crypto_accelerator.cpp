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

#include "pna_crypto_accelerator.h"

namespace bm {

namespace pna {

void
PNA_Crypto_Accelerator::init() {
  // Get crypto algorithm from CryptoAlgorithmsMap
}

BM_REGISTER_EXTERN_W_NAME(CryptoAccelerator, PNA_Crypto_Accelerator);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, get_sa_index, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, get_iv, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_key, Field &, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_auth_data_offset, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_auth_data_len, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, add_auth_data, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_icv_offset, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_icv_len, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_payload_offset, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, set_payload_len, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, enable_encrypt, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, enable_decrypt, Field &);
BM_REGISTER_EXTERN_W_NAME_METHOD(CryptoAccelerator, PNA_Crypto_Accelerator, disable);

} // namespace bm::pna

} // namespace bm

int import_crypto_accelerator() {
  return 0;
}

