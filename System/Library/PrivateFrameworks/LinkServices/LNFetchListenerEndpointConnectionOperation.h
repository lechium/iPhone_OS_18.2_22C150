//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchListenerEndpointConnectionOperation
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    LNAction *_action;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e5a29
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) LNAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000e58f3
- (void)finishWithXPCListenerEndpoint:(id)arg1 auditTokenData:(id)arg2 resolvedAction:(id)arg3 error:(id)arg4;	// IMP=0x00000000000e57e9
- (void)start;	// IMP=0x00000000000e56aa
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 bundleIdentifier:(id)arg3 action:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e5452

@end

