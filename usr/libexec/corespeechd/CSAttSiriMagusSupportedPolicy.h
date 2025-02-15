//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAttSiriMagusSupportedPolicy : NSObject
{
    _Bool _isAssetMagusSupported;	// 8 = 0x8
}

+ (_Bool)_isInputOriginSupportedByContinuousConversation:(id)arg1;	// IMP=0x0020000000060965
+ (_Bool)isCurrentlyInActiveCall;	// IMP=0x0010000000060912
+ (_Bool)isCurrentlyInSplitterState;	// IMP=0x00100000000608c3
+ (void)initialize;	// IMP=0x0010000000060820
+ (id)sharedInstance;	// IMP=0x00100000000607f0
@property _Bool isAssetMagusSupported; // @synthesize isAssetMagusSupported=_isAssetMagusSupported;
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;	// IMP=0x00100000000607ae
- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;	// IMP=0x00100000000607a8
- (void)mitigationAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x0010000000060793
- (void)_updateWithAsset:(id)arg1;	// IMP=0x0010000000060694
- (void)start;	// IMP=0x0010000000060556
- (_Bool)_isMagusSupportedWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 isInSplitterMode:(_Bool)arg3 isInActiveCall:(_Bool)arg4 isSupportedRequestType:(_Bool)arg5 audioSessionId:(unsigned int)arg6 recordDeviceInfo:(id)arg7;	// IMP=0x001000000005fb9d
- (_Bool)_isRouteValidForEchoCancellationWithAppleSiliconMac:(id)arg1;	// IMP=0x001000000005fb95
- (_Bool)isMagusSupportedWithAudioRecordContext:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 audioSessionId:(unsigned int)arg4 recordDeviceInfo:(id)arg5;	// IMP=0x001000000005fab2
- (_Bool)isMagusSupportedWithInputOrigin:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3;	// IMP=0x001000000005f9e5
- (_Bool)isMagusSupportedWithInputOrigin:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 isInSplitterMode:(_Bool)arg4 isInActiveCall:(_Bool)arg5;	// IMP=0x001000000005f93c
- (_Bool)getIsMagusSupported;	// IMP=0x001000000005f92a
- (_Bool)getIsAssetMagusSupported;	// IMP=0x001000000005f921

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

