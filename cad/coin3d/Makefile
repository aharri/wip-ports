# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		toolkit for 3D graphics development
V =			3.1.3
DISTNAME =		Coin-$V
PKGNAME =		coin3d-$V
SHARED_LIBS =		Coin 0.0 # 61.3

CATEGORIES =		cad devel
HOMEPAGE =		http://www.coin3d.org/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://ftp.coin3d.org/coin/src/all/
#MODULES =		???
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???

#MAKE_FLAGS =		
#MAKE_ENV =		???

#SEPARATE_BUILD =	simple (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GROFF =		Yes
USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
#CONFIGURE_ARGS =	--enable-system-expat=no
#CONFIGURE_ENV =	???

#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}

NO_REGRESS =		Yes

CFLAGS =		-DCOIN_INTERNAL \
			-DCOIN_DEBUG=0 \
			-I${X11BASE}/include
LDFLAGS =		-L${X11BASE}/lib
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???

.include <bsd.port.mk>
