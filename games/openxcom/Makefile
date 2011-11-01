# $OpenBSD: ports/games/openxcom/Makefile,v 1.2 2011/07/18 10:57:01 jasper Exp $

COMMENT =		open source reimplementation of the original X-Com
DISTNAME =		openxcom-20111030
CATEGORIES =		games x11

HOMEPAGE =		http://openxcom.ninex.info/
MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		SDL SDL_gfx SDL_mixer c m pthread stdc++ yaml-cpp

MASTER_SITES =		http://openbsd.fi/dist/

MODULES =		devel/cmake

RUN_DEPENDS =		audio/timidity
LIB_DEPENDS =		devel/sdl-gfx \
			devel/sdl-mixer \
			devel/yaml-cpp

MAKE_ENV =		CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" \
			OPENXCOMDATA="${PREFIX}/share/openxcom/DATA"

USE_GMAKE =		Yes
#CONFIGURE_STYLE =	gnu

AUTOCONF_VERSION =	2.65
AUTOMAKE_VERSION =	1.11

NO_REGRESS =		Yes
#WRKSRC =		${WRKDIST}/src

VMEM_WARNING =		Yes

#pre-configure:
#	cd "${WRKSRC}" && \
#		AUTOCONF_VERSION="${AUTOCONF_VERSION}" \
#		AUTOMAKE_VERSION="${AUTOMAKE_VERSION}" autoreconf -fi

post-extract:
	${SUBST_CMD} -c ${FILESDIR}/wrapper ${WRKDIST}/bin/wrapper

#pre-configure:
#	${SUBST_CMD} ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKDIST}/bin/openxcom ${PREFIX}/bin/openxcom-bin
	${INSTALL_SCRIPT} ${WRKDIST}/bin/wrapper ${PREFIX}/bin/openxcom
	${INSTALL_DATA_DIR} ${PREFIX}/share/openxcom
	cd ${WRKDIST}/bin/DATA && find . | pax -rw ${PREFIX}/share/openxcom

#post-patch:
#	cd "${WRKSRC}" && \
#		perl -pi -e "s,/usr/local/bin/DATA,$${PREFIX}/share/DATA," install_manifest.txt

.include <bsd.port.mk>
