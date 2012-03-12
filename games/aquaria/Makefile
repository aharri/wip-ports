# $OpenBSD$

COMMENT =		underwater fantasy game
DISTNAME =		aquaria-20110622
CATEGORIES =		games x11

HOMEPAGE =		http://www.bit-blot.com/aquaria/
MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		c freetype m openal pthread stdc++ \
			SDL lua ogg vorbis vorbisfile

MASTER_SITES =		http://openbsd.fi/dist/

MODULES =		devel/cmake
LIB_DEPENDS =		audio/openal \
			audio/libvorbis \
			audio/libogg \
			devel/sdl \
			lang/lua

CONFIGURE_ARGS =	-DCMAKE_BUILD_TYPE:String=Release

NO_REGRESS =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/aquaria ${PREFIX}/bin/
	${INSTALL_DATA_DIR} ${PREFIX}/share/aquaria
	cd ${PREFIX}/share/aquaria && cp -r ${WRKSRC}/game_scripts/* .

.include <bsd.port.mk>
