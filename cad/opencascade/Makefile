# $OpenBSD$

USE_SYSTRACE =		Yes

#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#SHARED_ONLY =		???

COMMENT =		3D modeling & numerical simulation
V =			6.5.1
DISTNAME =		OpenCASCADE${V:S/.//g}
PKGNAME =		opencascade-$V

#SHARED_LIBS =		???
CATEGORIES =		cad devel

HOMEPAGE =		http://www.opencascade.org/

MAINTAINER =		Antti Harri <iku@openbsd.fi>

PERMIT_PACKAGE_CDROM =	Unclear
PERMIT_PACKAGE_FTP =	Unclear
PERMIT_DISTFILES_CDROM =Unclear
PERMIT_DISTFILES_FTP =	Unclear

#WANTLIB =		???

MASTER_SITES =		http://files.opencascade.com/OCCT/OCC_$V_release/
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

MODULES =		lang/tcl \
			x11/tk
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
LIB_DEPENDS =		graphics/freeimage \
			graphics/ftgl \
			${MODTCL_LIB_DEPENDS} \
			${MODTK_LIB_DEPENDS}
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
USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	autoconf dest
#CONFIGURE_SCRIPT =	??? (if other than configure)
CONFIGURE_ARGS =	--with-freeimage=${PREFIX} \
			--with-tcl="${MODTCL_LIBDIR}" \
			--with-tk="${MODTK_LIBDIR}" \
			--with-freetype="${X11BASE}" \
			--with-ftgl="${PREFIX}"
CONFIGURE_ENV =		CPPFLAGS="${CFLAGS}" \
			LDFLAGS="${LDFLAGS}"

# for gnu stuff
AUTOCONF_VERSION =	2.57
#AUTOMAKE_VERSION =	1.8
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC}

#REGRESS_IS_INTERACTIVE =	Yes

#NO_REGRESS =		Yes

# Overrides for default values
#
CFLAGS =		-I${X11BASE}/include
#-I${PREFIX}/include
LDFLAGS =		-L${X11BASE}/lib -lm
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

.include <bsd.port.mk>
