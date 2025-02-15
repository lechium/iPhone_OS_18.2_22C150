//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStore, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreTransactionActions
{
    _Bool _postApplyActionsInvoked;	// 56 = 0x38
    NSMutableArray *_postApplyActions;	// 64 = 0x40
    NSMutableSet *_postApplyActionNames;	// 72 = 0x48
    _Bool _local;	// 80 = 0x50
    _Bool _changed;	// 81 = 0x51
    _Bool _saveToAssistant;	// 82 = 0x52
    _Bool _saveToSharedUserAccount;	// 83 = 0x53
    NSMutableDictionary *_userInfo;	// 88 = 0x58
    HMDBackingStore *_backingStore;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00600000005f8b7d
- (void).cxx_destruct;	// IMP=0x00000000005f8b2c
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) _Bool saveToSharedUserAccount; // @synthesize saveToSharedUserAccount=_saveToSharedUserAccount;
@property(readonly, nonatomic) _Bool saveToAssistant; // @synthesize saveToAssistant=_saveToAssistant;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) _Bool local; // @synthesize local=_local;
- (id)description;	// IMP=0x00000000005f89f1
- (id)logIdentifier;	// IMP=0x00000000005f89e4
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)invokePostApplyActions;	// IMP=0x00000000005f8823
- (_Bool)addPostApplyActionIfNotPresent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005f874a
- (void)addPostApplyActionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005f8694
- (void)markSaveToSharedUserAccount;	// IMP=0x00000000005f8683
- (void)markSaveToAssistant;	// IMP=0x00000000005f8672
- (void)markChanged;	// IMP=0x00000000005f8661
- (void)markLocalChanged;	// IMP=0x00000000005f8650
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;	// IMP=0x00000000005f852a

@end

