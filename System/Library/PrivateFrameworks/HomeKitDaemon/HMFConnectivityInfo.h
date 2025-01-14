//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFWoBLEInfo, HMFWoWLANInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMFConnectivityInfo : HMFObject
{
    NSString *_accessoryIdentifier;	// 8 = 0x8
    HMFWoBLEInfo *_woBLEInfo;	// 16 = 0x10
    NSArray *_woWLANInfos;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0010000000839d92
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000839d8a
+ (id)connectivityInfoWithAccessoryIdentifier:(id)arg1 wakeConfiguration:(id)arg2;	// IMP=0x0010000000839abd
- (void).cxx_destruct;	// IMP=0x0000000000839a7b
@property(retain, nonatomic) NSArray *woWLANInfos; // @synthesize woWLANInfos=_woWLANInfos;
@property(retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)description;	// IMP=0x0000000000839963
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000083963e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008394ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008392f6
- (unsigned long long)hash;	// IMP=0x0000000000839240
@property(readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
- (id)initWithAccessoryIdentifier:(id)arg1 woBLEInfo:(id)arg2 woWLANInfos:(id)arg3;	// IMP=0x0000000000838e66

@end

