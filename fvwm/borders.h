/* -*-c-*- */
/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307	 USA
 */

#ifndef _BORDERS_H
#define _BORDERS_H

/* ---------------------------- included header files ----------------------- */

/* ---------------------------- global definitions -------------------------- */

/* ---------------------------- global macros ------------------------------- */

/* ---------------------------- type definitions ---------------------------- */

typedef enum
{
	DRAW_FRAME    = 0x1,
	DRAW_TITLE    = 0x2,
	DRAW_BUTTONS  = 0x4,
	DRAW_ALL      = 0x7
} draw_window_parts;

typedef enum
{
	CLEAR_NONE     = 0x0,
	CLEAR_FRAME    = 0x1,
	CLEAR_TITLE    = 0x2,
	CLEAR_BUTTONS  = 0x4,
	CLEAR_ALL      = 0x7
} clear_window_parts;

/* ---------------------------- exported variables (globals) ---------------- */

/* ---------------------------- interface functions ------------------------- */

int get_button_number(int context);
void draw_clipped_decorations(
	FvwmWindow *t, draw_window_parts draw_parts, Bool has_focus, int force,
	Window expose_win, XRectangle *rclip, clear_window_parts clear_parts);
void DrawDecorations(
	FvwmWindow *t, draw_window_parts draw_parts, Bool has_focus, int force,
	Window expose_win, clear_window_parts clear_parts);
void RedrawDecorations(FvwmWindow *fw);

#endif /* _BORDERS_H */
