# $OpenBSD: ports/games/openxcom/Makefile,v 1.4 2012/03/05 17:57:21 nigel Exp $

COMMENT =		open source reimplementation of the original X-Com
DISTNAME =		openxcom-20120317
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

SEPARATE_BUILD =	Yes
CONFIGURE_ARGS =	-DDEV_BUILD=Off

NO_REGRESS =		Yes
VMEM_WARNING =		Yes

pre-configure:
	${SUBST_CMD} ${WRKSRC}/src/Engine/CrossPlatform.cpp

.include <bsd.port.mk>
