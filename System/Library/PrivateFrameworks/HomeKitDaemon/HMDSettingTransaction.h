//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDSettingTransaction : NSObject
{
    _Bool _initialCreation;	// 8 = 0x8
    NSString *_transactionLabel;	// 16 = 0x10
    NSMutableSet *_updateModels;	// 24 = 0x18
    NSMutableSet *_removeUUIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000397bd9
@property(readonly) _Bool initialCreation; // @synthesize initialCreation=_initialCreation;
@property(readonly) NSMutableSet *removeUUIDs; // @synthesize removeUUIDs=_removeUUIDs;
@property(readonly) NSMutableSet *updateModels; // @synthesize updateModels=_updateModels;
@property(readonly) NSString *transactionLabel; // @synthesize transactionLabel=_transactionLabel;
- (void)addModelToBeUpdated:(id)arg1;	// IMP=0x0000000000397b29
- (void)removeModelWithIdentifier:(id)arg1;	// IMP=0x0000000000397ac0
- (void)addModel:(id)arg1;	// IMP=0x0000000000397a57
- (void)addSettingModel:(id)arg1;	// IMP=0x00000000003978e3
- (id)initForInitialCreationWithTransactionLabel:(id)arg1;	// IMP=0x0000000000397816
- (id)initWithTransactionLabel:(id)arg1;	// IMP=0x0000000000397749

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
