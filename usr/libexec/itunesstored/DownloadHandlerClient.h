//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient
{
    NSMutableSet *_disavowedSessionProperties;	// 48 = 0x30
    NSSet *_downloadPhasesToIgnore;	// 56 = 0x38
    long long _handlerIdentifier;	// 64 = 0x40
    _Bool _sessionsNeedPowerAssertion;	// 72 = 0x48
    _Bool _sessionsShouldBlockOtherDownloads;	// 73 = 0x49
}

- (id)description;	// IMP=0x0020000000027f69
@property _Bool sessionsShouldBlockOtherDownloads;
@property _Bool sessionsNeedPowerAssertion;
@property long long handlerIdentifier;
@property(copy) NSSet *downloadPhasesToIgnore;
- (id)resetDisavowedSessionProperties;	// IMP=0x0010000000027aee
@property(readonly) NSSet *disavowedSessionProperties;
- (void)addDisavowedSessionProperties:(id)arg1;	// IMP=0x00100000000276e2
- (void)dealloc;	// IMP=0x001000000002768a
- (id)initWithInputConnection:(id)arg1;	// IMP=0x0010000000027640

@end

