/*
 * tixUnixDefault.h --
 *
 *	This file defines the defaults for all options for all of
 *	the Tix widgets.
 *
 * Copyright (c) 2000 Tix Project Group.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tixUnixDefault.h,v 1.3 2000/12/24 06:43:07 ioilam Exp $
 */

#ifndef TIX_WIN_DEFAULT
#define TIX_WIN_DEFAULT

/*
 * The following were defined in Windows versions of Tk 8.0+ but
 * not in the Unix versions.
 */
#ifndef CTL_FONT
#define CTL_FONT        "Helvetica -12 bold"
#endif
#ifndef NORMAL_FG
#define NORMAL_FG       BLACK
#endif
#ifndef TEXT_FG
#define TEXT_FG         NORMAL_FG
#endif
#ifndef SELECT_FG
#define SELECT_FG       NORMAL_FG
#endif
#ifndef MENU_BG
#define MENU_BG         NORMAL_BG
#endif
#ifndef MENU_FG
#define MENU_FG         NORMAL_FG
#endif
#ifndef HIGHLIGHT
#define HIGHLIGHT       NORMAL_FG
#endif

#define CTL_BOLD_FONT                   "Helvetica -12 bold"
#define TIX_EDITOR_BG                   NORMAL_BG
#define TIX_BORDER_WIDTH                "2"
#define TIX_HIGHLIGHT_THICKNESS         "1"

/*
 * Compound image
 */
#define DEF_CMPIMAGE_BG_COLOR		NORMAL_BG
#define DEF_CMPIMAGE_BG_MONO		WHITE
#define DEF_CMPIMAGE_FG_COLOR		BLACK
#define DEF_CMPIMAGE_FG_MONO		BLACK
#define DEF_CMPIMAGE_FONT	        CTL_FONT

/*
 * tixHList widget
 */
#define DEF_HLIST_BG_COLOR		TIX_EDITOR_BG
#define DEF_HLIST_BG_MONO		WHITE
#define DEF_HLIST_BORDER_WIDTH		TIX_BORDER_WIDTH
#define DEF_HLIST_BROWSE_COMMAND	""
#define DEF_HLIST_COMMAND		""
#define DEF_HLIST_COLUMNS		"1"
#define DEF_HLIST_CURSOR		""
#define DEF_HLIST_DISPLAY_MODE		"tree"
#define DEF_HLIST_DRAG_COMMAND		""
#define DEF_HLIST_DRAW_BRANCH		"true"
#define DEF_HLIST_DROP_COMMAND		""
#define DEF_HLIST_FONT	      		CTL_FONT
#define DEF_HLIST_FG_COLOR		BLACK
#define DEF_HLIST_FG_MONO		BLACK
#define DEF_HLIST_HEADER		"0"
#define DEF_HLIST_HEIGHT		"10"
#define DEF_HLIST_HIGHLIGHT_COLOR	BLACK
#define DEF_HLIST_HIGHLIGHT_MONO	BLACK
#define DEF_HLIST_HIGHLIGHT_WIDTH	TIX_HIGHLIGHT_THICKNESS
#define DEF_HLIST_RELIEF		"sunken"
#define DEF_HLIST_ORIENT		"vertical"
#define DEF_HLIST_PADX			"2"
#define DEF_HLIST_PADY			"2"
#define DEF_HLIST_GAP			"5"
#define DEF_HLIST_INDENT		"10"
#define DEF_HLIST_INDICATOR		"0"
#define DEF_HLIST_INDICATOR_CMD		""
#define DEF_HLIST_ITEM_TYPE		"text"
#define DEF_HLIST_SELECT_BG_COLOR	SELECT_BG
#define DEF_HLIST_SELECT_FG_COLOR	SELECT_FG
#define DEF_HLIST_SELECT_BG_MONO	BLACK
#define DEF_HLIST_SELECT_FG_MONO	WHITE
#define DEF_HLIST_SELECT_MODE		"browse"
#define DEF_HLIST_SELECT_BORDERWIDTH	"0"
#define DEF_HLIST_SEPARATOR		"."
#define DEF_HLIST_SIZE_COMMAND		""
#define DEF_HLIST_TAKE_FOCUS 		"1"
#define DEF_HLIST_WIDTH			"20"
#define DEF_HLIST_WIDE_SELECT		"true"
#define DEF_HLIST_Y_SCROLL_COMMAND	""
#define DEF_HLIST_X_SCROLL_COMMAND	""

/*
 * HList Entry
 */
