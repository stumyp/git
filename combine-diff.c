static void append_lost(struct sline *sline, int n, const char *line, int len)
			if (lline->len == len &&
			    !memcmp(lline->line, line, len)) {
		append_lost(state->lost_bucket, state->n, line+1, len-1);
			 const char *path)
	xpp.flags = 0;
static void dump_sline(struct sline *sline, unsigned long cnt, int num_parent,
		fputs(c_frag, stdout);
				fputs(c_old, stdout);
			 "", elem->path, c_meta, c_reset);
	printf("%sindex ", c_meta);
			printf("%snew file mode %06o",
			       c_meta, elem->mode);
				printf("%sdeleted file ", c_meta);
				 c_meta, c_reset);
				 c_meta, c_reset);
				 c_meta, c_reset);
				 c_meta, c_reset);
				     mode_differs, 0);
				     textconv, elem->path);
				     mode_differs, 1);
		dump_sline(sline, cnt, num_parent,
				putchar(opt->line_termination);
				putchar(opt->line_termination);