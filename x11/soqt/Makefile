# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		library for Coin 3D
V =			1.5.0
DISTNAME =		SoQt-$V
PKGNAME =		soqt-$V
SHARED_LIBS =		SoQt 0.0 # 25.0

CATEGORIES =		x11 devel
HOMEPAGE =		http://www.coin3d.org/lib/soqt

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://ftp.coin3d.org/coin/src/all/
MODULES =		x11/qt4
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???

#MAKE_FLAGS =
#MAKE_ENV =		???

# build/configuration variables
#
#SEPARATE_BUILD =	simple (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GROFF =		Yes
USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
#CONFIGURE_ARGS =	--enable-system-expat=no
#CPPFLAGS =		-I${X11BASE}/include `pkg-config --cflags Coin`
CONFIGURE_ENV =		CPPFLAGS="${CFLAGS}" \
			LDFLAGS="${LDFLAGS}"

# for gnu stuff
#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}

NO_REGRESS =		Yes

CFLAGS =		-I${PREFIX}/include -I${X11BASE}/include -pthread
#`pkg-config --cflags Coin` -pthread
LDFLAGS =		-L${PREFIX}/lib -L${X11BASE}/lib -lCoin -lGL
#`pkg-config --libs Coin`
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

.include <bsd.port.mk>
