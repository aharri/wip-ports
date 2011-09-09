# $OpenBSD$

# TODO:
# - fix the few remaining chdir cases to something better
# - implement file/path class to retrieve paths

COMMENT-main =		Tapan Kaikki Bloodshed: top view shooting game
COMMENT-editor =	editor for Tapan Kaikki Bloodshed
V =			4.08.20110831
DISTNAME =		tkb-$V
PKGNAME-main =		tkb-$V
PKGNAME-editor =	tkb-editor-$V
CATEGORIES =		games x11

HOMEPAGE =		http://www.errorfree.eu.org/

MULTI_PACKAGES =	-main -editor

MAINTAINER =		Antti Harri <iku@openbsd.fi>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB-main =		SDL SDL_image SDL_net c jpeg m png pthread stdc++ \
			tiff z FLAC SDL_mixer mikmod ogg smpeg vorbis vorbisfile 
WANTLIB-editor =	GL X11 Xcomposite Xcursor Xdamage Xext \
			Xfixes Xi Xinerama Xrandr Xrender expat \
			fontconfig freetype iconv pixman-1 pthread-stubs xcb \
			xcb-render xcb-shm SDL SDL_image SDL_net atk-1.0 c cairo \
			gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 \
			gobject-2.0 gthread-2.0 gtk-x11-2.0 intl jpeg m pango-1.0 \
			pangocairo-1.0 pangoft2-1.0 png pthread stdc++ tiff z

#MASTER_SITES =		http://www.errorfree.eu.org/games/
MASTER_SITES =		http://openbsd.fi/dist/

BUILD_DEPENDS-main =	archivers/unzip
LIB_DEPENDS-main =	devel/sdl \
			devel/sdl-image \
			audio/flac \
			audio/libmikmod \
			devel/sdl-mixer \
			devel/sdl-net
LIB_DEPENDS-editor =	devel/sdl \
			devel/sdl-image \
			x11/gtk+2
RUN_DEPENDS-editor =	${FULLPKGNAME-main}:${BUILD_PKGPATH},-main

NO_REGRESS =		Yes

.include <bsd.port.mk>
