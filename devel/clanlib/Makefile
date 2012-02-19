# $OpenBSD$

#/usr/local/include/ClanLib-2.2/ClanLib/Display/TargetProviders/../Window/display_window.h:48:22: error: X11/Xlib.h: No such file or directory

#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#SHARED_ONLY =		???

COMMENT =		C++ toolkit library for games

DISTNAME =		ClanLib-2.2.12
PKGNAME =		${DISTNAME:L}

SHARED_LIBS +=		clan22App	0.0 # 1.0
SHARED_LIBS +=		clan22Core	0.0 # 1.0
SHARED_LIBS +=		clan22CSSLayout	0.0 # 1.0
SHARED_LIBS +=		clan22Database	0.0 # 1.0
SHARED_LIBS +=		clan22Display	0.0 # 1.0
SHARED_LIBS +=		clan22GUI	0.0 # 1.0
SHARED_LIBS +=		clan22MikMod	0.0 # 1.0
SHARED_LIBS +=		clan22Network	0.0 # 1.0
SHARED_LIBS +=		clan22RegExp	0.0 # 1.0
SHARED_LIBS +=		clan22Sound	0.0 # 1.0
SHARED_LIBS +=		clan22Sqlite	0.0 # 1.0
SHARED_LIBS +=		clan22SWRender	0.0 # 1.0
SHARED_LIBS +=		clan22Vorbis	0.0 # 1.0

CATEGORIES =		devel games

HOMEPAGE =		http://clanlib.org/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# Zlib
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += jpeg m mikmod ogg ossaudio png sndio stdc++ vorbis
WANTLIB += z

MASTER_SITES =		${HOMEPAGE}download/releases-2.0/
EXTRACT_SUFX =		.tgz

#DIST_SUBDIR =		???

#MODULES =		???
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
LIB_DEPENDS =		audio/libmikmod \
			audio/libogg \
			audio/libvorbis \
			graphics/jpeg \
			graphics/png

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???

# build/configuration variables
#
#SEPARATE_BUILD =	simple (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that uses libtool should use this option,
# unless there is a really good reason not to.
USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
#CONFIGURE_ARGS +=	--disable-clanGL \
#			--disable-clanGL1
CONFIGURE_ENV =		CPPFLAGS="`pkg-config --cflags libpng` -I${PREFIX}/include -I${X11BASE}/include -pthread" \
			LDFLAGS="`pkg-config --libs libpng` -L${PREFIX}/lib -L${X11BASE}/lib"

# for gnu stuff
AUTOCONF_VERSION =	2.68
AUTOMAKE_VERSION =	1.11
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}

NO_REGRESS =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

pre-configure:
	cd "${WRKSRC}" && \
		AUTOCONF_VERSION="${AUTOCONF_VERSION}" \
		AUTOMAKE_VERSION="${AUTOMAKE_VERSION}" autoreconf -fi

post-install:
	cd "${WRKSRC}/Setup/pkgconfig" && find . -name "*.pc" | \
		pax -rw "${PREFIX}/lib/pkgconfig"

.include <bsd.port.mk>
