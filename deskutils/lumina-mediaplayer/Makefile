# $FreeBSD$

PORTNAME=	lumina-mediaplayer
PORTVERSION=	1.4.2
PORTREVISION=	201802130927
CATEGORIES=	deskutils

MAINTAINER=	jt@ixsystems.com
COMMENT=	Streaming media player from the Lumina Desktop

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	gstreamer1-qt5>=0:multimedia/gstreamer1-qt5 \
		gstreamer1-plugins-gl>=0:graphics/gstreamer1-plugins-gl

OPTIONS_DEFINE=	I18N
OPTIONS_SUB=		yes
OPTIONS_DEFAULT=	I18N
I18N_DESC= Install localization files

.include <bsd.port.options.mk>

MAKE_JOBS_UNSAFE=yes

USES=		qmake
USE_QT5=	core gui widgets network svg \
		buildtools_build x11extras multimedia concurrent
USE_GITHUB=	yes
GH_ACCOUNT=	trueos
GH_PROJECT=	lumina
GH_TAGNAME=	8dc986531c1e2c7d17ad6987b19e3c84f0f63e4c
WRKSRC_SUBDIR=	src-qt5/desktop-utils/${PORTNAME}

.if${PORT_OPTIONS:MI18N}
USE_QT5+= linguist_build
QMAKE_ARGS+=CONFIG+=WITH_I18N
.endif

.include <bsd.port.mk>
