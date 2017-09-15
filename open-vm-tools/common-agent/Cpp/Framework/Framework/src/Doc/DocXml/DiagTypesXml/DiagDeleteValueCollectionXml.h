/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DiagDeleteValueCollectionXml_h_
#define DiagDeleteValueCollectionXml_h_

namespace Caf {

	/// Streams the DiagDeleteValueCollection class to/from XML
	namespace DiagDeleteValueCollectionXml {

		/// Adds the DiagDeleteValueCollectionDoc into the XML.
		void DIAGTYPESXML_LINKAGE add(
			const SmartPtrCDiagDeleteValueCollectionDoc diagDeleteValueCollectionDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the DiagDeleteValueCollectionDoc from the XML.
		SmartPtrCDiagDeleteValueCollectionDoc DIAGTYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif