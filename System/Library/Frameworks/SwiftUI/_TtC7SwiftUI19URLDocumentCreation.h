//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI19URLDocumentCreation : NSObject
{
    MISSING_TYPE *strategies;	// 8 = 0x8
    MISSING_TYPE *contentTypes;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_aggregatedContentTypes;	// 24 = 0x18
    MISSING_TYPE *onDocumentOpen;	// 32 = 0x20
    MISSING_TYPE *newDocumentHandler;	// 48 = 0x30
    MISSING_TYPE *canCreateNewDocuments;	// 64 = 0x40
    MISSING_TYPE *documentBrowserContextMenu;	// 68 = 0x44
    MISSING_TYPE *$__lazy_storage_$_documentBrowser;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000e8eb30
- (id)init;	// IMP=0x0000000000e8ead0
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0000000000e8ffe0
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;	// IMP=0x0000000000e8ff10
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e8fdb0

@end

