/*
 * This file generated automatically from xinerama.xml by c_client.py.
 * Edit at your peril.
 */

#include <string.h>
#include <assert.h>
#include "xcbext.h"
#include "xinerama.h"
#include "xproto.h"

xcb_extension_t xcb_xinerama_id = { "XINERAMA", 0 };


/*****************************************************************************
 **
 ** void xcb_xinerama_screen_info_next
 **
 ** @param xcb_xinerama_screen_info_iterator_t *i
 ** @returns void
 **
 *****************************************************************************/

void
xcb_xinerama_screen_info_next (xcb_xinerama_screen_info_iterator_t *i  /**< */)
{
    --i->rem;
    ++i->data;
    i->index += sizeof(xcb_xinerama_screen_info_t);
}


/*****************************************************************************
 **
 ** xcb_generic_iterator_t xcb_xinerama_screen_info_end
 **
 ** @param xcb_xinerama_screen_info_iterator_t i
 ** @returns xcb_generic_iterator_t
 **
 *****************************************************************************/

xcb_generic_iterator_t
xcb_xinerama_screen_info_end (xcb_xinerama_screen_info_iterator_t i  /**< */)
{
    xcb_generic_iterator_t ret;
    ret.data = i.data + i.rem;
    ret.index = i.index + ((char *) ret.data - (char *) i.data);
    ret.rem = 0;
    return ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_version_cookie_t xcb_xinerama_query_version
 **
 ** @param xcb_connection_t *c
 ** @param uint8_t           major
 ** @param uint8_t           minor
 ** @returns xcb_xinerama_query_version_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_query_version_cookie_t
xcb_xinerama_query_version (xcb_connection_t *c  /**< */,
                            uint8_t           major  /**< */,
                            uint8_t           minor  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_QUERY_VERSION,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_query_version_cookie_t xcb_ret;
    xcb_xinerama_query_version_request_t xcb_out;

    xcb_out.major = major;
    xcb_out.minor = minor;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_version_cookie_t xcb_xinerama_query_version_unchecked
 **
 ** @param xcb_connection_t *c
 ** @param uint8_t           major
 ** @param uint8_t           minor
 ** @returns xcb_xinerama_query_version_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_query_version_cookie_t
xcb_xinerama_query_version_unchecked (xcb_connection_t *c  /**< */,
                                      uint8_t           major  /**< */,
                                      uint8_t           minor  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_QUERY_VERSION,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_query_version_cookie_t xcb_ret;
    xcb_xinerama_query_version_request_t xcb_out;

    xcb_out.major = major;
    xcb_out.minor = minor;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_version_reply_t * xcb_xinerama_query_version_reply
 **
 ** @param xcb_connection_t                     *c
 ** @param xcb_xinerama_query_version_cookie_t   cookie
 ** @param xcb_generic_error_t                 **e
 ** @returns xcb_xinerama_query_version_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_query_version_reply_t *
xcb_xinerama_query_version_reply (xcb_connection_t                     *c  /**< */,
                                  xcb_xinerama_query_version_cookie_t   cookie  /**< */,
                                  xcb_generic_error_t                 **e  /**< */)
{
    return (xcb_xinerama_query_version_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_state_cookie_t xcb_xinerama_get_state
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @returns xcb_xinerama_get_state_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_state_cookie_t
xcb_xinerama_get_state (xcb_connection_t *c  /**< */,
                        xcb_window_t      window  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_STATE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_state_cookie_t xcb_ret;
    xcb_xinerama_get_state_request_t xcb_out;

    xcb_out.window = window;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_state_cookie_t xcb_xinerama_get_state_unchecked
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @returns xcb_xinerama_get_state_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_state_cookie_t
xcb_xinerama_get_state_unchecked (xcb_connection_t *c  /**< */,
                                  xcb_window_t      window  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_STATE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_state_cookie_t xcb_ret;
    xcb_xinerama_get_state_request_t xcb_out;

    xcb_out.window = window;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_state_reply_t * xcb_xinerama_get_state_reply
 **
 ** @param xcb_connection_t                 *c
 ** @param xcb_xinerama_get_state_cookie_t   cookie
 ** @param xcb_generic_error_t             **e
 ** @returns xcb_xinerama_get_state_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_get_state_reply_t *
xcb_xinerama_get_state_reply (xcb_connection_t                 *c  /**< */,
                              xcb_xinerama_get_state_cookie_t   cookie  /**< */,
                              xcb_generic_error_t             **e  /**< */)
{
    return (xcb_xinerama_get_state_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_count_cookie_t xcb_xinerama_get_screen_count
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @returns xcb_xinerama_get_screen_count_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_screen_count_cookie_t
xcb_xinerama_get_screen_count (xcb_connection_t *c  /**< */,
                               xcb_window_t      window  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_SCREEN_COUNT,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_screen_count_cookie_t xcb_ret;
    xcb_xinerama_get_screen_count_request_t xcb_out;

    xcb_out.window = window;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_count_cookie_t xcb_xinerama_get_screen_count_unchecked
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @returns xcb_xinerama_get_screen_count_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_screen_count_cookie_t
xcb_xinerama_get_screen_count_unchecked (xcb_connection_t *c  /**< */,
                                         xcb_window_t      window  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_SCREEN_COUNT,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_screen_count_cookie_t xcb_ret;
    xcb_xinerama_get_screen_count_request_t xcb_out;

    xcb_out.window = window;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_count_reply_t * xcb_xinerama_get_screen_count_reply
 **
 ** @param xcb_connection_t                        *c
 ** @param xcb_xinerama_get_screen_count_cookie_t   cookie
 ** @param xcb_generic_error_t                    **e
 ** @returns xcb_xinerama_get_screen_count_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_get_screen_count_reply_t *
xcb_xinerama_get_screen_count_reply (xcb_connection_t                        *c  /**< */,
                                     xcb_xinerama_get_screen_count_cookie_t   cookie  /**< */,
                                     xcb_generic_error_t                    **e  /**< */)
{
    return (xcb_xinerama_get_screen_count_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_size_cookie_t xcb_xinerama_get_screen_size
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @param uint32_t          screen
 ** @returns xcb_xinerama_get_screen_size_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_screen_size_cookie_t
xcb_xinerama_get_screen_size (xcb_connection_t *c  /**< */,
                              xcb_window_t      window  /**< */,
                              uint32_t          screen  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_SCREEN_SIZE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_screen_size_cookie_t xcb_ret;
    xcb_xinerama_get_screen_size_request_t xcb_out;

    xcb_out.window = window;
    xcb_out.screen = screen;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_size_cookie_t xcb_xinerama_get_screen_size_unchecked
 **
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @param uint32_t          screen
 ** @returns xcb_xinerama_get_screen_size_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_get_screen_size_cookie_t
xcb_xinerama_get_screen_size_unchecked (xcb_connection_t *c  /**< */,
                                        xcb_window_t      window  /**< */,
                                        uint32_t          screen  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_GET_SCREEN_SIZE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_get_screen_size_cookie_t xcb_ret;
    xcb_xinerama_get_screen_size_request_t xcb_out;

    xcb_out.window = window;
    xcb_out.screen = screen;

    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_get_screen_size_reply_t * xcb_xinerama_get_screen_size_reply
 **
 ** @param xcb_connection_t                       *c
 ** @param xcb_xinerama_get_screen_size_cookie_t   cookie
 ** @param xcb_generic_error_t                   **e
 ** @returns xcb_xinerama_get_screen_size_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_get_screen_size_reply_t *
xcb_xinerama_get_screen_size_reply (xcb_connection_t                       *c  /**< */,
                                    xcb_xinerama_get_screen_size_cookie_t   cookie  /**< */,
                                    xcb_generic_error_t                   **e  /**< */)
{
    return (xcb_xinerama_get_screen_size_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}


/*****************************************************************************
 **
 ** xcb_xinerama_is_active_cookie_t xcb_xinerama_is_active
 **
 ** @param xcb_connection_t *c
 ** @returns xcb_xinerama_is_active_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_is_active_cookie_t
xcb_xinerama_is_active (xcb_connection_t *c  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_IS_ACTIVE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_is_active_cookie_t xcb_ret;
    xcb_xinerama_is_active_request_t xcb_out;


    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_is_active_cookie_t xcb_xinerama_is_active_unchecked
 **
 ** @param xcb_connection_t *c
 ** @returns xcb_xinerama_is_active_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_is_active_cookie_t
xcb_xinerama_is_active_unchecked (xcb_connection_t *c  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_IS_ACTIVE,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_is_active_cookie_t xcb_ret;
    xcb_xinerama_is_active_request_t xcb_out;


    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_is_active_reply_t * xcb_xinerama_is_active_reply
 **
 ** @param xcb_connection_t                 *c
 ** @param xcb_xinerama_is_active_cookie_t   cookie
 ** @param xcb_generic_error_t             **e
 ** @returns xcb_xinerama_is_active_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_is_active_reply_t *
xcb_xinerama_is_active_reply (xcb_connection_t                 *c  /**< */,
                              xcb_xinerama_is_active_cookie_t   cookie  /**< */,
                              xcb_generic_error_t             **e  /**< */)
{
    return (xcb_xinerama_is_active_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_screens_cookie_t xcb_xinerama_query_screens
 **
 ** @param xcb_connection_t *c
 ** @returns xcb_xinerama_query_screens_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_query_screens_cookie_t
xcb_xinerama_query_screens (xcb_connection_t *c  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_QUERY_SCREENS,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_query_screens_cookie_t xcb_ret;
    xcb_xinerama_query_screens_request_t xcb_out;


    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, XCB_REQUEST_CHECKED, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_screens_cookie_t xcb_xinerama_query_screens_unchecked
 **
 ** @param xcb_connection_t *c
 ** @returns xcb_xinerama_query_screens_cookie_t
 **
 *****************************************************************************/

xcb_xinerama_query_screens_cookie_t
xcb_xinerama_query_screens_unchecked (xcb_connection_t *c  /**< */)
{
    static const xcb_protocol_request_t xcb_req = {
        /* count */ 2,
        /* ext */ &xcb_xinerama_id,
        /* opcode */ XCB_XINERAMA_QUERY_SCREENS,
        /* isvoid */ 0
    };

    struct iovec xcb_parts[4];
    xcb_xinerama_query_screens_cookie_t xcb_ret;
    xcb_xinerama_query_screens_request_t xcb_out;


    xcb_parts[2].iov_base = (char *) &xcb_out;
    xcb_parts[2].iov_len = sizeof(xcb_out);
    xcb_parts[3].iov_base = 0;
    xcb_parts[3].iov_len = -xcb_parts[2].iov_len & 3;
    xcb_ret.sequence = xcb_send_request(c, 0, xcb_parts + 2, &xcb_req);
    return xcb_ret;
}


/*****************************************************************************
 **
 ** xcb_xinerama_screen_info_t * xcb_xinerama_query_screens_screen_info
 **
 ** @param const xcb_xinerama_query_screens_reply_t *R
 ** @returns xcb_xinerama_screen_info_t *
 **
 *****************************************************************************/

xcb_xinerama_screen_info_t *
xcb_xinerama_query_screens_screen_info (const xcb_xinerama_query_screens_reply_t *R  /**< */)
{
    return (xcb_xinerama_screen_info_t *) (R + 1);
}


/*****************************************************************************
 **
 ** int xcb_xinerama_query_screens_screen_info_length
 **
 ** @param const xcb_xinerama_query_screens_reply_t *R
 ** @returns int
 **
 *****************************************************************************/

int
xcb_xinerama_query_screens_screen_info_length (const xcb_xinerama_query_screens_reply_t *R  /**< */)
{
    return R->number;
}


/*****************************************************************************
 **
 ** xcb_xinerama_screen_info_iterator_t xcb_xinerama_query_screens_screen_info_iterator
 **
 ** @param const xcb_xinerama_query_screens_reply_t *R
 ** @returns xcb_xinerama_screen_info_iterator_t
 **
 *****************************************************************************/

xcb_xinerama_screen_info_iterator_t
xcb_xinerama_query_screens_screen_info_iterator (const xcb_xinerama_query_screens_reply_t *R  /**< */)
{
    xcb_xinerama_screen_info_iterator_t i;
    i.data = (xcb_xinerama_screen_info_t *) (R + 1);
    i.rem = R->number;
    i.index = (char *) i.data - (char *) R;
    return i;
}


/*****************************************************************************
 **
 ** xcb_xinerama_query_screens_reply_t * xcb_xinerama_query_screens_reply
 **
 ** @param xcb_connection_t                     *c
 ** @param xcb_xinerama_query_screens_cookie_t   cookie
 ** @param xcb_generic_error_t                 **e
 ** @returns xcb_xinerama_query_screens_reply_t *
 **
 *****************************************************************************/

xcb_xinerama_query_screens_reply_t *
xcb_xinerama_query_screens_reply (xcb_connection_t                     *c  /**< */,
                                  xcb_xinerama_query_screens_cookie_t   cookie  /**< */,
                                  xcb_generic_error_t                 **e  /**< */)
{
    return (xcb_xinerama_query_screens_reply_t *) xcb_wait_for_reply(c, cookie.sequence, e);
}

