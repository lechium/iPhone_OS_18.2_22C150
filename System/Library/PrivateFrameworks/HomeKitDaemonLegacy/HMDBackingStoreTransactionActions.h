//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStore, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreTransactionActions
{
    _Bool _postApplyActionsInvoked;	// 40 = 0x28
    NSMutableArray *_postApplyActions;	// 48 = 0x30
    NSMutableSet *_postApplyActionNames;	// 56 = 0x38
    _Bool _local;	// 64 = 0x40
    _Bool _changed;	// 65 = 0x41
    _Bool _saveToAssistant;	// 66 = 0x42
    _Bool _saveToSharedUserAccount;	// 67 = 0x43
    NSMutableDictionary *_userInfo;	// 72 = 0x48
    HMDBackingStore *_backingStore;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00600000003fe0d0
- (void).cxx_destruct;	// IMP=0x00000000003fe07f
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) _Bool saveToSharedUserAccount; // @synthesize saveToSharedUserAccount=_saveToSharedUserAccount;
@property(readonly, nonatomic) _Bool saveToAssistant; // @synthesize saveToAssistant=_saveToAssistant;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) _Bool local; // @synthesize local=_local;
- (id)description;	// IMP=0x00000000003fdf44
- (id)logIdentifier;	// IMP=0x00000000003fdf37
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)invokePostApplyActions;	// IMP=0x00000000003fdd76
- (_Bool)addPostApplyActionIfNotPresent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fdc9d
- (void)addPostApplyActionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fdbe7
- (void)markSaveToSharedUserAccount;	// IMP=0x00000000003fdbd6
- (void)markSaveToAssistant;	// IMP=0x00000000003fdbc5
- (void)markChanged;	// IMP=0x00000000003fdbb4
- (void)markLocalChanged;	// IMP=0x00000000003fdba3
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;	// IMP=0x00000000003fda7d

@end
