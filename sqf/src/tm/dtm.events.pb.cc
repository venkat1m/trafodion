// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "dtm.events.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace dtm {

namespace {

const ::google::protobuf::Descriptor* events_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  events_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dtm_2eevents_2eproto() {
  protobuf_AddDesc_dtm_2eevents_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dtm.events.proto");
  GOOGLE_CHECK(file != NULL);
  events_descriptor_ = file->message_type(0);
  static const int events_offsets_[23] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, rmid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, dtmid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, seq_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, msgid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, xa_error_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, pool_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, pool_elems_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, msg_retries_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, pool_high_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, pool_low_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, pool_max_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, tx_state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, data1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, data2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, string1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, node_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, msgid2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, tm_event_msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, data4_),
  };
  events_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      events_descriptor_,
      events::default_instance_,
      events_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(events, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(events));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dtm_2eevents_2eproto);
}

void protobuf_RegisterTypes() {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    events_descriptor_, &events::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dtm_2eevents_2eproto() {
  delete events::default_instance_;
  delete events_reflection_;
}

void protobuf_AddDesc_dtm_2eevents_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::common::protobuf_AddDesc_common_2eevent_5fheader_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020dtm.events.proto\022\003dtm\032\031common.event_he"
    "ader.proto\"\246\003\n\006events\022$\n\006header\030\001 \002(\0132\024."
    "common.event_header\022\022\n\nerror_code\030\002 \001(\005\022"
    "\014\n\004rmid\030\003 \001(\005\022\r\n\005dtmid\030\004 \001(\005\022\017\n\007seq_num\030"
    "\005 \001(\005\022\r\n\005msgid\030\006 \001(\005\022\020\n\010xa_error\030\007 \001(\003\022\021"
    "\n\tpool_size\030\010 \001(\005\022\022\n\npool_elems\030\t \001(\005\022\023\n"
    "\013msg_retries\030\n \001(\005\022\021\n\tpool_high\030\013 \001(\005\022\020\n"
    "\010pool_low\030\014 \001(\005\022\020\n\010pool_max\030\r \001(\005\022\020\n\010tx_"
    "state\030\016 \001(\005\022\014\n\004data\030\017 \001(\005\022\r\n\005data1\030\020 \001(\005"
    "\022\r\n\005data2\030\021 \001(\003\022\017\n\007string1\030\022 \001(\t\022\014\n\004node"
    "\030\023 \001(\005\022\016\n\006msgid2\030\024 \001(\005\022\016\n\006offset\030\025 \001(\005\022\024"
    "\n\014tm_event_msg\030\026 \001(\005\022\r\n\005data4\030\027 \001(\r", 475);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dtm.events.proto", &protobuf_RegisterTypes);
  events::default_instance_ = new events();
  events::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dtm_2eevents_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dtm_2eevents_2eproto {
  StaticDescriptorInitializer_dtm_2eevents_2eproto() {
    protobuf_AddDesc_dtm_2eevents_2eproto();
  }
} static_descriptor_initializer_dtm_2eevents_2eproto_;


// ===================================================================

const ::std::string events::_default_string1_;
#ifndef _MSC_VER
const int events::kHeaderFieldNumber;
const int events::kErrorCodeFieldNumber;
const int events::kRmidFieldNumber;
const int events::kDtmidFieldNumber;
const int events::kSeqNumFieldNumber;
const int events::kMsgidFieldNumber;
const int events::kXaErrorFieldNumber;
const int events::kPoolSizeFieldNumber;
const int events::kPoolElemsFieldNumber;
const int events::kMsgRetriesFieldNumber;
const int events::kPoolHighFieldNumber;
const int events::kPoolLowFieldNumber;
const int events::kPoolMaxFieldNumber;
const int events::kTxStateFieldNumber;
const int events::kDataFieldNumber;
const int events::kData1FieldNumber;
const int events::kData2FieldNumber;
const int events::kString1FieldNumber;
const int events::kNodeFieldNumber;
const int events::kMsgid2FieldNumber;
const int events::kOffsetFieldNumber;
const int events::kTmEventMsgFieldNumber;
const int events::kData4FieldNumber;
#endif  // !_MSC_VER

