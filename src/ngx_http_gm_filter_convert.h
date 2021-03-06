#ifndef NGX_HTTP_GM_FILTER_CONVERT_H
#define NGX_HTTP_GM_FILTER_CONVERT_H

#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

#include "ngx_http_gm_filter_module.h"

/*
ngx_int_t ngx_http_gm_parse_convert_options(ngx_http_gm_option *options);
ngx_int_t ngx_http_gm_run_convert_cmd();
*/

ngx_int_t parse_convert_options(ngx_conf_t *cf, ngx_array_t *args, ngx_uint_t start, convert_options_t *option_info);
ngx_int_t convert_image(ngx_http_request_t *r, convert_options_t *option_info, Image **image);

#endif /* NGX_HTTP_GM_FILTER_CONVERT_H */


