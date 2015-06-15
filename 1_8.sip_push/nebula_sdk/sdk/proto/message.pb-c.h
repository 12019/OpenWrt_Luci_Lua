/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_message_2eproto__INCLUDED
#define PROTOBUF_C_message_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Nebula__Param Nebula__Param;
typedef struct _Nebula__AccountUpdateRequest Nebula__AccountUpdateRequest;
typedef struct _Nebula__AccountUpdateResponse Nebula__AccountUpdateResponse;
typedef struct _Nebula__AuthRequest Nebula__AuthRequest;
typedef struct _Nebula__AuthResponse Nebula__AuthResponse;
typedef struct _Nebula__Message Nebula__Message;
typedef struct _Nebula__Message__Content Nebula__Message__Content;
typedef struct _Nebula__MessageSeq Nebula__MessageSeq;
typedef struct _Nebula__MessageSeq__Content Nebula__MessageSeq__Content;
typedef struct _Nebula__MessageKievAck Nebula__MessageKievAck;
typedef struct _Nebula__SubscribeRequest Nebula__SubscribeRequest;
typedef struct _Nebula__SubscribeResponse Nebula__SubscribeResponse;
typedef struct _Nebula__SubscribeResponse__Content Nebula__SubscribeResponse__Content;
typedef struct _Nebula__NotifyBody Nebula__NotifyBody;
typedef struct _Nebula__SmsRequest Nebula__SmsRequest;
typedef struct _Nebula__SmsRequest__FileInfo Nebula__SmsRequest__FileInfo;
typedef struct _Nebula__SmsResponse Nebula__SmsResponse;
typedef struct _Nebula__PresenceNotify Nebula__PresenceNotify;
typedef struct _Nebula__PresenceNotify__Content Nebula__PresenceNotify__Content;
typedef struct _Nebula__PresenceRequest Nebula__PresenceRequest;
typedef struct _Nebula__PresenceResponse Nebula__PresenceResponse;
typedef struct _Nebula__AccountStatusRequest Nebula__AccountStatusRequest;
typedef struct _Nebula__AccountStatusResponse Nebula__AccountStatusResponse;
typedef struct _Nebula__AccountStatusResponse__AccountStatus Nebula__AccountStatusResponse__AccountStatus;
typedef struct _Nebula__Address Nebula__Address;
typedef struct _Nebula__DialogRequest Nebula__DialogRequest;
typedef struct _Nebula__DialogResponse Nebula__DialogResponse;


/* --- enums --- */

typedef enum _Nebula__AuthRequest__Algorithm {
  NEBULA__AUTH_REQUEST__ALGORITHM__MD5_MEIZU = 0,
  NEBULA__AUTH_REQUEST__ALGORITHM__MD5_DAA = 1,
  NEBULA__AUTH_REQUEST__ALGORITHM__MD5_FLYME = 2
} Nebula__AuthRequest__Algorithm;
typedef enum _Nebula__Message__Content__MsgType {
  NEBULA__MESSAGE__CONTENT__MSG_TYPE__ePushMessage = 0,
  NEBULA__MESSAGE__CONTENT__MSG_TYPE__ePresenceMessage = 1,
  NEBULA__MESSAGE__CONTENT__MSG_TYPE__eSmsMessage = 2
} Nebula__Message__Content__MsgType;
typedef enum _Nebula__Message__Flag {
  NEBULA__MESSAGE__FLAG__MESSAGE_ACK = 1,
  NEBULA__MESSAGE__FLAG__MESSAGE_END = 2
} Nebula__Message__Flag;
typedef enum _Nebula__SmsRequest__SmsType {
  NEBULA__SMS_REQUEST__SMS_TYPE__eShortMessage = 0,
  NEBULA__SMS_REQUEST__SMS_TYPE__eMultimediaMessage = 1,
  NEBULA__SMS_REQUEST__SMS_TYPE__eReportMessage = 2
} Nebula__SmsRequest__SmsType;
typedef enum _Nebula__SmsRequest__ReportType {
  NEBULA__SMS_REQUEST__REPORT_TYPE__eSMSReport = 0,
  NEBULA__SMS_REQUEST__REPORT_TYPE__eMMSReport = 1
} Nebula__SmsRequest__ReportType;
typedef enum _Nebula__PresenceType {
  NEBULA__PRESENCE_TYPE__eIncrementSubscribe = 0,
  NEBULA__PRESENCE_TYPE__eFullSubscribe = 1,
  NEBULA__PRESENCE_TYPE__eUnSubscribe = 2
} Nebula__PresenceType;

