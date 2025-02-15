//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface RMStatusSubscriptionQueryResult
{
    NSDictionary *_lastReceivedDateByKeyPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000080f48
@property(readonly, copy, nonatomic) NSDictionary *lastReceivedDateByKeyPath; // @synthesize lastReceivedDateByKeyPath=_lastReceivedDateByKeyPath;
- (id)initWithQueryResult:(id)arg1 lastReceivedDateByKeyPath:(id)arg2;	// IMP=0x0010000000080e5d
- (id)initWithStatusKeyPaths:(id)arg1 lastReceivedDateByKeyPath:(id)arg2 statusByKeyPath:(id)arg3 errorByKeyPath:(id)arg4;	// IMP=0x0010000000080c03
- (id)init;	// IMP=0x0010000000080bb6

@end

