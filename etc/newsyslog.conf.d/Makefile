# $FreeBSD$

.include <bsd.own.mk>

BINDIR=		/etc/newsyslog.conf.d

FILES=

.if ${MK_OFED} != "no"
FILES+=		opensm.conf
.endif

.include <bsd.prog.mk>
