//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CTCapability : NSObject
{
    NSString *_capabilityName;	// 8 = 0x8
    NSMutableDictionary *_capabilityFetched;	// 16 = 0x10
    NSMutableDictionary *_enabledFetched;	// 24 = 0x18
    NSMutableDictionary *_capability;	// 32 = 0x20
    NSMutableDictionary *_capabilityInfo;	// 40 = 0x28
    NSMutableDictionary *_enabledDict;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000087d1
@property(retain) NSMutableDictionary *enabledDict; // @synthesize enabledDict=_enabledDict;
@property(retain) NSMutableDictionary *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
@property(retain) NSMutableDictionary *capability; // @synthesize capability=_capability;
@property(retain) NSMutableDictionary *enabledFetched; // @synthesize enabledFetched=_enabledFetched;
@property(retain) NSMutableDictionary *capabilityFetched; // @synthesize capabilityFetched=_capabilityFetched;
@property(retain, nonatomic) NSString *capabilityName; // @synthesize capabilityName=_capabilityName;
- (void)reset;	// IMP=0x00000000000085d2
- (id)slotNum:(long long)arg1;	// IMP=0x00000000000085b9
- (_Bool)getEnabledForSlotID:(long long)arg1;	// IMP=0x0000000000008518
- (void)setEnabled:(_Bool)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000008472
- (void)setCapabilityInfoObject:(id)arg1 forKey:(id)arg2 forSlotID:(long long)arg3;	// IMP=0x0000000000008267
- (id)getCapabilityInfoObject:(id)arg1 forSlotID:(long long)arg2;	// IMP=0x00000000000081a3
- (_Bool)getCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;	// IMP=0x000000000000815f
- (void)setCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;	// IMP=0x00000000000080c6
- (_Bool)getCapabilityForSlotID:(long long)arg1;	// IMP=0x0000000000008025
- (void)setCapable:(_Bool)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000007f7f
- (void)acceptCapabilityforSlotID:(long long)arg1 status:(_Bool)arg2 canSet:(_Bool)arg3 info:(id)arg4;	// IMP=0x0000000000007dae
- (id)initWithCapabilityName:(id)arg1;	// IMP=0x0000000000007cfe

@end
