# $OpenBSD$

COMMENT =		rsync friendly file encryption

DISTNAME =		rsyncrypto-1.12
CATEGORIES =		net

HOMEPAGE =		http://rsyncrypto.lingnu.com/
MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		c crypto m stdc++ argtable2

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=rsyncrypto/}

RUN_DEPENDS =		archivers/gnugzip
LIB_DEPENDS =		devel/argtable
REGRESS_DEPENDS =	shells/bash

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =	"CPPFLAGS=`pkg-config --cflags argtable2`" \
		"LDFLAGS=`pkg-config --libs argtable2`"

REGRESS_TARGET =	test

.include <bsd.port.mk>
