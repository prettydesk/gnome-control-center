/* bg-wallpapers-source.h */
/*
 * Copyright (C) 2010 Intel, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Thomas Wood <thomas.wood@intel.com>
 *
 */


#ifndef _BG_WALLPAPERS_SOURCE_H
#define _BG_WALLPAPERS_SOURCE_H

#include <gtk/gtk.h>
#include "bg-source.h"

G_BEGIN_DECLS

#define BG_TYPE_WALLPAPERS_SOURCE (bg_wallpapers_source_get_type ())
G_DECLARE_FINAL_TYPE (BgWallpapersSource, bg_wallpapers_source, BG, WALLPAPERS_SOURCE, BgSource)

BgWallpapersSource *bg_wallpapers_source_new (GtkWidget *widget);

G_END_DECLS

#endif /* _BG_WALLPAPERS_SOURCE_H */
