# $OpenBSD$

COMMENT =	conservative, stable branch of Quake

DISTNAME =	tyrquake-0.61
CATEGORIES =	games x11

HOMEPAGE =	http://www.disenchant.net/engine.html

MAINTAINER =	Ryan Freeman <ryan@slipgate.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =	GL X11 Xext Xxf86dga Xxf86vm c m sndio

MASTER_SITES =	http://www.disenchant.net/files/engine/

USE_GMAKE =	Yes

MAKE_FLAGS =	QBASEDIR=${LOCALBASE}/share/games/quake/

post-extract:
	@cp ${FILESDIR}/snd_sndio.c ${WRKSRC}/common

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tyr-* ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${LOCALBASE}/share/games/quake/

.include <bsd.port.mk>
