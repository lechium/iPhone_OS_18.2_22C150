//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiatorProxyAuthentication
{
    NSDictionary *_authResults;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x006000000017a465
- (void).cxx_destruct;	// IMP=0x000000000017a3aa
@property(readonly, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
- (void)_authenticate;	// IMP=0x0000000000179e03
- (void)authenticate;	// IMP=0x0000000000179d92
- (id)description;	// IMP=0x0000000000179d26
- (void)dealloc;	// IMP=0x0000000000179c1c
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6;	// IMP=0x0000000000179b85

@end
