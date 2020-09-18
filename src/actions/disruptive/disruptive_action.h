/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2020 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */


#include <string>

#include "modsecurity/actions/action.h"
#include "src/actions/action_allowed_in_sec_default_action.h"


#ifndef SRC_ACTIONS_DISRUPTIVE_DISRUPTIVE_ACTION_H_
#define SRC_ACTIONS_DISRUPTIVE_DISRUPTIVE_ACTION_H_


namespace modsecurity {
namespace actions {
namespace disruptive {


class ActionDisruptive : public ActionAllowedAsSecDefaultAction {
 public:
};


}  // namespace disruptive
}  // namespace actions
}  // namespace modsecurity


#endif  // SRC_ACTIONS_DISRUPTIVE_DISRUPTIVE_ACTION_H_