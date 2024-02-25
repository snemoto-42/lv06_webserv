<?xml version="1.0" encoding="UTF-8"?>

<xsl:output method="html" encoding="UTF-8"/>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
    <html>
        <head>
            <title>Autoindex</title>
        </head>
        <body>
            <h2>Directory Listing</h2>
            <u1>
                <xsl:apply-templates select="directory/file"/>
            </u1>
        </body>
    </html>
</xsl:template>

<xsl:template match="file">
    <li>
        <xsl:value-of select=".">
    </li>
</xsl:templete>
