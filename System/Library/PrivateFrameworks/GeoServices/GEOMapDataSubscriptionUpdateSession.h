//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionUpdateSession
{
    long long _updateType;	// 8 = 0x8
    NSDictionary *_offlineDataVersions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000147a5be
@property(copy, nonatomic) NSDictionary *offlineDataVersions; // @synthesize offlineDataVersions=_offlineDataVersions;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
- (id)initWithSubscriptions:(id)arg1 downloadMode:(unsigned long long)arg2 updateType:(long long)arg3 auditToken:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;	// IMP=0x000000000147a519

@end

