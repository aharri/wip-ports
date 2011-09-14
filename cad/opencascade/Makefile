# $OpenBSD$

#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#SHARED_ONLY =		???

COMMENT =		3D modeling & numerical simulation
DISTNAME =		OpenCASCADE651
PKGNAME =		opencascade-6.5.1

#SHARED_LIBS =		???
CATEGORIES =		cad devel

HOMEPAGE =		http://www.opencascade.org/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

PERMIT_PACKAGE_CDROM =	Unclear
PERMIT_PACKAGE_FTP =	Unclear
PERMIT_DISTFILES_CDROM =Unclear
PERMIT_DISTFILES_FTP =	Unclear

#WANTLIB =		???

FETCH_MANUALLY +=	"You must fetch ${DISTNAME}${EXTRACT_SUFX}"
FETCH_MANUALLY +=	"from ${HOMEPAGE}"
#MASTER_SITES =		
#MASTER_SITES =		${HOMEPAGE}
#MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=subdir/}
#MASTER_SITES =		${MASTER_SITE_foo:=subdir/}
# if more master sites are needed...
#MASTER_SITES0 =
# ...
#DISTFILES =		???
#EXTRACT_ONLY =		???
#EXTRACT_SUFX =		.tar.bz2

#DIST_SUBDIR =		???

# PATCHFILES are also retrieved from MASTER_SITES*
#PATCHFILES =		???
#PATCH_DIST_STRIP =	-p0

# Dependencies
#
#MODULES =		???
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#REGRESS_DEPENDS =	???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#REGRESS_FLAGS =	???

# build/configuration variables
#
#SEPARATE_BUILD =	simple (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that uses libtool should use this option,
# unless there is a really good reason not to.
#USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	autoconf
#CONFIGURE_SCRIPT =	??? (if other than configure)
#CONFIGURE_ARGS +=	${CONFIGURE_SHARED}
#CONFIGURE_ENV =	???

# for gnu stuff
AUTOCONF_VERSION =	2.57
AUTOMAKE_VERSION =	1.7
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}

# Is the build automagic or is it interactive
#
#IS_INTERACTIVE =		Yes
#REGRESS_IS_INTERACTIVE =	Yes

# Things that we don't want to do for this port/package
# Generally, DON'T set anything to No if it's not needed.
# The time gained is not worth it.
#
#NO_BUILD =		Yes
#NO_REGRESS =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
WRKDIST =		${WRKDIR}
WRKSRC =		${WRKDIST}/ros
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#REGRESS_TARGET =	???

#do-extract:
#	mkdir "${WRKDIR}/${DISTNAME}"
#	cd "${WRKDIST}" && gzip -dc ${FULLDISTDIR}/${EXTRACT_ONLY} | tar xf -

.include <bsd.port.mk>