/* --- messages --- */

struct  _Nebula__Param
{
  ProtobufCMessage base;
  char *name;
  char *value;
};
#define NEBULA__PARAM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__param__descriptor) \
    , NULL, NULL }


struct  _Nebula__AccountUpdateRequest
{
  ProtobufCMessage base;
  char *flyme_uid;
  char *phone;
  protobuf_c_boolean has_capability;
  int32_t capability;
};
#define NEBULA__ACCOUNT_UPDATE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__account_update_request__descriptor) \
    , NULL, NULL, 0,0 }


struct  _Nebula__AccountUpdateResponse
{
  ProtobufCMessage base;
  int32_t status;
  char *flyme_uid;
  char *imsi;
  char *phone;
  protobuf_c_boolean has_capability;
  int32_t capability;
};
#define NEBULA__ACCOUNT_UPDATE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__account_update_response__descriptor) \
    , 0, NULL, NULL, NULL, 0,0 }


struct  _Nebula__AuthRequest
{
  ProtobufCMessage base;
  char *uid;
  char *username;
  char *nonce;
  char *realm;
  char *token;
  protobuf_c_boolean has_algorithm;
  Nebula__AuthRequest__Algorithm algorithm;
  size_t n_other_info;
  Nebula__Param **other_info;
};
#define NEBULA__AUTH_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__auth_request__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, 0,0, 0,NULL }


struct  _Nebula__AuthResponse
{
  ProtobufCMessage base;
  protobuf_c_boolean has_status;
  int32_t status;
  char *nonce;
  char *realm;
};
#define NEBULA__AUTH_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__auth_response__descriptor) \
    , 0,0, NULL, NULL }


struct  _Nebula__Message__Content
{
  ProtobufCMessage base;
  Nebula__Message__Content__MsgType type;
  char *account;
  uint32_t seq;
  protobuf_c_boolean has_body;
  ProtobufCBinaryData body;
};
#define NEBULA__MESSAGE__CONTENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__message__content__descriptor) \
    , 0, NULL, 0, 0,{0,NULL} }


struct  _Nebula__Message
{
  ProtobufCMessage base;
  size_t n_content;
  Nebula__Message__Content **content;
  protobuf_c_boolean has_flag;
  Nebula__Message__Flag flag;
};
#define NEBULA__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__message__descriptor) \
    , 0,NULL, 0,0 }


struct  _Nebula__MessageSeq__Content
{
  ProtobufCMessage base;
  char *account;
  uint32_t seq;
};
#define NEBULA__MESSAGE_SEQ__CONTENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__message_seq__content__descriptor) \
    , NULL, 0 }


struct  _Nebula__MessageSeq
{
  ProtobufCMessage base;
  size_t n_content;
  Nebula__MessageSeq__Content **content;
};
#define NEBULA__MESSAGE_SEQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__message_seq__descriptor) \
    , 0,NULL }


struct  _Nebula__MessageKievAck
{
  ProtobufCMessage base;
  Nebula__MessageSeq *seqs;
  uint32_t index;
};
#define NEBULA__MESSAGE_KIEV_ACK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__message_kiev_ack__descriptor) \
    , NULL, 0 }


struct  _Nebula__SubscribeRequest
{
  ProtobufCMessage base;
  size_t n_app;
  char **app;
};
#define NEBULA__SUBSCRIBE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__subscribe_request__descriptor) \
    , 0,NULL }


struct  _Nebula__SubscribeResponse__Content
{
  ProtobufCMessage base;
  protobuf_c_boolean has_status;
  int32_t status;
  char *app;
  char *pushid;
};
#define NEBULA__SUBSCRIBE_RESPONSE__CONTENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__subscribe_response__content__descriptor) \
    , 0,0, NULL, NULL }


