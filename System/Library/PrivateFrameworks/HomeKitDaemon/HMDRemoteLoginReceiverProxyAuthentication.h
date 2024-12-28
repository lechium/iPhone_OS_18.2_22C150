//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginProxyAuthenticationRequest;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiverProxyAuthentication
{
    HMDRemoteLoginProxyAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x006000000072e0da
- (void).cxx_destruct;	// IMP=0x000000000072e0b1
@property(readonly, nonatomic) HMDRemoteLoginProxyAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticate;	// IMP=0x000000000072ded0
- (void)authenticate;	// IMP=0x000000000072de5f
- (id)description;	// IMP=0x000000000072ddcc
- (void)dealloc;	// IMP=0x000000000072dcc2
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x000000000072dc2b

@end
