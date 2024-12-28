//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : NSObject
{
    NSString *_storeName;	// 8 = 0x8
    NSString *_localPeerID;	// 16 = 0x10
    PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
    NSString *_uuidString;	// 32 = 0x20
    PFUbiquityLocation *_uuidFileLocation;	// 40 = 0x28
    NSURL *_presentedItemURL;	// 48 = 0x30
    _Bool _usedExistingUUIDFile;	// 56 = 0x38
}

@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003554e3
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000354c7e
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;	// IMP=0x0000000000354c1b
- (id)init;	// IMP=0x0000000000354bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R

@property(readonly, copy) NSURL *primaryPresentedItemURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,R,C

@property(readonly) Class superclass;

@end
