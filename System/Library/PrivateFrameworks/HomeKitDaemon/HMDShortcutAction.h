//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

__attribute__((visibility("hidden")))
@interface HMDShortcutAction
{
    NSData *_shortcutData;	// 8 = 0x8
    WFHomeWorkflow *_shortcut;	// 16 = 0x10
    WFHomeWorkflowController *_controller;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a336b
+ (id)logCategory;	// IMP=0x00100000001a333b
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3;	// IMP=0x00100000001a307e
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00100000001a3069
- (void).cxx_destruct;	// IMP=0x000000000019eccf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019ec2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ebb3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019eb0f
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000019e8cb
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000019e825
- (Class)modelClass;	// IMP=0x000000000019e814
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x000000000019e4ef
- (id)associatedAccessories;	// IMP=0x000000000019e4e2
- (_Bool)isStaleWithAccessory:(id)arg1;	// IMP=0x000000000019e4da
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x000000000019e462
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000019e45a
- (unsigned long long)entitlementsForNotification;	// IMP=0x000000000019e427
- (_Bool)isUnsecuringAction;	// IMP=0x000000000019e3c5
- (_Bool)requiresDeviceUnlock;	// IMP=0x000000000019e363
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019e053
- (id)stateDump;	// IMP=0x000000000019dee3
- (id)dictionaryRepresentation;	// IMP=0x000000000019ddd3
- (unsigned long long)type;	// IMP=0x000000000019ddc8
- (void)dealloc;	// IMP=0x000000000019dd7a
- (id)removeShortcut;	// IMP=0x000000000019dd4e
- (id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3;	// IMP=0x000000000019dc9b

@end
