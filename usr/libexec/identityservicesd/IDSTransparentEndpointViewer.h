//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTransparentEndpointViewer : NSObject
{
}

- (void)internal_triggerKTCDPAccountStatusNotificationWithAccountStatus:(long long)arg1;	// IMP=0x0040000000489a65
- (void)internal_nukeTransparencyState:(CDUnknownBlockType)arg1;	// IMP=0x001000000048999b
- (void)internal_updateCurrentDeviceInKVS:(CDUnknownBlockType)arg1;	// IMP=0x001000000048960a
- (void)internal_fetchCurrentDeviceKVSKey:(CDUnknownBlockType)arg1;	// IMP=0x001000000048933c
- (void)internal_removeAllKVSTrustedDevices:(CDUnknownBlockType)arg1;	// IMP=0x001000000048919f
- (void)internal_fetchVerifierKVSTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000488ff4
- (void)internal_kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000004889c8
- (void)internal_fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000048869a
- (void)internal_fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000488521
- (id)_keyTransparencyEntriesForEndpoints:(id)arg1;	// IMP=0x00100000004883b4
- (id)_peerIDManager;	// IMP=0x001000000048839b
- (id)_registrationKeyManager;	// IMP=0x0010000000488382
- (id)_cloudKitContainer;	// IMP=0x0010000000488332
- (id)_verifier;	// IMP=0x0010000000488319

@end

