/* vim: set cino= fo=croql sw=8 ts=8 sts=0 noet ai cin fdm=syntax : */

/*
 * Copyright (c) 2009 Ali Polatel <alip@exherbo.org>
 *
 * This file is part of the mpdcron mpd client. mpdcron is free software;
 * you can redistribute it and/or modify it under the terms of the GNU General
 * Public License version 2, as published by the Free Software Foundation.
 *
 * mpdcron is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPDCRON_GUARD_STATS_CLIENT_DEFS_H
#define MPDCRON_GUARD_STATS_CLIENT_DEFS_H 1

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include "../../cron-config.h"
#include "stats-defs.h"

struct eu_config {
	int verbosity;
	char *homepath;
	char *confpath;
	char *dbpath;
	const char *hostname;
	const char *port;
	const char *password;
};

extern struct eu_config euconfig;

extern void eulog(int level, const char *fmt, ...);
extern void load_paths(void);
extern int applet_love_song(int argc, char **argv);
extern int applet_update(int argc, char **argv);
#endif /* !MPDCRON_GUARD_STATS_CLIENT_DEFS_H */
