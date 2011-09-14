# $OpenBSD: ports/games/xmoto/Makefile,v 1.8 2011/07/08 20:38:02 naddy Exp $

COMMENT =	challenging 2D motocross platform game

V =	 	0.5.7
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

WANTLIB += GL GLU SDL SDL_mixer SDL_net SDL_ttf X11 bz2 c curl iconv jpeg lua m 
WANTLIB += ode png pthread sqlite3 stdc++ xdg-basedir z

MODULES=	devel/gettext

LIB_DEPENDS =	devel/sdl-mixer \
		devel/sdl-net \
		devel/sdl-ttf \
		archivers/bzip2 \
		net/curl \
		graphics/jpeg \
		x11/libxdg-basedir \
		devel/ode \
		lang/lua \
		graphics/png \
		databases/sqlite3

USE_GMAKE =		Yes
USE_GROFF =		Yes
CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include \
			    -I${LOCALBASE}/include/libpng" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib" \
			LIBS="-lGL -lm -pthread"

WRKDIST =		${WRKDIR}/${DISTNAME:S/-src//}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/xmoto/
	${INSTALL_DATA} ${WRKSRC}/{COPYING,README} ${PREFIX}/share/doc/xmoto/

.include <bsd.port.mk>
