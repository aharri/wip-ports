# $OpenBSD: ports/multimedia/yle-dl/Makefile,v 1.3 2011/12/13 13:11:21 sthen Exp $

V =			2.0.1
COMMENT =		download videos from YLE Areena
DISTNAME =		yle-dl-$V
CATEGORIES =		multimedia

HOMEPAGE =		http://users.tkk.fi/~aajanki/rtmpdump-yle/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		${HOMEPAGE}

MODULES =		lang/python
RUN_DEPENDS =		net/rtmpdump \
			security/py-crypto

NO_REGRESS =		Yes
NO_BUILD =		Yes
PKG_ARCH =		*

do-build:
	cd ${WRKSRC} && env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f ${MAKE_FILE} ${ALL_TARGET}

do-install:
	${SUBST_CMD} ${WRKSRC}/yle-dl
	${INSTALL_SCRIPT} ${WRKSRC}/yle-dl ${PREFIX}/bin/yle-dl
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/yle-dl
	${INSTALL_DATA} ${WRKSRC}/COPYING ${WRKSRC}/README.fi \
		${PREFIX}/share/doc/yle-dl

.include <bsd.port.mk>
