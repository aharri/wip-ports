# $OpenBSD: ports/games/xmoto/Makefile,v 1.9 2011/09/16 09:48:10 espie Exp $

COMMENT =	challenging 2D motocross platform game

V =	 	0.5.9
DISTNAME =	xmoto-${V}-src
PKGNAME =	xmoto-${V}
CATEGORIES =	games

MAINTAINER =	Antti Harri <iku@openbsd.fi>
HOMEPAGE =	http://xmoto.tuxfamily.org/

MASTER_SITES =	http://download.tuxfamily.org/xmoto/xmoto/${V}/

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += GL GLU SDL SDL_mixer SDL_net SDL_ttf X11 bz2 c curl jpeg 
WANTLIB += lua m ode png pthread sqlite3 stdc++ xdg-basedir xml2 z 


MODULES=	devel/gettext

LIB_DEPENDS =	archivers/bzip2 \
		databases/sqlite3 \
		devel/ode \
		devel/sdl-mixer \
		devel/sdl-net \
		devel/sdl-ttf \
		graphics/jpeg \
		graphics/png \
		lang/lua \
		net/curl \
		textproc/libxml \
		x11/libxdg-basedir

SEPARATE_BUILD =	Yes
USE_GROFF =		Yes
CONFIGURE_STYLE =	gnu
# XXX fix that ugly mess of variables
CONFIGURE_ENV =		CPPFLAGS="
			-I${LOCALBASE}/include
			-I${X11BASE}/include \
			-I${LOCALBASE}/include/libpng
			-DSVN_REV=\\\"${V}\\\"" \
			LDFLAGS="
			-L${LOCALBASE}/lib
			-L${X11BASE}/lib
			-pthread" \
			LIBS="-lGL -lm"
AUTOMAKE_VERSION =	1.11
AUTOCONF_VERSION =	2.68

NO_REGRESS =		Yes
WRKDIST =		${WRKDIR}/${DISTNAME:S/-src//}

pre-configure:
	cd ${WRKSRC} && \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
		AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		autoreconf -fi

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/xmoto/
	${INSTALL_DATA} ${WRKSRC}/{COPYING,README} ${PREFIX}/share/doc/xmoto/

.include <bsd.port.mk>
