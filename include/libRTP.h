#pragma once
#ifndef _LIBRTP_H_
#define _LIBRTP_H_

#include "libRTPExport.h"

C_EXPORT_BEGIN

#include <stdint.h>
#include "libRTPErrorDefine.h"
#include "libRTPCallbackDefine.h"
#include "libRTPPayloadTypes.h"
#include "libRTPSessionHandleDefine.h"

LIBRTP_API int initial_RTP_library(size_t max_session_number);

LIBRTP_API int get_new_RTP_session(RTP_session_handle* p_handle);

#define LIBRTP_AF_INET  2
#define LIBRTP_AF_INET6 23

LIBRTP_API int set_RTP_session_IP_version(RTP_session_handle handle, uint32_t version);

LIBRTP_API int set_RTP_session_local_IPv4(RTP_session_handle handle, char* IPv4);

LIBRTP_API int set_RTP_session_local_port(RTP_session_handle handle, uint16_t port);

LIBRTP_API int set_RTP_session_remote_IPv4(RTP_session_handle handle, char* IPv4);

LIBRTP_API int set_RTP_session_remote_port(RTP_session_handle handle, uint16_t port);

#define LIBRTP_IP_PROTOCOL_TCP  6
#define LIBRTP_IP_PROTOCOL_UDP  17

LIBRTP_API int set_RTP_session_IP_protocol(RTP_session_handle handle, uint32_t protocol);

LIBRTP_API int set_RTP_session_payload_type(RTP_session_handle handle, uint32_t payload_type);

LIBRTP_API int set_RTP_session_payload_give_out_callback(RTP_session_handle handle, function_give_out_payload p_function, void* user_data);

LIBRTP_API int RTP_session_start(RTP_session_handle handle);

LIBRTP_API int close_RTP_session(RTP_session_handle handle);

LIBRTP_API int uninitial_RTP_library(void);

C_EXPORT_END

#endif // !_LIBRTP_H_