#define DEF_HLISTENTRY_BITMAP	 ""
#define DEF_HLISTENTRY_DATA	 ""
#define DEF_HLISTENTRY_GAP	 "4"
#define DEF_HLISTENTRY_IMAGE	 ""
#define DEF_HLISTENTRY_JUSTIFY	 "left"
#define DEF_HLISTENTRY_NAME	 ""
#define DEF_HLISTENTRY_PADX	 "2"
#define DEF_HLISTENTRY_PADY	 "2"
#define DEF_HLISTENTRY_STATE	 "normal"
#define DEF_HLISTENTRY_TEXT	 ""
#define DEF_HLISTENTRY_UNDERLINE "-1"
#define DEF_HLISTENTRY_WIDGET	 ""
#define DEF_HLISTENTRY_WLENGTH	 "0"

/*
 * HList Entry
 */
#define DEF_HLISTHEADER_BG_COLOR	NORMAL_BG
#define DEF_HLISTHEADER_BG_MONO		WHITE
#define DEF_HLISTHEADER_BORDER_WIDTH	TIX_BORDER_WIDTH
#define DEF_HLISTHEADER_RELIEF		"raised"

/*
 * tixNBFrame widget
 */
#define DEF_NOTEBOOKFRAME_INACTIVE_BG_COLOR	NORMAL_BG
#define DEF_NOTEBOOKFRAME_INACTIVE_BG_MONO	WHITE
#define DEF_NOTEBOOKFRAME_BACKPAGE_COLOR	NORMAL_BG
#define DEF_NOTEBOOKFRAME_BACKPAGE_MONO		WHITE
#define DEF_NOTEBOOKFRAME_BG_COLOR		NORMAL_BG
#define DEF_NOTEBOOKFRAME_BG_MONO		WHITE
#define DEF_NOTEBOOKFRAME_DISABLED_FG_COLOR	DISABLED
#define DEF_NOTEBOOKFRAME_DISABLED_FG_MONO	""
#define DEF_NOTEBOOKFRAME_FOCUS_COLOR		BLACK
#define DEF_NOTEBOOKFRAME_FOCUS_MONO		BLACK
#define DEF_NOTEBOOKFRAME_BORDER_WIDTH		TIX_BORDER_WIDTH
#define DEF_NOTEBOOKFRAME_CURSOR		""
#define DEF_NOTEBOOKFRAME_FONT	      		CTL_FONT
#define DEF_NOTEBOOKFRAME_FG_COLOR		BLACK
#define DEF_NOTEBOOKFRAME_FG_MONO		BLACK
#define DEF_NOTEBOOKFRAME_RELIEF		"raised"
#define DEF_NOTEBOOKFRAME_SLAVE			"1"
#define DEF_NOTEBOOKFRAME_TAKE_FOCUS		"1"
#define DEF_NOTEBOOKFRAME_WIDTH			"10"
#define DEF_NOTEBOOKFRAME_TABPADX		"6"
#define DEF_NOTEBOOKFRAME_TABPADY		"3"

/*
 * TList widget
 */
#define DEF_TLIST_BG_COLOR			TIX_EDITOR_BG
#define DEF_TLIST_BG_MONO			WHITE
#define DEF_TLIST_BORDER_WIDTH			TIX_BORDER_WIDTH
#define DEF_TLIST_BROWSE_COMMAND		""
#define DEF_TLIST_COMMAND			""
#define DEF_TLIST_CURSOR			""
#define DEF_TLIST_FONT	      			CTL_FONT
#define DEF_TLIST_FG_COLOR			BLACK
#define DEF_TLIST_FG_MONO			BLACK
#define DEF_TLIST_HEIGHT			"10"
#define DEF_TLIST_HIGHLIGHT_COLOR		BLACK
#define DEF_TLIST_HIGHLIGHT_MONO		BLACK
#define DEF_TLIST_HIGHLIGHT_WIDTH		TIX_HIGHLIGHT_THICKNESS
#define DEF_TLIST_ITEM_TYPE			"text"
#define DEF_TLIST_RELIEF			"sunken"
#define DEF_TLIST_ORIENT			"vertical"
#define DEF_TLIST_PADX				"2"
#define DEF_TLIST_PADY				"2"
#define DEF_TLIST_SELECT_BG_COLOR		SELECT_BG
#define DEF_TLIST_SELECT_FG_COLOR		SELECT_FG
#define DEF_TLIST_SELECT_BG_MONO		BLACK
#define DEF_TLIST_SELECT_FG_MONO		WHITE
#define DEF_TLIST_SELECT_MODE			"browse"
#define DEF_TLIST_SELECT_BORDERWIDTH		"0"
#define DEF_TLIST_STATE				"normal"
#define DEF_TLIST_SIZE_COMMAND			""
#define DEF_TLIST_TAKE_FOCUS 			"1"
#define DEF_TLIST_WIDTH				"20"
#define DEF_TLIST_Y_SCROLL_COMMAND		""
#define DEF_TLIST_X_SCROLL_COMMAND		""

/*
 * Grid widget
 */
