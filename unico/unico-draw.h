/* The Unico Theme Engine for Gtk+.
 * Copyright (C) 2010 Andrea Cimitan <andrea.cimitan@canonical.com>
 *
 * This  library is free  software; you can  redistribute it and/or
 * modify it  under  the terms  of the  GNU Lesser  General  Public
 * License  as published  by the Free  Software  Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed  in the hope that it will be useful,
 * but  WITHOUT ANY WARRANTY; without even  the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License  along  with  this library;  if not,  write to  the Free
 * Software Foundation, Inc., 51  Franklin St, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef UNICO_DRAW_H
#define UNICO_DRAW_H

#include <cairo.h>
#include <gtk/gtk.h>

#include "unico-types.h"
#include "unico-engine.h"

G_GNUC_INTERNAL void unico_register_style (UnicoStyleFunctions *functions);

#endif /* UNICO_DRAW_H */
