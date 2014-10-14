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

struct preprocess {
  u_int32_t qnum;
  u_int16_t minp;
  u_int16_t minf;
  u_int32_t minb;
  u_int16_t maxp;
  u_int16_t maxf;
  u_int32_t maxb;
  u_int16_t maxbpp;
  u_int16_t maxppf;
  u_int16_t minbpp;
  u_int16_t minppf;
  u_int8_t recover;
  u_int8_t num;
};

#if (!defined __PREPROCESS_C)
#define EXT extern
#else
#define EXT
#endif
EXT void set_preprocess_funcs(char *, struct preprocess *);
EXT int cond_qnum(struct db_cache *[], int *);
EXT int check_minp(struct db_cache *[], int *);
EXT int check_minb(struct db_cache *[], int *);
EXT int check_minf(struct db_cache *[], int *);
EXT int check_maxp(struct db_cache *[], int *);
EXT int check_maxb(struct db_cache *[], int *);
EXT int check_maxf(struct db_cache *[], int *);
EXT int check_maxbpp(struct db_cache *[], int *);
EXT int check_maxppf(struct db_cache *[], int *);
EXT int check_minbpp(struct db_cache *[], int *);
EXT int check_minppf(struct db_cache *[], int *);

EXT int mandatory_invalidate(struct db_cache *[], int *);
EXT int mandatory_validate(struct db_cache *[], int *);

EXT preprocess_func preprocess_funcs[2*N_FUNCS]; /* 20 */
EXT struct preprocess prep;
#undef EXT
