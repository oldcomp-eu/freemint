/*
 * This file belongs to FreeMiNT. It's not in the original MiNT 1.12
 * distribution. See the file CHANGES for a detailed log of changes.
 * 
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 */

/* Struct for the default action on C/A/D
 */
struct cad_def
{
	short	action;
	union {
		long pid;	/* e.g. pid to be signalled */
		char *path;	/* e.g. a path to executable file */
	} par;
	union {
		long arg;	/* e.g. signal number */
		char *cmd;	/* e.g. command line */
	} aux;
	char *env;		/* only valid for exec */
};

short ikbd_scan(ushort scancode);
void init_keytbl(void);

extern short gl_kbd;
extern struct cad_def cad[3];

/* EOF */