events::events()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void events::InitAsDefaultInstance() {  header_ = const_cast< ::common::event_header*>(&::common::event_header::default_instance());
}

events::events(const events& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void events::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  error_code_ = 0;
  rmid_ = 0;
  dtmid_ = 0;
  seq_num_ = 0;
  msgid_ = 0;
  xa_error_ = GOOGLE_LONGLONG(0);
  pool_size_ = 0;
  pool_elems_ = 0;
  msg_retries_ = 0;
  pool_high_ = 0;
  pool_low_ = 0;
  pool_max_ = 0;
  tx_state_ = 0;
  data_ = 0;
  data1_ = 0;
  data2_ = GOOGLE_LONGLONG(0);
  string1_ = const_cast< ::std::string*>(&_default_string1_);
  node_ = 0;
  msgid2_ = 0;
  offset_ = 0;
  tm_event_msg_ = 0;
  data4_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

events::~events() {
  SharedDtor();
}

void events::SharedDtor() {
  if (string1_ != &_default_string1_) {
    delete string1_;
  }
  if (this != default_instance_) {
    delete header_;
  }
}

const ::google::protobuf::Descriptor* events::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return events_descriptor_;
}

const events& events::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dtm_2eevents_2eproto();  return *default_instance_;
}

events* events::default_instance_ = NULL;

events* events::New() const {
  return new events;
}