#define DEF_GRID_BG_COLOR		NORMAL_BG
#define DEF_GRID_BG_MONO		WHITE
#define DEF_GRID_BORDER_WIDTH		TIX_BORDER_WIDTH
#define DEF_GRID_BROWSE_COMMAND		""
#define DEF_GRID_COMMAND		""
#define DEF_GRID_CURSOR			""
#define DEF_GRID_DEFAULT_WIDTH		"40"
#define DEF_GRID_DEFAULT_HEIGHT		"20"
#define DEF_GRID_EDITDONE_COMMAND	""
#define DEF_GRID_EDITNOTIFY_COMMAND	""
#define DEF_GRID_FLOATING_ROWS		"0"
#define DEF_GRID_FLOATING_COLS		"0"
#define DEF_GRID_FONT	      	        CTL_FONT
#define DEF_GRID_FG_COLOR		BLACK
#define DEF_GRID_FG_MONO		BLACK
#define DEF_GRID_FORMAT_COMMAND		""
#define DEF_GRID_HEIGHT			"10"
#define DEF_GRID_HIGHLIGHT_COLOR	BLACK
#define DEF_GRID_HIGHLIGHT_MONO		BLACK
#define DEF_GRID_HIGHLIGHT_WIDTH	TIX_HIGHLIGHT_THICKNESS
#define DEF_GRID_LEFT_MARGIN		"1"
#define DEF_GRID_ITEM_TYPE		"text"
#define DEF_GRID_RELIEF			"sunken"
#define DEF_GRID_PADX			"2"
#define DEF_GRID_PADY			"2"
#define DEF_GRID_SELECT_BG_COLOR	ACTIVE_BG
#define DEF_GRID_SELECT_FG_COLOR	BLACK
#define DEF_GRID_SELECT_BG_MONO		BLACK
#define DEF_GRID_SELECT_FG_MONO		WHITE
#define DEF_GRID_SELECT_MODE		"single"
#define DEF_GRID_SELECT_UNIT		"row"
#define DEF_GRID_SELECT_BORDERWIDTH	"0"
#define DEF_GRID_STATE			"normal"
#define DEF_GRID_SIZE_COMMAND		""
#define DEF_GRID_TAKE_FOCUS 		"1"
#define DEF_GRID_TOP_MARGIN		"1"
#define DEF_GRID_WIDTH			"4"
#define DEF_GRID_Y_SCROLL_COMMAND	""
#define DEF_GRID_X_SCROLL_COMMAND	""

/*----------------------------------------------------------------------
 *
 * default options for Text Display Items/Styles
 *
 *----------------------------------------------------------------------
 */

#define DEF_TEXTITEM_STYLE	 ""
#define DEF_TEXTITEM_TEXT	 ""
#define DEF_TEXTITEM_UNDERLINE	 "-1"
#define DEF_TEXTITEM_TYPE	 "text"

#define DEF_TEXTSTYLE_NORMAL_FG_COLOR		NORMAL_FG
#define DEF_TEXTSTYLE_NORMAL_FG_MONO		BLACK
#define DEF_TEXTSTYLE_NORMAL_BG_COLOR		TIX_EDITOR_BG
#define DEF_TEXTSTYLE_NORMAL_BG_MONO		WHITE

#define DEF_TEXTSTYLE_ACTIVE_FG_COLOR		NORMAL_FG
#define DEF_TEXTSTYLE_ACTIVE_FG_MONO		WHITE
#define DEF_TEXTSTYLE_ACTIVE_BG_COLOR		ACTIVE_BG
#define DEF_TEXTSTYLE_ACTIVE_BG_MONO		BLACK

#define DEF_TEXTSTYLE_SELECTED_FG_COLOR		SELECT_FG
#define DEF_TEXTSTYLE_SELECTED_FG_MONO		WHITE
#define DEF_TEXTSTYLE_SELECTED_BG_COLOR		SELECT_BG
#define DEF_TEXTSTYLE_SELECTED_BG_MONO		BLACK

#define DEF_TEXTSTYLE_DISABLED_FG_COLOR		BLACK
#define DEF_TEXTSTYLE_DISABLED_FG_MONO		BLACK
#define DEF_TEXTSTYLE_DISABLED_BG_COLOR	        TIX_EDITOR_BG
#define DEF_TEXTSTYLE_DISABLED_BG_MONO		WHITE

#define DEF_TEXTSTYLE_PADX			"2"
#define DEF_TEXTSTYLE_PADY			"2"
#define DEF_TEXTSTYLE_FONT	                CTL_FONT
#define DEF_TEXTSTYLE_JUSTIFY			"left"
#define DEF_TEXTSTYLE_WLENGTH			"0"
#define DEF_TEXTSTYLE_ANCHOR			"w"

#endif /* TIX_WIN_DEFAULT */
