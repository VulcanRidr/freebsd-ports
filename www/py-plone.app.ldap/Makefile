# Created by: Lawrence Stewart <lstewart@FreeBSD.org>
# $FreeBSD$

PORTNAME=	plone.app.ldap
PORTVERSION=	1.3.2
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	LDAP control panel for Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=2.1.0:devel/py-Products.CMFCore@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Products.PloneLDAP>=1.0:www/py-Products.PloneLDAP@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}plone.memoize>0:www/py-plone.memoize@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>0:devel/py-Products.GenericSetup@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ldap>0:net/py-ldap@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>0:devel/py-zope.component@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>0:textproc/py-zope.i18nmessageid@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:devel/py-zope.interface@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.lifecycleevent>0:devel/py-zope.lifecycleevent@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>0:devel/py-zope.schema@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
