//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKey : HMFObject
{
    NSString *_typeIdentifier;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
    NSString *_walletKeyDescription;	// 24 = 0x18
    NSString *_homeName;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    NSArray *_nfcInfos;	// 48 = 0x30
    NSString *_accessCode;	// 56 = 0x38
    NSURL *_changeAccessCodeHomeAppCustomURL;	// 64 = 0x40
    long long _color;	// 72 = 0x48
    NSURL *_customURL;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004aec06
@property(copy) NSURL *customURL; // @synthesize customURL=_customURL;
@property long long color; // @synthesize color=_color;
@property(copy) NSURL *changeAccessCodeHomeAppCustomURL; // @synthesize changeAccessCodeHomeAppCustomURL=_changeAccessCodeHomeAppCustomURL;
@property(copy) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(copy) NSArray *nfcInfos; // @synthesize nfcInfos=_nfcInfos;
@property long long state; // @synthesize state=_state;
@property(copy) NSString *homeName; // @synthesize homeName=_homeName;
@property(copy) NSString *walletKeyDescription; // @synthesize walletKeyDescription=_walletKeyDescription;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)attributeDescriptions;	// IMP=0x00000000004ae6c7
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ae502
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ae4f7
- (unsigned long long)hash;	// IMP=0x00000000004ae2e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004adec1
@property(readonly) _Bool isMissingNFCInfo;
- (id)xpcWalletKeyWithExpressEnabled:(_Bool)arg1 uwbEnabled:(_Bool)arg2 clientWalletKeyUUID:(id)arg3;	// IMP=0x00000000004adb9b
@property(readonly, copy) NSUUID *uuid;
@property(readonly, copy) NSString *labelColorValue;
@property(readonly, copy) NSString *passColorValue;
- (id)initWithPKPass:(id)arg1 flow:(id)arg2;	// IMP=0x00000000004ad5c2
- (id)initWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 state:(long long)arg3 walletKeyDescription:(id)arg4 homeName:(id)arg5 color:(long long)arg6 nfcInfos:(id)arg7;	// IMP=0x00000000004ad438

@end
