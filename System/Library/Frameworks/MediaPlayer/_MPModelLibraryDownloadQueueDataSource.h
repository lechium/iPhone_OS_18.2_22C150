//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryEntityTranslator, MPModelLibraryDownloadQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface _MPModelLibraryDownloadQueueDataSource : NSObject
{
    MPModelLibraryDownloadQueueRequest *_request;	// 8 = 0x8
    MPMediaLibraryEntityTranslator *_entityTranslator;	// 16 = 0x10
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;	// 24 = 0x18
    shared_ptr_274c5e8b _entityQueryResult;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000278616
- (void).cxx_destruct;	// IMP=0x00000000002785da
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x000000000027827e
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000277f99
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000277dd9
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000277dd1
- (unsigned long long)numberOfSections;	// IMP=0x0000000000277dc6
- (id)initWithRequest:(id)arg1;	// IMP=0x000000000027703d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