struct  _Nebula__SubscribeResponse
{
  ProtobufCMessage base;
  int32_t status;
  size_t n_content;
  Nebula__SubscribeResponse__Content **content;
};
#define NEBULA__SUBSCRIBE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__subscribe_response__descriptor) \
    , 0, 0,NULL }


struct  _Nebula__NotifyBody
{
  ProtobufCMessage base;
  char *app;
  char *body;
};
#define NEBULA__NOTIFY_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__notify_body__descriptor) \
    , NULL, NULL }


struct  _Nebula__SmsRequest__FileInfo
{
  ProtobufCMessage base;
  char *mimetype;
  int32_t size;
  char *filename;
  char *url;
};
#define NEBULA__SMS_REQUEST__FILE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__sms_request__file_info__descriptor) \
    , NULL, 0, NULL, NULL }


struct  _Nebula__SmsRequest
{
  ProtobufCMessage base;
  Nebula__SmsRequest__SmsType type;
  char *msgid;
  char *src;
  size_t n_dst;
  char **dst;
  protobuf_c_boolean has_body;
  ProtobufCBinaryData body;
  protobuf_c_boolean has_report_flag;
  protobuf_c_boolean report_flag;
  protobuf_c_boolean has_report_type;
  Nebula__SmsRequest__ReportType report_type;
  char *report_status;
  char *time;
  char *expires;
  char *pdu;
  protobuf_c_boolean has_size;
  int32_t size;
  char *ver;
  size_t n_fileinfos;
  Nebula__SmsRequest__FileInfo **fileinfos;
};
#define NEBULA__SMS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__sms_request__descriptor) \
    , 0, NULL, NULL, 0,NULL, 0,{0,NULL}, 0,0, 0,0, NULL, NULL, NULL, NULL, 0,0, NULL, 0,NULL }


struct  _Nebula__SmsResponse
{
  ProtobufCMessage base;
  char *msgid;
  int32_t status;
};
#define NEBULA__SMS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__sms_response__descriptor) \
    , NULL, 0 }


struct  _Nebula__PresenceNotify__Content
{
  ProtobufCMessage base;
  char *account;
  protobuf_c_boolean has_capability;
  int32_t capability;
  protobuf_c_boolean has_status;
  int32_t status;
};
#define NEBULA__PRESENCE_NOTIFY__CONTENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__presence_notify__content__descriptor) \
    , NULL, 0,0, 0,0 }


struct  _Nebula__PresenceNotify
{
  ProtobufCMessage base;
  size_t n_content;
  Nebula__PresenceNotify__Content **content;
};
#define NEBULA__PRESENCE_NOTIFY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__presence_notify__descriptor) \
    , 0,NULL }


struct  _Nebula__PresenceRequest
{
  ProtobufCMessage base;
  protobuf_c_boolean has_type;
  Nebula__PresenceType type;
  protobuf_c_boolean has_sequence;
  uint32_t sequence;
  size_t n_account;
  char **account;
};
#define NEBULA__PRESENCE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__presence_request__descriptor) \
    , 0,0, 0,0, 0,NULL }


struct  _Nebula__PresenceResponse
{
  ProtobufCMessage base;
  int32_t status;
  protobuf_c_boolean has_type;
  Nebula__PresenceType type;
  protobuf_c_boolean has_sequence;
  uint32_t sequence;
  size_t n_account;
  char **account;
};
#define NEBULA__PRESENCE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__presence_response__descriptor) \
    , 0, 0,0, 0,0, 0,NULL }


struct  _Nebula__AccountStatusRequest
{
  ProtobufCMessage base;
  size_t n_account;
  char **account;
};
#define NEBULA__ACCOUNT_STATUS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__account_status_request__descriptor) \
    , 0,NULL }


struct  _Nebula__AccountStatusResponse__AccountStatus
{
  ProtobufCMessage base;
  char *account;
  protobuf_c_boolean has_status;
  int32_t status;
  protobuf_c_boolean has_capability;
  int32_t capability;
};
#define NEBULA__ACCOUNT_STATUS_RESPONSE__ACCOUNT_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__account_status_response__account_status__descriptor) \
    , NULL, 0,0, 0,0 }


