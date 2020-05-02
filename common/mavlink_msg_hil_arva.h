#pragma once
// MESSAGE HIL_ARVA PACKING

#define MAVLINK_MSG_ID_HIL_ARVA 150

MAVPACKED(
typedef struct __mavlink_hil_arva_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.*/
 float arva_val; /*<   Arva value.*/
}) mavlink_hil_arva_t;

#define MAVLINK_MSG_ID_HIL_ARVA_LEN 12
#define MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN 12
#define MAVLINK_MSG_ID_150_LEN 12
#define MAVLINK_MSG_ID_150_MIN_LEN 12

#define MAVLINK_MSG_ID_HIL_ARVA_CRC 139
#define MAVLINK_MSG_ID_150_CRC 139



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_ARVA { \
    150, \
    "HIL_ARVA", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_arva_t, time_usec) }, \
         { "arva_val", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hil_arva_t, arva_val) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_ARVA { \
    "HIL_ARVA", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_arva_t, time_usec) }, \
         { "arva_val", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hil_arva_t, arva_val) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_arva message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
 * @param arva_val   Arva value.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_arva_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float arva_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_ARVA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, arva_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_ARVA_LEN);
#else
    mavlink_hil_arva_t packet;
    packet.time_usec = time_usec;
    packet.arva_val = arva_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_ARVA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_ARVA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
}

/**
 * @brief Pack a hil_arva message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
 * @param arva_val   Arva value.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_arva_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float arva_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_ARVA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, arva_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_ARVA_LEN);
#else
    mavlink_hil_arva_t packet;
    packet.time_usec = time_usec;
    packet.arva_val = arva_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_ARVA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_ARVA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
}

/**
 * @brief Encode a hil_arva struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_arva C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_arva_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_arva_t* hil_arva)
{
    return mavlink_msg_hil_arva_pack(system_id, component_id, msg, hil_arva->time_usec, hil_arva->arva_val);
}

/**
 * @brief Encode a hil_arva struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_arva C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_arva_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_arva_t* hil_arva)
{
    return mavlink_msg_hil_arva_pack_chan(system_id, component_id, chan, msg, hil_arva->time_usec, hil_arva->arva_val);
}

/**
 * @brief Send a hil_arva message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
 * @param arva_val   Arva value.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_arva_send(mavlink_channel_t chan, uint64_t time_usec, float arva_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_ARVA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, arva_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_ARVA, buf, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
#else
    mavlink_hil_arva_t packet;
    packet.time_usec = time_usec;
    packet.arva_val = arva_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_ARVA, (const char *)&packet, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
#endif
}

/**
 * @brief Send a hil_arva message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_arva_send_struct(mavlink_channel_t chan, const mavlink_hil_arva_t* hil_arva)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_arva_send(chan, hil_arva->time_usec, hil_arva->arva_val);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_ARVA, (const char *)hil_arva, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_ARVA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_arva_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float arva_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, arva_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_ARVA, buf, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
#else
    mavlink_hil_arva_t *packet = (mavlink_hil_arva_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->arva_val = arva_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_ARVA, (const char *)packet, MAVLINK_MSG_ID_HIL_ARVA_MIN_LEN, MAVLINK_MSG_ID_HIL_ARVA_LEN, MAVLINK_MSG_ID_HIL_ARVA_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_ARVA UNPACKING


/**
 * @brief Get field time_usec from hil_arva message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
 */
static inline uint64_t mavlink_msg_hil_arva_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field arva_val from hil_arva message
 *
 * @return   Arva value.
 */
static inline float mavlink_msg_hil_arva_get_arva_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a hil_arva message into a struct
 *
 * @param msg The message to decode
 * @param hil_arva C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_arva_decode(const mavlink_message_t* msg, mavlink_hil_arva_t* hil_arva)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_arva->time_usec = mavlink_msg_hil_arva_get_time_usec(msg);
    hil_arva->arva_val = mavlink_msg_hil_arva_get_arva_val(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_ARVA_LEN? msg->len : MAVLINK_MSG_ID_HIL_ARVA_LEN;
        memset(hil_arva, 0, MAVLINK_MSG_ID_HIL_ARVA_LEN);
    memcpy(hil_arva, _MAV_PAYLOAD(msg), len);
#endif
}
