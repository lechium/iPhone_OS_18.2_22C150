//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_serializeFields;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000004b8ce1
+ (id)languageValueKeyPaths;	// IMP=0x00100000004b8cd4
+ (id)numberValueKeyPaths;	// IMP=0x00100000004b8cc7
+ (id)booleanValueKeyPaths;	// IMP=0x00100000004b8cba
+ (id)keyPaths;	// IMP=0x00100000004b8bd2
+ (id)fieldKeyForKeyPath:(id)arg1;	// IMP=0x00100000004b8baf
- (void).cxx_destruct;	// IMP=0x00000000004b8b9c
- (id)attributeDescriptions;	// IMP=0x00000000004b8ad0
- (id)serializeFields;	// IMP=0x00000000004b8a70
- (void)setLanguageValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000004b870c
- (void)setNumberValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000004b851d
- (void)setBoolValue:(_Bool)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000004b82f3
- (id)init;	// IMP=0x00000000004b8288

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

