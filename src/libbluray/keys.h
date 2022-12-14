/*
 * This file is part of libbluray
 * Copyright (C) 2010-2022  Petri Hintukainen <phintuka@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see
 * <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 * \brief User input key definitions
 */

#if !defined(_BD_KEYS_H_)
#define _BD_KEYS_H_

/**
 * Key codes
 */
typedef enum {
    BD_VK_NONE      = 0xffff,  /**< no key pressed */

    /* numeric key events */
    BD_VK_0         = 0,   /**< "1" */
    BD_VK_1         = 1,   /**< "2" */
    BD_VK_2         = 2,   /**< "3" */
    BD_VK_3         = 3,   /**< "4" */
    BD_VK_4         = 4,   /**< "5" */
    BD_VK_5         = 5,   /**< "6" */
    BD_VK_6         = 6,   /**< "7" */
    BD_VK_7         = 7,   /**< "8" */
    BD_VK_8         = 8,   /**< "9" */
    BD_VK_9         = 9,   /**< "0" */

    /* */
    BD_VK_ROOT_MENU = 10,  /**< Open disc root menu */
    BD_VK_POPUP     = 11,  /**< Toggle popup menu */

    /* interactive key events */
    BD_VK_UP        = 12,  /**< Arrow up */
    BD_VK_DOWN      = 13,  /**< Arrow down */
    BD_VK_LEFT      = 14,  /**< Arrow left */
    BD_VK_RIGHT     = 15,  /**< Arrow right */
    BD_VK_ENTER     = 16,  /**< Select */

    /** Mouse click. Translated to BD_VK_ENTER if mouse is over a valid button. */
    BD_VK_MOUSE_ACTIVATE = 17,

    BD_VK_RED       = 403, /**< Color key "Red" */
    BD_VK_GREEN     = 404, /**< Color key "Green" */
    BD_VL_YELLOW    = 405, /**< Color key "Yellow" */
    BD_VK_BLUE      = 406, /**< Color key "Blue" */

} bd_vk_key_e;

/*
 * Application may optionally provide KEY_PRESSED, KEY_TYPED and KEY_RELEASED events.
 * These masks are OR'd with the key code when calling bd_user_input().
 */

#define BD_VK_KEY_PRESSED   0x80000000   /**< Key was pressed down */
#define BD_VK_KEY_TYPED     0x40000000   /**< Key was typed */
#define BD_VK_KEY_RELEASED  0x20000000   /**< Key was released */

#endif // _BD_KEYS_H_
