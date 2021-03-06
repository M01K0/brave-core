/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_CONFIRMATIONS_INTERNAL_REDEEM_UNBLINDED_TOKEN_DELEGATE_H_
#define BAT_CONFIRMATIONS_INTERNAL_REDEEM_UNBLINDED_TOKEN_DELEGATE_H_

#include "bat/confirmations/internal/confirmation_info.h"

namespace confirmations {

class RedeemUnblindedTokenDelegate {
 public:
  RedeemUnblindedTokenDelegate() = default;
  virtual ~RedeemUnblindedTokenDelegate() = default;

  virtual void OnDidRedeemUnblindedToken(
      const ConfirmationInfo& confirmation) = 0;
  virtual void OnFailedToRedeemUnblindedToken(
      const ConfirmationInfo& confirmation) = 0;
};

}  // namespace confirmations

#endif  // BAT_CONFIRMATIONS_INTERNAL_REDEEM_UNBLINDED_TOKEN_DELEGATE_H_
