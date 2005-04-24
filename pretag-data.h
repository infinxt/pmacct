/*
    pmacct (Promiscuous mode IP Accounting package)
    pmacct is Copyright (C) 2003-2005 by Paolo Lucente
*/

/*
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

static struct _map_dictionary_line map_dictionary[] = {
  {"id", PT_map_id_handler},
  {"ip", PT_map_ip_handler},
  {"in", PT_map_input_handler},
  {"out", PT_map_output_handler},
  {"engine_type", PT_map_engine_type_handler},
  {"engine_id", PT_map_engine_id_handler},
  {"nexthop", PT_map_nexthop_handler},
  {"bgp_nexthop", PT_map_bgp_nexthop_handler},
  {"filter", PT_map_filter_handler},
  {"", NULL}
};