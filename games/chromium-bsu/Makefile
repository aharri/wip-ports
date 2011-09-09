# $OpenBSD$

COMMENT =		fast paced arcade-style space shooter
DISTNAME =		chromium-bsu-0.9.15
CATEGORIES =		games x11
HOMEPAGE =		http://chromium-bsu.sourceforge.net/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# Clarified Artistic License
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		GL GLU X11 alut c expat fontconfig freetype ftgl glpng \
			openal pthread stdc++ z m SDL SDL_image

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=chromium-bsu/}

MODULES =		devel/gettext
LIB_DEPENDS =		graphics/ftgl	\
			graphics/glpng	\
			audio/freealut	\
			audio/openal	\
			devel/sdl	\
			devel/sdl-image

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-sdl
CONFIGURE_ENV =		LDFLAGS="-L${PREFIX}/lib -lz"

NO_REGRESS =		Yes

CFLAGS =		-pthread

.include <bsd.port.mk>
