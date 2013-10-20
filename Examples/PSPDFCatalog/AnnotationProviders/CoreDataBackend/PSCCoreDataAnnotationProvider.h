//
//  PSCCoreDataAnnotationProvider.h
//  PSPDFCatalog
//
//  Copyright (c) 2013 PSPDFKit GmbH. All rights reserved.
//
//  THIS SOURCE CODE AND ANY ACCOMPANYING DOCUMENTATION ARE PROTECTED BY AUSTRIAN COPYRIGHT LAW
//  AND MAY NOT BE RESOLD OR REDISTRIBUTED. USAGE IS BOUND TO THE PSPDFKIT LICENSE AGREEMENT.
//  UNAUTHORIZED REPRODUCTION OR DISTRIBUTION IS SUBJECT TO CIVIL AND CRIMINAL PENALTIES.
//  This notice may not be removed from this file.
//

#import <Foundation/Foundation.h>

// This is an example how you could store your annotations with CoreData in the simplest possible way.
// Note: It's not a great idea performance-wise to use NSKeyedArchiver for data serialization.
@interface PSCCoreDataAnnotationProvider : NSObject <PSPDFAnnotationProvider>

// Designated initializer.
// If `databasePath` is nil, a default path will be used.
- (id)initWithDocumentProvider:(PSPDFDocumentProvider *)documentProvider databasePath:(NSString *)databasePath;

// Associated documentProvider.
@property (nonatomic, weak) PSPDFDocumentProvider *documentProvider;

// Database path/filename.
@property (nonatomic, copy, readonly) NSString *databasePath;

@end
