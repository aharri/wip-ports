# $OpenBSD$

COMMENT=	action flight simulator

V=		1.3.2
DISTNAME=	gl-117-$V-src
PKGNAME=	gl117-$V
EXTRACT_SUFX=	.tar.bz2
CATEGORIES=	games x11

MAINTAINER=	Antti Harri <iku@openbsd.fi>
HOMEPAGE=	http://www.heptargon.de/gl-117/gl-117.html
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=gl-117/}

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB += GL GLU SDL SDL_mixer Xi Xmu c glut m pthread stdc++

LIB_DEPENDS =	devel/sdl \
		devel/sdl-mixer \
		graphics/freeglut

CONFIGURE_ENV=		LDFLAGS='-pthread -lXmu -lXi'
CONFIGURE_STYLE=	gnu
NO_REGRESS=		Yes

.include <bsd.port.mk>
