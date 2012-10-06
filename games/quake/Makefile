# $OpenBSD: ports/games/quake/Makefile,v 1.39 2011/12/21 13:23:44 jasper Exp $

COMMENT-main =		Quake/QuakeWorld client
COMMENT-libs =		Quake common libs
COMMENT-server =	QuakeWorld server

# .so.1.0
SOMAJOR =		2
SOMINOR =		0
V =			0.7.0
DISTNAME =		quakeforge-$V
PKGNAME-main =		quake-$V
PKGNAME-libs =		quake-libs-$V
FULLPKGNAME-server =	quakeworld-server-$V
FULLPKGPATH-server =	games/quake,-server
EPOCH-main =		0
EPOCH-libs =		0
EPOCH-server =		1

MULTI_PACKAGES =	-main -libs -server

SHARED_LIBS +=		QFcd		${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFconsole	${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFgib		${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFimage		${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFjs		${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFmodels	${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFruamoko	${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFsound		${SOMAJOR}.${SOMINOR}
SHARED_LIBS +=		QFutil		${SOMAJOR}.${SOMINOR}

CATEGORIES =		games x11

HOMEPAGE =		http://www.quakeforge.net/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB-main += QFcd QFconsole QFgib QFimage QFjs QFmodels
WANTLIB-main += QFruamoko QFsound QFutil SDL X11 Xext Xxf86dga Xxf86vm
WANTLIB-main += c crypto idn m ncurses png pthread sndio ssl usbhid
WANTLIB-main += xcb z curl ${MODGETTEXT_WANTLIB}

WANTLIB-libs += FLAC SDL m ncurses ogg png samplerate sndio usbhid
WANTLIB-libs += vorbis vorbisfile z iconv pthread

WANTLIB-server += QFconsole QFgib QFimage QFmodels QFruamoko
WANTLIB-server += QFutil c m ncurses png pthread z

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=quake/}
EXTRACT_SUFX =		.tar.bz2

MODULES =		devel/gettext
BUILD_DEPENDS =		devel/bison
LIB_DEPENDS-server =	${FULLPKGNAME-libs}:${BUILD_PKGPATH},-libs
LIB_DEPENDS-main =	${FULLPKGNAME-libs}:${BUILD_PKGPATH},-libs \
			devel/libidn \
			devel/sdl \
			graphics/png \
			net/curl 
LIB_DEPENDS-libs =	audio/flac \
			audio/libsamplerate \
			audio/libvorbis \
			devel/sdl \
			graphics/png

USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	--with-cd-default=sdl \
			--with-sharepath=${PREFIX}/share/quakeforge \
			--enable-version-info=${SOMAJOR}:${SOMINOR} \
			--disable-asmopt \
			--disable-oss \
			--disable-sun \
			--disable-jack
YACC =			bison

NO_REGRESS =		Yes

.include <bsd.port.mk>
