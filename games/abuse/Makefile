# $OpenBSD: ports/games/abuse/Makefile,v 1.37 2011/04/21 15:25:08 jasper Exp $

COMMENT =	SDL port of the legendary 2D platform shooter

DISTNAME =	abuse-free-0.8
PKGNAME =	abuse-0.8
EPOCH =		0
ABUSE_SFX =	abuse-free-sounds-20110523
CATEGORIES =	games x11

HOMEPAGE =	http://abuse.zoy.org/

MAINTAINER =	Antti Harri <iku@openbsd.fi>

# Abuse: GPLv2 and public domain
# Abuse-free-sounds: various free licenses
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =	c m pthread GL stdc++ usbhid SDL sndio X11 Xau Xdamage \
		Xdmcp Xext Xfixes Xxf86vm drm pthread-stubs xcb \
		FLAC SDL_mixer mikmod ogg smpeg vorbis vorbisfile

MASTER_SITES =	${HOMEPAGE}raw-attachment/wiki/download/
MASTER_SITES0 =	http://devio.us/~iku/dist/

MODULES =	converters/libiconv
RUN_DEPENDS = 	audio/timidity
LIB_DEPENDS =	devel/sdl \
		devel/sdl-mixer \
		devel/smpeg \
		audio/flac \
		audio/libogg \
		audio/libmikmod \
		audio/libvorbis

DISTFILES = 	${DISTNAME}.tar.gz \
		${ABUSE_SFX}.tar.gz:0

USE_LIBTOOL =	Yes

MAKE_FLAGS = 		CXXFLAGS="${CFLAGS}"
CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-release \
			--disable-nonfree \
			--with-assetdir=${PREFIX}/share/abuse \
			--datadir=${PREFIX}/share/abuse

NO_REGRESS =	Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/abuse/sfx
	cd ${WRKDIR}/${ABUSE_SFX}/sfx && find . -type f -exec \
		${INSTALL_DATA} {} ${PREFIX}/share/abuse/sfx/ \;

.include <bsd.port.mk>
