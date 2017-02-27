// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text
// your text

/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */

#include <ngx_config.h>
#include <ngx_core.h>

#if (NGX_HAVE_ATOMIC_OPS)

ngx_uint_t ngx_shmtx_force_unlock(ngx_shmtx_t* mtx, ngx_pid_t pid) {
    return 0;
}

#endif
