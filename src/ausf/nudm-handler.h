/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef AUSF_NUDM_HANDLER_H
#define AUSF_NUDM_HANDLER_H

#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif

bool ausf_nudm_ueau_handle_get(ausf_ue_t *ausf_ue,
        ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg);
bool ausf_nudm_ueau_handle_result_confirmation_inform(ausf_ue_t *ausf_ue,
        ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg);
bool ausf_nudm_ueau_handle_auth_removal_ind(ausf_ue_t *ausf_ue,
        ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg);
#ifdef __cplusplus
}
#endif

#endif /* AUSF_NUDM_HANDLER_H */