struct  _Nebula__AccountStatusResponse
{
  ProtobufCMessage base;
  int32_t status;
  size_t n_result;
  Nebula__AccountStatusResponse__AccountStatus **result;
};
#define NEBULA__ACCOUNT_STATUS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__account_status_response__descriptor) \
    , 0, 0,NULL }


struct  _Nebula__Address
{
  ProtobufCMessage base;
  char *host;
  int32_t port;
};
#define NEBULA__ADDRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__address__descriptor) \
    , NULL, 0 }


struct  _Nebula__DialogRequest
{
  ProtobufCMessage base;
  char *src;
  char *dst;
  Nebula__Address *dialog;
  protobuf_c_boolean has_body;
  ProtobufCBinaryData body;
};
#define NEBULA__DIALOG_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__dialog_request__descriptor) \
    , NULL, NULL, NULL, 0,{0,NULL} }


struct  _Nebula__DialogResponse
{
  ProtobufCMessage base;
  int32_t status;
  char *src;
  char *dst;
  Nebula__Address *dialog;
  protobuf_c_boolean has_body;
  ProtobufCBinaryData body;
};
#define NEBULA__DIALOG_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__dialog_response__descriptor) \
    , 0, NULL, NULL, NULL, 0,{0,NULL} }


/* Nebula__Param methods */
void   nebula__param__init
                     (Nebula__Param         *message);
size_t nebula__param__get_packed_size
                     (const Nebula__Param   *message);
size_t nebula__param__pack
                     (const Nebula__Param   *message,
                      uint8_t             *out);
size_t nebula__param__pack_to_buffer
                     (const Nebula__Param   *message,
                      ProtobufCBuffer     *buffer);
