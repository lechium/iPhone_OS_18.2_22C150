//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServer.h>

@class HMDAccessoryServerBrowserDemo, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDAccessoryServerDemo : HAPAccessoryServer
{
    _Bool _testMode;	// 32 = 0x20
    _Bool __paired;	// 33 = 0x21
    _Bool __hasPairings;	// 34 = 0x22
    NSNumber *_category;	// 40 = 0x28
    NSDictionary *_accessoryInfo;	// 48 = 0x30
    HMDAccessoryServerBrowserDemo *_browser;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000061a757
@property(nonatomic) _Bool _hasPairings; // @synthesize _hasPairings=__hasPairings;
@property(nonatomic) _Bool _paired; // @synthesize _paired=__paired;
@property(nonatomic) __weak HMDAccessoryServerBrowserDemo *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSDictionary *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(readonly) _Bool testMode; // @synthesize testMode=_testMode;
- (void)setCategory:(id)arg1;	// IMP=0x000000000061a6a2
- (id)category;	// IMP=0x000000000061a691
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;	// IMP=0x000000000061a5b3
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x000000000061a52a
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000061a514
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061a3ad
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000061a036
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000619ed1
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000619d6c
- (_Bool)tryPairingPassword:(id)arg1 onboardingSetupPayloadString:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000619d64
- (_Bool)stopPairingWithError:(id *)arg1;	// IMP=0x0000000000619d5c
- (void)continuePairingAfterAuthPrompt;	// IMP=0x0000000000619d56
- (void)startPairingWithRequest:(id)arg1;	// IMP=0x0000000000619a33
- (void)processCharacteristicWrite:(id)arg1 value:(id)arg2;	// IMP=0x00000000006188fa
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x0000000000618629
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000617dc3
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006175fb
- (void)sendDelayedResponse:(unsigned long long)arg1 responses:(id)arg2 readOperation:(_Bool)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006172b8
- (void)_parseAttributeDatabase:(id)arg1;	// IMP=0x0000000000616901
- (void)discoverAccessories;	// IMP=0x00000000006168e4
- (long long)linkType;	// IMP=0x00000000006168d9
- (id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(_Bool)arg4 keyStore:(id)arg5 testMode:(_Bool)arg6 browser:(id)arg7;	// IMP=0x00000000006167a3
- (id)initCommon:(id)arg1 browser:(id)arg2;	// IMP=0x0000000000616732
- (_Bool)hasPairings;	// IMP=0x0000000000616722
- (_Bool)isPaired;	// IMP=0x0000000000616712

@end
