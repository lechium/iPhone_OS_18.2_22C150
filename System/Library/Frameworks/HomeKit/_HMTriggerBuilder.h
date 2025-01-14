//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMActionSetBuilder, HMHome, HMTriggerPolicy, NSArray, NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMTriggerBuilder
{
    NSString *_name;	// 16 = 0x10
    _Bool _nameIsConfigured;	// 24 = 0x18
    _Bool _enabled;	// 25 = 0x19
    HMTriggerPolicy *_policy;	// 32 = 0x20
    NSMutableArray *_actionSets;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0010000000036a81
- (void).cxx_destruct;	// IMP=0x00000000000366ae
- (void)addActionSetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036692
- (void)addActionSetOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036436
@property(readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036007
- (void)removeActionSet:(id)arg1;	// IMP=0x0000000000035f36
- (void)addActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035c06
- (void)addActionSet:(id)arg1;	// IMP=0x0000000000035b32
@property(copy, nonatomic) NSArray *actionSets;
- (void)enable:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003560d
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)removePolicy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035420
- (void)updatePolicy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003528a
@property(retain, nonatomic) HMTriggerPolicy *policy;
- (void)updateName:(id)arg1 configuredName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034f21
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034f09
@property(readonly, copy, nonatomic) NSString *configuredName;
- (void)setName:(id)arg1 isConfigured:(_Bool)arg2;	// IMP=0x0000000000034e4a
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool nameIsConfigured;
- (id)initWithContext:(id)arg1 home:(id)arg2;	// IMP=0x0000000000034d57
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000034d07
- (Class)class;	// IMP=0x0000000000034c5f
- (id)creatorDevice;	// IMP=0x0000000000036db7
- (id)creator;	// IMP=0x0000000000036daf
- (id)lastFireDate;	// IMP=0x0000000000036da7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMHome *home;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

