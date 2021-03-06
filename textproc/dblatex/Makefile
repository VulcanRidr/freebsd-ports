# Created by: Peter Johnson <johnson.peter@gmail.com>
# $FreeBSD$

PORTNAME=	dblatex
PORTVERSION=	0.3.9
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DocBook to LaTeX/ConTeXt Publishing

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BUILD_DEPENDS=	${LOCALBASE}/share/texmf-dist/tex/generic/ifxetex/ifxetex.sty:print/texlive-texmf
RUN_DEPENDS=	xsltproc:textproc/libxslt \
		docbook-xml>0:textproc/docbook-xml

USES=		tar:bzip2 python:2
USE_PYTHON=	distutils autoplist
USE_TEX=	dvipsk:run tex
NO_ARCH=	yes

PYDISTUTILS_INSTALLARGS+=	--catalogs=${LOCALBASE}/share/xml/catalog.ports \
				--prefix=${PREFIX}

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/SHELL_SCRIPT/ s|#!.*|#!${PYTHON_CMD}|' ${WRKSRC}/setup.py
	@${REINPLACE_CMD} -e 's,share/man/man1,man/man1,g' ${WRKSRC}/setup.py

post-patch-DOCS-off:
	@${REINPLACE_CMD} -e '/pdfdocs),/d ; /htmldoc)/d' ${WRKSRC}/setup.py

.include <bsd.port.mk>