Nebula__Param *
       nebula__param__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__param__free_unpacked
                     (Nebula__Param *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AccountUpdateRequest methods */
void   nebula__account_update_request__init
                     (Nebula__AccountUpdateRequest         *message);
size_t nebula__account_update_request__get_packed_size
                     (const Nebula__AccountUpdateRequest   *message);
size_t nebula__account_update_request__pack
                     (const Nebula__AccountUpdateRequest   *message,
                      uint8_t             *out);
size_t nebula__account_update_request__pack_to_buffer
                     (const Nebula__AccountUpdateRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AccountUpdateRequest *
       nebula__account_update_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__account_update_request__free_unpacked
                     (Nebula__AccountUpdateRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AccountUpdateResponse methods */
void   nebula__account_update_response__init
                     (Nebula__AccountUpdateResponse         *message);
size_t nebula__account_update_response__get_packed_size
                     (const Nebula__AccountUpdateResponse   *message);
size_t nebula__account_update_response__pack
                     (const Nebula__AccountUpdateResponse   *message,
                      uint8_t             *out);
size_t nebula__account_update_response__pack_to_buffer
                     (const Nebula__AccountUpdateResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AccountUpdateResponse *
       nebula__account_update_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__account_update_response__free_unpacked
                     (Nebula__AccountUpdateResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AuthRequest methods */
void   nebula__auth_request__init
                     (Nebula__AuthRequest         *message);
size_t nebula__auth_request__get_packed_size
                     (const Nebula__AuthRequest   *message);
size_t nebula__auth_request__pack
                     (const Nebula__AuthRequest   *message,
                      uint8_t             *out);
size_t nebula__auth_request__pack_to_buffer
                     (const Nebula__AuthRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AuthRequest *
       nebula__auth_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__auth_request__free_unpacked
                     (Nebula__AuthRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AuthResponse methods */
void   nebula__auth_response__init
                     (Nebula__AuthResponse         *message);
size_t nebula__auth_response__get_packed_size
                     (const Nebula__AuthResponse   *message);
size_t nebula__auth_response__pack
                     (const Nebula__AuthResponse   *message,
                      uint8_t             *out);
size_t nebula__auth_response__pack_to_buffer
                     (const Nebula__AuthResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AuthResponse *
       nebula__auth_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__auth_response__free_unpacked
                     (Nebula__AuthResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__Message__Content methods */
void   nebula__message__content__init
                     (Nebula__Message__Content         *message);
/* Nebula__Message methods */
void   nebula__message__init
                     (Nebula__Message         *message);
size_t nebula__message__get_packed_size
                     (const Nebula__Message   *message);
size_t nebula__message__pack
                     (const Nebula__Message   *message,
                      uint8_t             *out);
size_t nebula__message__pack_to_buffer
                     (const Nebula__Message   *message,
                      ProtobufCBuffer     *buffer);
Nebula__Message *
       nebula__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__message__free_unpacked
                     (Nebula__Message *message,
                      ProtobufCAllocator *allocator);
/* Nebula__MessageSeq__Content methods */
void   nebula__message_seq__content__init
                     (Nebula__MessageSeq__Content         *message);
/* Nebula__MessageSeq methods */
void   nebula__message_seq__init
                     (Nebula__MessageSeq         *message);
size_t nebula__message_seq__get_packed_size
                     (const Nebula__MessageSeq   *message);
size_t nebula__message_seq__pack
                     (const Nebula__MessageSeq   *message,
                      uint8_t             *out);
size_t nebula__message_seq__pack_to_buffer
                     (const Nebula__MessageSeq   *message,
                      ProtobufCBuffer     *buffer);
Nebula__MessageSeq *
       nebula__message_seq__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__message_seq__free_unpacked
                     (Nebula__MessageSeq *message,
                      ProtobufCAllocator *allocator);
/* Nebula__MessageKievAck methods */
void   nebula__message_kiev_ack__init
                     (Nebula__MessageKievAck         *message);
size_t nebula__message_kiev_ack__get_packed_size
                     (const Nebula__MessageKievAck   *message);
size_t nebula__message_kiev_ack__pack
                     (const Nebula__MessageKievAck   *message,
                      uint8_t             *out);
size_t nebula__message_kiev_ack__pack_to_buffer
                     (const Nebula__MessageKievAck   *message,
                      ProtobufCBuffer     *buffer);
Nebula__MessageKievAck *
       nebula__message_kiev_ack__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__message_kiev_ack__free_unpacked
                     (Nebula__MessageKievAck *message,
                      ProtobufCAllocator *allocator);
/* Nebula__SubscribeRequest methods */
void   nebula__subscribe_request__init
                     (Nebula__SubscribeRequest         *message);
size_t nebula__subscribe_request__get_packed_size
                     (const Nebula__SubscribeRequest   *message);
size_t nebula__subscribe_request__pack
                     (const Nebula__SubscribeRequest   *message,
                      uint8_t             *out);
size_t nebula__subscribe_request__pack_to_buffer
                     (const Nebula__SubscribeRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__SubscribeRequest *
       nebula__subscribe_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__subscribe_request__free_unpacked
                     (Nebula__SubscribeRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__SubscribeResponse__Content methods */
void   nebula__subscribe_response__content__init
                     (Nebula__SubscribeResponse__Content         *message);
/* Nebula__SubscribeResponse methods */
void   nebula__subscribe_response__init
                     (Nebula__SubscribeResponse         *message);
size_t nebula__subscribe_response__get_packed_size
                     (const Nebula__SubscribeResponse   *message);
size_t nebula__subscribe_response__pack
                     (const Nebula__SubscribeResponse   *message,
                      uint8_t             *out);
size_t nebula__subscribe_response__pack_to_buffer
                     (const Nebula__SubscribeResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__SubscribeResponse *
       nebula__subscribe_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__subscribe_response__free_unpacked
                     (Nebula__SubscribeResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__NotifyBody methods */
void   nebula__notify_body__init
                     (Nebula__NotifyBody         *message);
size_t nebula__notify_body__get_packed_size
                     (const Nebula__NotifyBody   *message);
size_t nebula__notify_body__pack
                     (const Nebula__NotifyBody   *message,
                      uint8_t             *out);
size_t nebula__notify_body__pack_to_buffer
                     (const Nebula__NotifyBody   *message,
                      ProtobufCBuffer     *buffer);
Nebula__NotifyBody *
       nebula__notify_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__notify_body__free_unpacked
                     (Nebula__NotifyBody *message,
                      ProtobufCAllocator *allocator);
/* Nebula__SmsRequest__FileInfo methods */
void   nebula__sms_request__file_info__init
                     (Nebula__SmsRequest__FileInfo         *message);
/* Nebula__SmsRequest methods */
void   nebula__sms_request__init
                     (Nebula__SmsRequest         *message);
size_t nebula__sms_request__get_packed_size
                     (const Nebula__SmsRequest   *message);
size_t nebula__sms_request__pack
                     (const Nebula__SmsRequest   *message,
                      uint8_t             *out);
size_t nebula__sms_request__pack_to_buffer
                     (const Nebula__SmsRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__SmsRequest *
       nebula__sms_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__sms_request__free_unpacked
                     (Nebula__SmsRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__SmsResponse methods */
void   nebula__sms_response__init
                     (Nebula__SmsResponse         *message);
size_t nebula__sms_response__get_packed_size
                     (const Nebula__SmsResponse   *message);
size_t nebula__sms_response__pack
                     (const Nebula__SmsResponse   *message,
                      uint8_t             *out);
size_t nebula__sms_response__pack_to_buffer
                     (const Nebula__SmsResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__SmsResponse *
       nebula__sms_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__sms_response__free_unpacked
                     (Nebula__SmsResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__PresenceNotify__Content methods */
void   nebula__presence_notify__content__init
                     (Nebula__PresenceNotify__Content         *message);
/* Nebula__PresenceNotify methods */
void   nebula__presence_notify__init
                     (Nebula__PresenceNotify         *message);
size_t nebula__presence_notify__get_packed_size
                     (const Nebula__PresenceNotify   *message);
size_t nebula__presence_notify__pack
                     (const Nebula__PresenceNotify   *message,
                      uint8_t             *out);
size_t nebula__presence_notify__pack_to_buffer
                     (const Nebula__PresenceNotify   *message,
                      ProtobufCBuffer     *buffer);
Nebula__PresenceNotify *
       nebula__presence_notify__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__presence_notify__free_unpacked
                     (Nebula__PresenceNotify *message,
                      ProtobufCAllocator *allocator);
/* Nebula__PresenceRequest methods */
void   nebula__presence_request__init
                     (Nebula__PresenceRequest         *message);
size_t nebula__presence_request__get_packed_size
                     (const Nebula__PresenceRequest   *message);
size_t nebula__presence_request__pack
                     (const Nebula__PresenceRequest   *message,
                      uint8_t             *out);
size_t nebula__presence_request__pack_to_buffer
                     (const Nebula__PresenceRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__PresenceRequest *
       nebula__presence_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__presence_request__free_unpacked
                     (Nebula__PresenceRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__PresenceResponse methods */
void   nebula__presence_response__init
                     (Nebula__PresenceResponse         *message);
size_t nebula__presence_response__get_packed_size
                     (const Nebula__PresenceResponse   *message);
size_t nebula__presence_response__pack
                     (const Nebula__PresenceResponse   *message,
                      uint8_t             *out);
size_t nebula__presence_response__pack_to_buffer
                     (const Nebula__PresenceResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__PresenceResponse *
       nebula__presence_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__presence_response__free_unpacked
                     (Nebula__PresenceResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AccountStatusRequest methods */
void   nebula__account_status_request__init
                     (Nebula__AccountStatusRequest         *message);
size_t nebula__account_status_request__get_packed_size
                     (const Nebula__AccountStatusRequest   *message);
size_t nebula__account_status_request__pack
                     (const Nebula__AccountStatusRequest   *message,
                      uint8_t             *out);
size_t nebula__account_status_request__pack_to_buffer
                     (const Nebula__AccountStatusRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AccountStatusRequest *
       nebula__account_status_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__account_status_request__free_unpacked
                     (Nebula__AccountStatusRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__AccountStatusResponse__AccountStatus methods */
void   nebula__account_status_response__account_status__init
                     (Nebula__AccountStatusResponse__AccountStatus         *message);
/* Nebula__AccountStatusResponse methods */
void   nebula__account_status_response__init
                     (Nebula__AccountStatusResponse         *message);
size_t nebula__account_status_response__get_packed_size
                     (const Nebula__AccountStatusResponse   *message);
size_t nebula__account_status_response__pack
                     (const Nebula__AccountStatusResponse   *message,
                      uint8_t             *out);
size_t nebula__account_status_response__pack_to_buffer
                     (const Nebula__AccountStatusResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__AccountStatusResponse *
       nebula__account_status_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__account_status_response__free_unpacked
                     (Nebula__AccountStatusResponse *message,
                      ProtobufCAllocator *allocator);
/* Nebula__Address methods */
void   nebula__address__init
                     (Nebula__Address         *message);
size_t nebula__address__get_packed_size
                     (const Nebula__Address   *message);
size_t nebula__address__pack
                     (const Nebula__Address   *message,
                      uint8_t             *out);
size_t nebula__address__pack_to_buffer
                     (const Nebula__Address   *message,
                      ProtobufCBuffer     *buffer);
Nebula__Address *
       nebula__address__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__address__free_unpacked
                     (Nebula__Address *message,
                      ProtobufCAllocator *allocator);
/* Nebula__DialogRequest methods */
void   nebula__dialog_request__init
                     (Nebula__DialogRequest         *message);
size_t nebula__dialog_request__get_packed_size
                     (const Nebula__DialogRequest   *message);
size_t nebula__dialog_request__pack
                     (const Nebula__DialogRequest   *message,
                      uint8_t             *out);
size_t nebula__dialog_request__pack_to_buffer
                     (const Nebula__DialogRequest   *message,
                      ProtobufCBuffer     *buffer);
Nebula__DialogRequest *
       nebula__dialog_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__dialog_request__free_unpacked
                     (Nebula__DialogRequest *message,
                      ProtobufCAllocator *allocator);
/* Nebula__DialogResponse methods */
void   nebula__dialog_response__init
                     (Nebula__DialogResponse         *message);
size_t nebula__dialog_response__get_packed_size
                     (const Nebula__DialogResponse   *message);
size_t nebula__dialog_response__pack
                     (const Nebula__DialogResponse   *message,
                      uint8_t             *out);
size_t nebula__dialog_response__pack_to_buffer
                     (const Nebula__DialogResponse   *message,
                      ProtobufCBuffer     *buffer);
Nebula__DialogResponse *
       nebula__dialog_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__dialog_response__free_unpacked
                     (Nebula__DialogResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Nebula__Param_Closure)
                 (const Nebula__Param *message,
                  void *closure_data);
typedef void (*Nebula__AccountUpdateRequest_Closure)
                 (const Nebula__AccountUpdateRequest *message,
                  void *closure_data);
typedef void (*Nebula__AccountUpdateResponse_Closure)
                 (const Nebula__AccountUpdateResponse *message,
                  void *closure_data);
typedef void (*Nebula__AuthRequest_Closure)
                 (const Nebula__AuthRequest *message,
                  void *closure_data);
typedef void (*Nebula__AuthResponse_Closure)
                 (const Nebula__AuthResponse *message,
                  void *closure_data);
typedef void (*Nebula__Message__Content_Closure)
                 (const Nebula__Message__Content *message,
                  void *closure_data);
typedef void (*Nebula__Message_Closure)
                 (const Nebula__Message *message,
                  void *closure_data);
typedef void (*Nebula__MessageSeq__Content_Closure)
                 (const Nebula__MessageSeq__Content *message,
                  void *closure_data);
typedef void (*Nebula__MessageSeq_Closure)
                 (const Nebula__MessageSeq *message,
                  void *closure_data);
typedef void (*Nebula__MessageKievAck_Closure)
                 (const Nebula__MessageKievAck *message,
                  void *closure_data);
typedef void (*Nebula__SubscribeRequest_Closure)
                 (const Nebula__SubscribeRequest *message,
                  void *closure_data);
typedef void (*Nebula__SubscribeResponse__Content_Closure)
                 (const Nebula__SubscribeResponse__Content *message,
                  void *closure_data);
typedef void (*Nebula__SubscribeResponse_Closure)
                 (const Nebula__SubscribeResponse *message,
                  void *closure_data);
typedef void (*Nebula__NotifyBody_Closure)
                 (const Nebula__NotifyBody *message,
                  void *closure_data);
typedef void (*Nebula__SmsRequest__FileInfo_Closure)
                 (const Nebula__SmsRequest__FileInfo *message,
                  void *closure_data);
typedef void (*Nebula__SmsRequest_Closure)
                 (const Nebula__SmsRequest *message,
                  void *closure_data);
typedef void (*Nebula__SmsResponse_Closure)
                 (const Nebula__SmsResponse *message,
                  void *closure_data);
typedef void (*Nebula__PresenceNotify__Content_Closure)
                 (const Nebula__PresenceNotify__Content *message,
                  void *closure_data);
typedef void (*Nebula__PresenceNotify_Closure)
                 (const Nebula__PresenceNotify *message,
                  void *closure_data);
typedef void (*Nebula__PresenceRequest_Closure)
                 (const Nebula__PresenceRequest *message,
                  void *closure_data);
typedef void (*Nebula__PresenceResponse_Closure)
                 (const Nebula__PresenceResponse *message,
                  void *closure_data);
typedef void (*Nebula__AccountStatusRequest_Closure)
                 (const Nebula__AccountStatusRequest *message,
                  void *closure_data);
typedef void (*Nebula__AccountStatusResponse__AccountStatus_Closure)
                 (const Nebula__AccountStatusResponse__AccountStatus *message,
                  void *closure_data);
typedef void (*Nebula__AccountStatusResponse_Closure)
                 (const Nebula__AccountStatusResponse *message,
                  void *closure_data);
typedef void (*Nebula__Address_Closure)
                 (const Nebula__Address *message,
                  void *closure_data);
typedef void (*Nebula__DialogRequest_Closure)
                 (const Nebula__DialogRequest *message,
                  void *closure_data);
typedef void (*Nebula__DialogResponse_Closure)
                 (const Nebula__DialogResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    nebula__presence_type__descriptor;
extern const ProtobufCMessageDescriptor nebula__param__descriptor;
extern const ProtobufCMessageDescriptor nebula__account_update_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__account_update_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__auth_request__descriptor;
extern const ProtobufCEnumDescriptor    nebula__auth_request__algorithm__descriptor;
extern const ProtobufCMessageDescriptor nebula__auth_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__message__descriptor;
extern const ProtobufCMessageDescriptor nebula__message__content__descriptor;
extern const ProtobufCEnumDescriptor    nebula__message__content__msg_type__descriptor;
extern const ProtobufCEnumDescriptor    nebula__message__flag__descriptor;
extern const ProtobufCMessageDescriptor nebula__message_seq__descriptor;
extern const ProtobufCMessageDescriptor nebula__message_seq__content__descriptor;
extern const ProtobufCMessageDescriptor nebula__message_kiev_ack__descriptor;
extern const ProtobufCMessageDescriptor nebula__subscribe_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__subscribe_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__subscribe_response__content__descriptor;
extern const ProtobufCMessageDescriptor nebula__notify_body__descriptor;
extern const ProtobufCMessageDescriptor nebula__sms_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__sms_request__file_info__descriptor;
extern const ProtobufCEnumDescriptor    nebula__sms_request__sms_type__descriptor;
extern const ProtobufCEnumDescriptor    nebula__sms_request__report_type__descriptor;
extern const ProtobufCMessageDescriptor nebula__sms_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__presence_notify__descriptor;
extern const ProtobufCMessageDescriptor nebula__presence_notify__content__descriptor;
extern const ProtobufCMessageDescriptor nebula__presence_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__presence_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__account_status_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__account_status_response__descriptor;
extern const ProtobufCMessageDescriptor nebula__account_status_response__account_status__descriptor;
extern const ProtobufCMessageDescriptor nebula__address__descriptor;
extern const ProtobufCMessageDescriptor nebula__dialog_request__descriptor;
extern const ProtobufCMessageDescriptor nebula__dialog_response__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_message_2eproto__INCLUDED */