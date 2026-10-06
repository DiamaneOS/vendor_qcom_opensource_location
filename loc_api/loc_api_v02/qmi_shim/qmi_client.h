// Copyright (c) 2026 The DiamaneOS Project
// SPDX-License-Identifier: BSD-3-Clause

/* The QMI client interface under the names this library was written against
 * (qmi_client_*), mapped onto the public QMI framework, which calls it
 * qmi_cci_* (github.com/qualcomm/qmi-framework, include/qmi_cci.h). Types,
 * error codes and callbacks keep their names there. */
#ifndef LOC_QMI_SHIM_QMI_CLIENT_H
#define LOC_QMI_SHIM_QMI_CLIENT_H

#include "qmi_cci.h"

typedef qmi_cci_error_type qmi_client_error_type;

#define qmi_client_notifier_init        qmi_cci_notifier_init
#define qmi_client_init                 qmi_cci_init
#define qmi_client_init_instance        qmi_cci_init_instance
#define qmi_client_release              qmi_cci_release
#define qmi_client_release_async        qmi_cci_release_async
#define qmi_client_send_msg_sync        qmi_cci_send_msg_sync
#define qmi_client_send_msg_async       qmi_cci_send_msg_async
#define qmi_client_send_raw_msg_sync    qmi_cci_send_raw_msg_sync
#define qmi_client_send_raw_msg_async   qmi_cci_send_raw_msg_async
#define qmi_client_delete_async_txn     qmi_cci_delete_async_txn
#define qmi_client_message_encode       qmi_cci_message_encode
#define qmi_client_message_decode       qmi_cci_message_decode
#define qmi_client_get_service_list     qmi_cci_get_service_list
#define qmi_client_get_any_service      qmi_cci_get_any_service
#define qmi_client_get_service_instance qmi_cci_get_service_instance
#define qmi_client_get_instance_id      qmi_cci_get_instance_id
#define qmi_client_register_error_cb    qmi_cci_register_error_cb
#define qmi_client_register_notify_cb   qmi_cci_register_notify_cb
#define qmi_client_register_log_cb      qmi_cci_register_log_cb

#endif
