# $OpenBSD$

COMMENT =		free Heroes of Might and Magic 2 engine
DISTNAME =		fheroes2-src-r2693
PKGNAME =		${DISTNAME:S/-src-r/-/}
CATEGORIES =		games x11

HOMEPAGE =		http://sourceforge.net/apps/mediawiki/fheroes2/
MAINTAINER =		Antti Harri <iku@openbsd.fi>

# Mixed free licenses, except AI files don't allow commercial use.
PERMIT_PACKAGE_CDROM =	No commercial use
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =No commercial use
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += SDL SDL_image SDL_mixer SDL_net SDL_ttf c
WANTLIB += m png pthread stdc++ z
WANTLIB += ${MOD_GETTEXT_WANTLIB}

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=fheroes2/}
EXTRACT_SUFX =		.tgz

MODULES =		devel/gettext
RUN_DEPENDS =		audio/timidity
LIB_DEPENDS +=		devel/sdl
LIB_DEPENDS +=		devel/sdl-image
LIB_DEPENDS +=		devel/sdl-mixer
LIB_DEPENDS +=		devel/sdl-net
LIB_DEPENDS +=		devel/sdl-ttf

MAKE_FLAGS =		PLATFORM=bsd MAKE="${MAKE_PROGRAM}" CXX="${CXX}" WITH_AI=simple

USE_GMAKE =		Yes
NO_REGRESS =		Yes

WRKDIST =		${WRKDIR}/fheroes-src

do-configure:
	${SUBST_CMD} ${WRKSRC}/src/fheroes2/system/settings.cpp

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fheroes2 ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2

.include <bsd.port.mk>
