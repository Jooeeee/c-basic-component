/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: task.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "task.pb-c.h"
void   name__init
                     (Name         *message)
{
  static const Name init_value = NAME__INIT;
  *message = init_value;
}
size_t name__get_packed_size
                     (const Name *message)
{
  assert(message->base.descriptor == &name__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t name__pack
                     (const Name *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &name__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t name__pack_to_buffer
                     (const Name *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &name__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Name *
       name__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Name *)
     protobuf_c_message_unpack (&name__descriptor,
                                allocator, len, data);
}
void   name__free_unpacked
                     (Name *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &name__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor name__field_descriptors[1] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Name, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned name__field_indices_by_name[] = {
  0,   /* field[0] = name */
};
static const ProtobufCIntRange name__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor name__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Name",
  "Name",
  "Name",
  "",
  sizeof(Name),
  1,
  name__field_descriptors,
  name__field_indices_by_name,
  1,  name__number_ranges,
  (ProtobufCMessageInit) name__init,
  NULL,NULL,NULL    /* reserved[123] */
};
