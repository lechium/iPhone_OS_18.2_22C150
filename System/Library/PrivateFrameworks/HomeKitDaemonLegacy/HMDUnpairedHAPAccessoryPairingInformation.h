//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryPairingRequest, HMFActivity, HMFTimer, NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject
{
    _Bool _allowAddUnauthenticatedAccessory;	// 8 = 0x8
    _Bool _provideNetworkCredentialsToAccessory;	// 9 = 0x9
    _Bool _setupCodeProvided;	// 10 = 0xa
    _Bool _wacAccessory;	// 11 = 0xb
    _Bool _legacyWAC;	// 12 = 0xc
    long long _linkType;	// 16 = 0x10
    HMFTimer *_pairingInterruptionTimer;	// 24 = 0x18
    CDUnknownBlockType _addAccessoryCompletionHandler;	// 32 = 0x20
    CDUnknownBlockType _addAccessoryProgressHandler;	// 40 = 0x28
    CDUnknownBlockType _setupCodeProviderCompletionHandler;	// 48 = 0x30
    HMFTimer *_pairingRetryTimer;	// 56 = 0x38
    HMFTimer *_reconfirmTimer;	// 64 = 0x40
    HMFActivity *_pairingActivity;	// 72 = 0x48
    HAPAccessoryPairingRequest *_pairingRequest;	// 80 = 0x50
    NSString *_accessoryName;	// 88 = 0x58
    NSUUID *_accessoryUUID;	// 96 = 0x60
    NSUUID *_homeUUID;	// 104 = 0x68
    NSString *_accessoryServerIdentifier;	// 112 = 0x70
    NSString *_setupCode;	// 120 = 0x78
    NSString *_setupID;	// 128 = 0x80
    NSUUID *_setupAuthTokenUUID;	// 136 = 0x88
    NSData *_setupAuthToken;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000909673
@property(nonatomic) _Bool legacyWAC; // @synthesize legacyWAC=_legacyWAC;
@property(nonatomic) _Bool wacAccessory; // @synthesize wacAccessory=_wacAccessory;
@property(retain, nonatomic) NSData *setupAuthToken; // @synthesize setupAuthToken=_setupAuthToken;
@property(retain, nonatomic) NSUUID *setupAuthTokenUUID; // @synthesize setupAuthTokenUUID=_setupAuthTokenUUID;
@property(retain, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property(retain, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property(retain, nonatomic) NSString *accessoryServerIdentifier; // @synthesize accessoryServerIdentifier=_accessoryServerIdentifier;
@property(copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) HAPAccessoryPairingRequest *pairingRequest; // @synthesize pairingRequest=_pairingRequest;
@property(nonatomic) __weak HMFActivity *pairingActivity; // @synthesize pairingActivity=_pairingActivity;
@property(nonatomic) _Bool setupCodeProvided; // @synthesize setupCodeProvided=_setupCodeProvided;
@property(nonatomic) _Bool provideNetworkCredentialsToAccessory; // @synthesize provideNetworkCredentialsToAccessory=_provideNetworkCredentialsToAccessory;
@property(nonatomic) _Bool allowAddUnauthenticatedAccessory; // @synthesize allowAddUnauthenticatedAccessory=_allowAddUnauthenticatedAccessory;
@property(retain, nonatomic) HMFTimer *reconfirmTimer; // @synthesize reconfirmTimer=_reconfirmTimer;
@property(retain, nonatomic) HMFTimer *pairingRetryTimer; // @synthesize pairingRetryTimer=_pairingRetryTimer;
@property(copy, nonatomic) CDUnknownBlockType setupCodeProviderCompletionHandler; // @synthesize setupCodeProviderCompletionHandler=_setupCodeProviderCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType addAccessoryProgressHandler; // @synthesize addAccessoryProgressHandler=_addAccessoryProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType addAccessoryCompletionHandler; // @synthesize addAccessoryCompletionHandler=_addAccessoryCompletionHandler;
@property(retain, nonatomic) HMFTimer *pairingInterruptionTimer; // @synthesize pairingInterruptionTimer=_pairingInterruptionTimer;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
- (_Bool)matchesAccessoryServer:(id)arg1;	// IMP=0x00000000009092dc
- (_Bool)matchesUnpairedAccessory:(id)arg1;	// IMP=0x0000000000909209
- (id)description;	// IMP=0x0000000000909028
- (id)initWithAccessoryDescription:(id)arg1 linkType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 pairingRequest:(id)arg5;	// IMP=0x0000000000908da0
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 linkType:(long long)arg3 setupCode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 setupCodeProvider:(CDUnknownBlockType)arg6 pairingRequest:(id)arg7;	// IMP=0x0000000000908c06

@end
