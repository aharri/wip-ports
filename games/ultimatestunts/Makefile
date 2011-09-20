# $OpenBSD$

COMMENT=	remake of the famous DOS-game stunts

N=		ultimatestunts
PKGNAME=	$N-0.7.6
DISTNAME=	$N-srcdata-0761
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
CATEGORIES=	games x11

MAINTAINER=	Antti Harri <iku@openbsd.fi>

HOMEPAGE=	http://www.ultimatestunts.nl/
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=ultimatestunts/}

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

USE_GMAKE=	Yes
USE_SYSTRACE=	Yes

CONFIGURE_STYLE=autoconf
CONFIGURE_ENV=	CPPFLAGS="-I${X11BASE}/include -I${LOCALBASE}/include `sdl-config --cflags`" \
		LDFLAGS="-pthread -L${X11BASE}/lib -L${LOCALBASE}/lib"
CONFIGURE_ARGS =	--with-openal

WANTLIB += GL SDL SDL_image alut c iconv intl m ogg openal pthread
WANTLIB += stdc++ vorbis vorbisfile

MODULES=	devel/gettext
LIB_DEPENDS =	audio/freealut \
		audio/libogg \
		audio/libvorbis \
		devel/sdl \
		devel/sdl-image

AUTOCONF_VERSION =	2.65

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/$N/ \
		${PREFIX}/share/examples/$N/
	cd ${WRKSRC}/data/ && pax -rw * ${PREFIX}/share/$N/
	find ${PREFIX}/share/$N/ \( -name CVS -type d -print0 \) -o \( -name 'Makefile*' -type f -print0 \) | xargs -0r rm -rf
	${INSTALL_DATA} ${WRKSRC}/$N.conf ${PREFIX}/share/examples/$N/
.for I in $N/ustunts stunts3dedit/ustunts3dedit stuntsai/ustuntsai stuntsserver/ustuntsserver trackedit/ustuntstrackedit
	${INSTALL_PROGRAM} ${WRKSRC}/$I ${PREFIX}/bin/
.endfor

.include <bsd.port.mk>
