# $FreeBSD$

.include <bsd.own.mk>

.if ${MK_SVN} == "yes"
SVNLITE?=
.else
SVNLITE?=	lite
.endif

.if !defined(SVNDIR)

SVNDIR=		${SRCTOP}/contrib/subversion/subversion
APRU=		${SRCTOP}/contrib/apr-util
APR=		${SRCTOP}/contrib/apr
SQLITE=		${.CURDIR}/../../../contrib/sqlite3
WARNS?=		0	# definitely not warns friendly

.sinclude "${.CURDIR:H:H}/Makefile.inc"

LIBAPRDIR=		${.OBJDIR:H}/lib/libapr
LIBAPR_UTILDIR=		${.OBJDIR:H}/lib/libapr_util
LIBSQLITEDIR=		${.OBJDIR:H}/lib/libsqlite3
LIBSERFDIR=		${.OBJDIR:H}/lib/libserf

LIBSVN_CLIENTDIR=	${.OBJDIR:H}/lib/libsvn_client
LIBSVN_DELTADIR=	${.OBJDIR:H}/lib/libsvn_delta
LIBSVN_DIFFDIR=		${.OBJDIR:H}/lib/libsvn_diff
LIBSVN_FSDIR=		${.OBJDIR:H}/lib/libsvn_fs
LIBSVN_FS_FSDIR=	${.OBJDIR:H}/lib/libsvn_fs_fs
LIBSVN_FS_UTILDIR=	${.OBJDIR:H}/lib/libsvn_fs_util
LIBSVN_FS_XDIR=		${.OBJDIR:H}/lib/libsvn_fs_x
LIBSVN_RADIR=		${.OBJDIR:H}/lib/libsvn_ra
LIBSVN_RA_LOCALDIR=	${.OBJDIR:H}/lib/libsvn_ra_local
LIBSVN_RA_SVNDIR=	${.OBJDIR:H}/lib/libsvn_ra_svn
LIBSVN_RA_SERFDIR=	${.OBJDIR:H}/lib/libsvn_ra_serf
LIBSVN_REPOSDIR=	${.OBJDIR:H}/lib/libsvn_repos
LIBSVN_SUBRDIR=		${.OBJDIR:H}/lib/libsvn_subr
LIBSVN_WCDIR=		${.OBJDIR:H}/lib/libsvn_wc

LIBAPR=			${LIBAPRDIR}/libapr.a
LIBAPR_UTIL=		${LIBAPR_UTILDIR}/libapr-util.a
LIBSQLITE=		${LIBSQLITEDIR}/libsqlite3.a
LIBSERF=		${LIBSERFDIR}/libserf.a

LIBSVN_CLIENT=		${LIBSVN_CLIENTDIR}/libsvn_client.a
LIBSVN_DELTA=		${LIBSVN_DELTADIR}/libsvn_delta.a
LIBSVN_DIFF=		${LIBSVN_DIFFDIR}/libsvn_diff.a
LIBSVN_FS=		${LIBSVN_FSDIR}/libsvn_fs.a
LIBSVN_FS_FS=		${LIBSVN_FS_FSDIR}/libsvn_fs_fs.a
LIBSVN_FS_UTIL=		${LIBSVN_FS_UTILDIR}/libsvn_fs_util.a
LIBSVN_FS_X=		${LIBSVN_FS_XDIR}/libsvn_fs_x.a
LIBSVN_RA=		${LIBSVN_RADIR}/libsvn_ra.a
LIBSVN_RA_LOCAL=	${LIBSVN_RA_LOCALDIR}/libsvn_ra_local.a
LIBSVN_RA_SVN=		${LIBSVN_RA_SVNDIR}/libsvn_ra_svn.a
LIBSVN_RA_SERF=		${LIBSVN_RA_SERFDIR}/libsvn_ra_serf.a
LIBSVN_REPOS=		${LIBSVN_REPOSDIR}/libsvn_repos.a
LIBSVN_SUBR=		${LIBSVN_SUBRDIR}/libsvn_subr.a
LIBSVN_WC=		${LIBSVN_WCDIR}/libsvn_wc.a

.endif