void events::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (header_ != NULL) header_->::common::event_header::Clear();
    }
    error_code_ = 0;
    rmid_ = 0;
    dtmid_ = 0;
    seq_num_ = 0;
    msgid_ = 0;
    xa_error_ = GOOGLE_LONGLONG(0);
    pool_size_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    pool_elems_ = 0;
    msg_retries_ = 0;
    pool_high_ = 0;
    pool_low_ = 0;
    pool_max_ = 0;
    tx_state_ = 0;
    data_ = 0;
    data1_ = 0;
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    data2_ = GOOGLE_LONGLONG(0);
    if (_has_bit(17)) {
      if (string1_ != &_default_string1_) {
        string1_->clear();
      }
    }
    node_ = 0;
    msgid2_ = 0;
    offset_ = 0;
    tm_event_msg_ = 0;
    data4_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool events::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // required .common.event_header header = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadMessageNoVirtual(
             input, mutable_header()));
        if (input->ExpectTag(16)) goto parse_error_code;
        break;
      }
      
      // optional int32 error_code = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_error_code:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &error_code_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_rmid;
        break;
      }
      
      // optional int32 rmid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_rmid:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &rmid_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_dtmid;
        break;
      }
      
      // optional int32 dtmid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_dtmid:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &dtmid_));
        _set_bit(3);
        if (input->ExpectTag(40)) goto parse_seq_num;
        break;
      }
      
      // optional int32 seq_num = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_seq_num:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &seq_num_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_msgid;
        break;
      }
      
      // optional int32 msgid = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_msgid:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &msgid_));
        _set_bit(5);
        if (input->ExpectTag(56)) goto parse_xa_error;
        break;
      }
      
      // optional int64 xa_error = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_xa_error:
        DO_(::google::protobuf::internal::WireFormat::ReadInt64(
              input, &xa_error_));
        _set_bit(6);
        if (input->ExpectTag(64)) goto parse_pool_size;
        break;
      }
      
      // optional int32 pool_size = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_pool_size:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &pool_size_));
        _set_bit(7);
        if (input->ExpectTag(72)) goto parse_pool_elems;
        break;
      }
      
      // optional int32 pool_elems = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_pool_elems:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &pool_elems_));
        _set_bit(8);
        if (input->ExpectTag(80)) goto parse_msg_retries;
        break;
      }
      
      // optional int32 msg_retries = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_msg_retries:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &msg_retries_));
        _set_bit(9);
        if (input->ExpectTag(88)) goto parse_pool_high;
        break;
      }
      
      // optional int32 pool_high = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_pool_high:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &pool_high_));
        _set_bit(10);
        if (input->ExpectTag(96)) goto parse_pool_low;
        break;
      }
      
      // optional int32 pool_low = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_pool_low:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &pool_low_));
        _set_bit(11);
        if (input->ExpectTag(104)) goto parse_pool_max;
        break;
      }
      
      // optional int32 pool_max = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_pool_max:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &pool_max_));
        _set_bit(12);
        if (input->ExpectTag(112)) goto parse_tx_state;
        break;
      }
      
      // optional int32 tx_state = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_tx_state:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &tx_state_));
        _set_bit(13);
        if (input->ExpectTag(120)) goto parse_data;
        break;
      }
      
      // optional int32 data = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_data:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &data_));
        _set_bit(14);
        if (input->ExpectTag(128)) goto parse_data1;
        break;
      }
      
      // optional int32 data1 = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_data1:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &data1_));
        _set_bit(15);
        if (input->ExpectTag(136)) goto parse_data2;
        break;
      }
      
      // optional int64 data2 = 17;
      case 17: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_data2:
        DO_(::google::protobuf::internal::WireFormat::ReadInt64(
              input, &data2_));
        _set_bit(16);
        if (input->ExpectTag(146)) goto parse_string1;
        break;
      }
      
      // optional string string1 = 18;
      case 18: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_string1:
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_string1()));
        if (input->ExpectTag(152)) goto parse_node;
        break;
      }
      
      // optional int32 node = 19;
      case 19: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_node:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &node_));
        _set_bit(18);
        if (input->ExpectTag(160)) goto parse_msgid2;
        break;
      }
      
      // optional int32 msgid2 = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_msgid2:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &msgid2_));
        _set_bit(19);
        if (input->ExpectTag(168)) goto parse_offset;
        break;
      }
      
      // optional int32 offset = 21;
      case 21: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_offset:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &offset_));
        _set_bit(20);
        if (input->ExpectTag(176)) goto parse_tm_event_msg;
        break;
      }
      
      // optional int32 tm_event_msg = 22;
      case 22: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_tm_event_msg:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &tm_event_msg_));
        _set_bit(21);
        if (input->ExpectTag(184)) goto parse_data4;
        break;
      }
      
      // optional uint32 data4 = 23;
      case 23: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_data4:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &data4_));
        _set_bit(22);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void events::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    events::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required .common.event_header header = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteMessageNoVirtual(1, this->header(), output);
  }
  
  // optional int32 error_code = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(2, this->error_code(), output);
  }
  
  // optional int32 rmid = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(3, this->rmid(), output);
  }
  
  // optional int32 dtmid = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(4, this->dtmid(), output);
  }
  
  // optional int32 seq_num = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(5, this->seq_num(), output);
  }
  
  // optional int32 msgid = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(6, this->msgid(), output);
  }
  
  // optional int64 xa_error = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormat::WriteInt64(7, this->xa_error(), output);
  }
  
  // optional int32 pool_size = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(8, this->pool_size(), output);
  }
  
  // optional int32 pool_elems = 9;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(9, this->pool_elems(), output);
  }
  
  // optional int32 msg_retries = 10;
  if (_has_bit(9)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(10, this->msg_retries(), output);
  }
  
  // optional int32 pool_high = 11;
  if (_has_bit(10)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(11, this->pool_high(), output);
  }
  
  // optional int32 pool_low = 12;
  if (_has_bit(11)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(12, this->pool_low(), output);
  }
  
  // optional int32 pool_max = 13;
  if (_has_bit(12)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(13, this->pool_max(), output);
  }
  
  // optional int32 tx_state = 14;
  if (_has_bit(13)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(14, this->tx_state(), output);
  }
  
  // optional int32 data = 15;
  if (_has_bit(14)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(15, this->data(), output);
  }
  
  // optional int32 data1 = 16;
  if (_has_bit(15)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(16, this->data1(), output);
  }
  
  // optional int64 data2 = 17;
  if (_has_bit(16)) {
    ::google::protobuf::internal::WireFormat::WriteInt64(17, this->data2(), output);
  }
  
  // optional string string1 = 18;
  if (_has_bit(17)) {
    ::google::protobuf::internal::WireFormat::WriteString(18, this->string1(), output);
  }
  
  // optional int32 node = 19;
  if (_has_bit(18)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(19, this->node(), output);
  }
  
  // optional int32 msgid2 = 20;
  if (_has_bit(19)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(20, this->msgid2(), output);
  }
  
  // optional int32 offset = 21;
  if (_has_bit(20)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(21, this->offset(), output);
  }
  
  // optional int32 tm_event_msg = 22;
  if (_has_bit(21)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(22, this->tm_event_msg(), output);
  }
  
  // optional uint32 data4 = 23;
  if (_has_bit(22)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(23, this->data4(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* events::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .common.event_header header = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteMessageNoVirtualToArray(1, this->header(), target);
  }
  
  // optional int32 error_code = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(2, this->error_code(), target);
  }
  
  // optional int32 rmid = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(3, this->rmid(), target);
  }
  
  // optional int32 dtmid = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(4, this->dtmid(), target);
  }
  
  // optional int32 seq_num = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(5, this->seq_num(), target);
  }
  
  // optional int32 msgid = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(6, this->msgid(), target);
  }
  
  // optional int64 xa_error = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt64ToArray(7, this->xa_error(), target);
  }
  
  // optional int32 pool_size = 8;
  if (_has_bit(7)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(8, this->pool_size(), target);
  }
  
  // optional int32 pool_elems = 9;
  if (_has_bit(8)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(9, this->pool_elems(), target);
  }
  
  // optional int32 msg_retries = 10;
  if (_has_bit(9)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(10, this->msg_retries(), target);
  }
  
  // optional int32 pool_high = 11;
  if (_has_bit(10)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(11, this->pool_high(), target);
  }
  
  // optional int32 pool_low = 12;
  if (_has_bit(11)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(12, this->pool_low(), target);
  }
  
  // optional int32 pool_max = 13;
  if (_has_bit(12)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(13, this->pool_max(), target);
  }
  
  // optional int32 tx_state = 14;
  if (_has_bit(13)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(14, this->tx_state(), target);
  }
  
  // optional int32 data = 15;
  if (_has_bit(14)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(15, this->data(), target);
  }
  
  // optional int32 data1 = 16;
  if (_has_bit(15)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(16, this->data1(), target);
  }
  
  // optional int64 data2 = 17;
  if (_has_bit(16)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt64ToArray(17, this->data2(), target);
  }
  
  // optional string string1 = 18;
  if (_has_bit(17)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(18, this->string1(), target);
  }
  
  // optional int32 node = 19;
  if (_has_bit(18)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(19, this->node(), target);
  }
  
  // optional int32 msgid2 = 20;
  if (_has_bit(19)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(20, this->msgid2(), target);
  }
  
  // optional int32 offset = 21;
  if (_has_bit(20)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(21, this->offset(), target);
  }
  
  // optional int32 tm_event_msg = 22;
  if (_has_bit(21)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(22, this->tm_event_msg(), target);
  }
  
  // optional uint32 data4 = 23;
  if (_has_bit(22)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(23, this->data4(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int events::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .common.event_header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::MessageSizeNoVirtual(
          this->header());
    }
    
    // optional int32 error_code = 2;
    if (has_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->error_code());
    }
    
    // optional int32 rmid = 3;
    if (has_rmid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->rmid());
    }
    
    // optional int32 dtmid = 4;
    if (has_dtmid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->dtmid());
    }
    
    // optional int32 seq_num = 5;
    if (has_seq_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->seq_num());
    }
    
    // optional int32 msgid = 6;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->msgid());
    }
    
    // optional int64 xa_error = 7;
    if (has_xa_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int64Size(
          this->xa_error());
    }
    
    // optional int32 pool_size = 8;
    if (has_pool_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->pool_size());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 pool_elems = 9;
    if (has_pool_elems()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->pool_elems());
    }
    
    // optional int32 msg_retries = 10;
    if (has_msg_retries()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->msg_retries());
    }
    
    // optional int32 pool_high = 11;
    if (has_pool_high()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->pool_high());
    }
    
    // optional int32 pool_low = 12;
    if (has_pool_low()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->pool_low());
    }
    
    // optional int32 pool_max = 13;
    if (has_pool_max()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->pool_max());
    }
    
    // optional int32 tx_state = 14;
    if (has_tx_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->tx_state());
    }
    
    // optional int32 data = 15;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->data());
    }
    
    // optional int32 data1 = 16;
    if (has_data1()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->data1());
    }
    
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // optional int64 data2 = 17;
    if (has_data2()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int64Size(
          this->data2());
    }
    
    // optional string string1 = 18;
    if (has_string1()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::StringSize(this->string1());
    }
    
    // optional int32 node = 19;
    if (has_node()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->node());
    }
    
    // optional int32 msgid2 = 20;
    if (has_msgid2()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->msgid2());
    }
    
    // optional int32 offset = 21;
    if (has_offset()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->offset());
    }
    
    // optional int32 tm_event_msg = 22;
    if (has_tm_event_msg()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->tm_event_msg());
    }
    
    // optional uint32 data4 = 23;
    if (has_data4()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->data4());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void events::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const events* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const events*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void events::MergeFrom(const events& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_header()->::common::event_header::MergeFrom(from.header());
    }
    if (from._has_bit(1)) {
      set_error_code(from.error_code());
    }
    if (from._has_bit(2)) {
      set_rmid(from.rmid());
    }
    if (from._has_bit(3)) {
      set_dtmid(from.dtmid());
    }
    if (from._has_bit(4)) {
      set_seq_num(from.seq_num());
    }
    if (from._has_bit(5)) {
      set_msgid(from.msgid());
    }
    if (from._has_bit(6)) {
      set_xa_error(from.xa_error());
    }
    if (from._has_bit(7)) {
      set_pool_size(from.pool_size());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from._has_bit(8)) {
      set_pool_elems(from.pool_elems());
    }
    if (from._has_bit(9)) {
      set_msg_retries(from.msg_retries());
    }
    if (from._has_bit(10)) {
      set_pool_high(from.pool_high());
    }
    if (from._has_bit(11)) {
      set_pool_low(from.pool_low());
    }
    if (from._has_bit(12)) {
      set_pool_max(from.pool_max());
    }
    if (from._has_bit(13)) {
      set_tx_state(from.tx_state());
    }
    if (from._has_bit(14)) {
      set_data(from.data());
    }
    if (from._has_bit(15)) {
      set_data1(from.data1());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from._has_bit(16)) {
      set_data2(from.data2());
    }
    if (from._has_bit(17)) {
      set_string1(from.string1());
    }
    if (from._has_bit(18)) {
      set_node(from.node());
    }
    if (from._has_bit(19)) {
      set_msgid2(from.msgid2());
    }
    if (from._has_bit(20)) {
      set_offset(from.offset());
    }
    if (from._has_bit(21)) {
      set_tm_event_msg(from.tm_event_msg());
    }
    if (from._has_bit(22)) {
      set_data4(from.data4());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void events::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void events::CopyFrom(const events& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void events::Swap(events* other) {
  if (other != this) {
    std::swap(header_, other->header_);
    std::swap(error_code_, other->error_code_);
    std::swap(rmid_, other->rmid_);
    std::swap(dtmid_, other->dtmid_);
    std::swap(seq_num_, other->seq_num_);
    std::swap(msgid_, other->msgid_);
    std::swap(xa_error_, other->xa_error_);
    std::swap(pool_size_, other->pool_size_);
    std::swap(pool_elems_, other->pool_elems_);
    std::swap(msg_retries_, other->msg_retries_);
    std::swap(pool_high_, other->pool_high_);
    std::swap(pool_low_, other->pool_low_);
    std::swap(pool_max_, other->pool_max_);
    std::swap(tx_state_, other->tx_state_);
    std::swap(data_, other->data_);
    std::swap(data1_, other->data1_);
    std::swap(data2_, other->data2_);
    std::swap(string1_, other->string1_);
    std::swap(node_, other->node_);
    std::swap(msgid2_, other->msgid2_);
    std::swap(offset_, other->offset_);
    std::swap(tm_event_msg_, other->tm_event_msg_);
    std::swap(data4_, other->data4_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool events::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_header()) {
    if (!this->header().IsInitialized()) return false;
  }
  return true;
}

const ::google::protobuf::Descriptor* events::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* events::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return events_reflection_;
}

}  // namespace dtm