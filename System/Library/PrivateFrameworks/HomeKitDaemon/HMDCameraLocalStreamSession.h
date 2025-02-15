//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraMediaParameterSelection, HMDCameraNetworkConfig, NSString;
@protocol HMDCameraRemoteStreamSenderProtocol;

__attribute__((visibility("hidden")))
@interface HMDCameraLocalStreamSession
{
    id <HMDCameraRemoteStreamSenderProtocol> _streamSender;	// 8 = 0x8
    HMDCameraMediaParameterSelection *_parameterSelection;	// 16 = 0x10
    unsigned long long _streamState;	// 24 = 0x18
    HMDCameraNetworkConfig *_localNetworkConfig;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000d68261
- (void).cxx_destruct;	// IMP=0x0000000000d681c8
@property(readonly) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property unsigned long long streamState; // @synthesize streamState=_streamState;
@property(retain) HMDCameraMediaParameterSelection *parameterSelection; // @synthesize parameterSelection=_parameterSelection;
@property(readonly) id <HMDCameraRemoteStreamSenderProtocol> streamSender; // @synthesize streamSender=_streamSender;
- (id)logIdentifier;	// IMP=0x0000000000d68103
@property(readonly, copy) NSString *stateDescription;
- (_Bool)containsState:(long long)arg1;	// IMP=0x0000000000d67ffd
- (void)updateState:(long long)arg1;	// IMP=0x0000000000d67e96
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 remoteCapabilities:(id)arg4 localNetworkConfig:(id)arg5 streamPreference:(id)arg6;	// IMP=0x0000000000d67d32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

