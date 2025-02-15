//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYDocumentWorkflowsRepository;

__attribute__((visibility("hidden")))
@interface SYDocumentWorkflowsServiceHandle : NSObject
{
    SYDocumentWorkflowsRepository *_repository;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000038468
@property(readonly, nonatomic) SYDocumentWorkflowsRepository *repository; // @synthesize repository=_repository;
- (void)unlinkDocumentsWithRelatedUniqueIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037e5a
- (void)updateLinkedDocumentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003740e
- (id)_createOpenLastModifiedDocumentImpl;	// IMP=0x00000000000373f5
- (void)openLastModifiedDocument:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000371cc
- (void)hasLastModifiedDocument:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036d7d
- (void)hasOriginalDocumentForFileAtURL:(id)arg1 withAttributes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036643
- (id)_fallbackUserActivityForDocumentWithAttributes:(id)arg1;	// IMP=0x000000000003657f
- (void)returnToSenderDocument:(id)arg1 withAttributes:(id)arg2 shouldCreateNewMessage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035cd6
- (void)saveUserActivity:(id)arg1 forDocumentIndexKey:(id)arg2 sourceBundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035b2e
- (id)_fetchUserActivityWithRelatedUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000035b18
- (void)fetchUserActivityForDocumentIndexKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035994
- (void)fetchAttributesForDocumentsWithIndexKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003597b
- (id)initWithRepository:(id)arg1;	// IMP=0x0000000000035910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

