# $OpenBSD$

# TODO:
# - fix the few remaining chdir cases to something better
# - implement file/path class to retrieve paths

COMMENT-main =		Tapan Kaikki Bloodshed: top view shooting game
COMMENT-editor =	editor for Tapan Kaikki Bloodshed
V =			4.08.20111102
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

WANTLIB-main += FLAC SDL SDL_image SDL_mixer SDL_net c jpeg m mikmod
WANTLIB-main += ogg png pthread smpeg stdc++ tiff vorbis vorbisfile
WANTLIB-main += z

WANTLIB-editor += GL SDL SDL_image SDL_net X11 Xcomposite Xcursor Xdamage
WANTLIB-editor += Xext Xfixes Xi Xinerama Xrandr Xrender atk-1.0 c cairo
WANTLIB-editor += expat fontconfig freetype gdk-x11-2.0 gdk_pixbuf-2.0
WANTLIB-editor += gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0
WANTLIB-editor += gtk-x11-2.0 iconv intl jpeg m pango-1.0 pangocairo-1.0
WANTLIB-editor += pangoft2-1.0 pixman-1 png pthread pthread-stubs stdc++
WANTLIB-editor += tiff xcb xcb-render xcb-shm z

#MASTER_SITES =		http://www.errorfree.eu.org/games/
MASTER_SITES =		http://openbsd.fi/dist/

BUILD_DEPENDS-main =	archivers/unzip
LIB_DEPENDS-main =	devel/sdl \
			devel/sdl-image \
			audio/flac \
			audio/libmikmod \
			devel/sdl-mixer \
			devel/sdl-net
LIB_DEPENDS-editor =	devel/atk \
			devel/glib2 \
			devel/pango \
			devel/sdl \
			devel/sdl-image \
			x11/gtk+2
RUN_DEPENDS-editor =	${FULLPKGNAME-main}:${BUILD_PKGPATH},-main

MAKE_ENV =		CXX="${CXX}"

NO_REGRESS =		Yes

.include <bsd.port.mk>
