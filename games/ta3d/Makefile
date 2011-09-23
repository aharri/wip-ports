# $OpenBSD$

USE_SYSTRACE=Yes
COMMENT=	remake of Total Annihilation (RTS game)

V=		0.5.4
PKGNAME=	ta3d-$V
DISTNAME=	ta3d-v-${V:S/./-/g}-src
CATEGORIES=	games x11

HOMEPAGE=	http://ta3d.darkstars.co.uk/
MASTER_SITES=	http://downloads.ta3d.org/sources/

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

#WANTLIB=	c m pthread
MODULES =	devel/cmake
LIB_DEPENDS =	games/allegro
#LIB_DEPENDS=	SDL.>=7::devel/sdl \
#		SDL_net.>=1::devel/sdl-net \
#		SDL_mixer.>=3::devel/sdl-mixer
#RUN_DEPENDS=	:tk-8.4.*:x11/tk/8.4
#BUILD_DEPENDS=	archivers/p7zip

#REGRESS_TARGET=		check
#CONFIGURE_STYLE=	gnu autoconf# automake
#CONFIGURE_ENV=		CFLAGS='-ggdb' \
#			CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include" \
#			LDFLAGS='-L${X11BASE}/lib -lGL -lGLU'
#AUTOCONF_VERSION=	2.61
#AUTOMAKE_VERSION=	1.10

WRKDIST=	${WRKDIR}/ta3d

#do-extract:
#	@7z x ${FULLDISTDIR}/${DISTNAME}${EXTRACT_SUFX} -o${WRKDIR} >/dev/null

.include <bsd.port.mk>
