/* $Id$ */
#include "httpd.h"
#include "http_config.h"
#include "http_core.h"
#include "http_main.h"
#include "http_log.h"
#include "http_protocol.h"
#include "http_request.h"

static const command_rec commands[] = {
	{"RunAsUser", act_sudo, NULL, OR_FILEINFO, TAKE2,
		"a system username to run the httpd child as"},
	{"RunChrooted", act_chroot, NULL, OR_FILEINFO, TAKE2,
		"boolean whether to run jailed or not"},
	{NULL}
}

static const char *act_sudo()
{
}

static const char *act_chroot()
{
}


module MODULE_VAR_EXPORT chudo_module = {
	STANDARD_MODULE_STUFF,
	NULL,		/* module initializer */
	NULL,		/* per-directory config creator */
	NULL,		/* dir config merger */
	NULL,		/* server config creator */
	NULL,		/* server config merger */
	commands,	/* command table */
	NULL,		/* [9] content handlers */
	NULL,		/* [2] URI-to-filename translation */
	NULL,		/* [5] check/validate user id */
	NULL,		/* [6] check user_id is valid *here* */
	NULL,		/* [4] check access by host address */
	NULL,		/* [7] MIME type checker/setter */
	NULL,		/* [8] fixups */
	NULL,		/* [10] logger */
	NULL,		/* [3] header parser */
	NULL,		/* process initialization */
	NULL,		/* process exit/cleanup */
	NULL,		/* [1] post read_request handling */
};




