//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSHistoryRideShareItemRequest : NSObject
{
    MISSING_TYPE *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c7dd0
- (void)countWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;	// IMP=0x00000000000c7ba0
- (void)countWithCompletionHandler:(void (^)(long long, NSError *))arg1;	// IMP=0x00000000000c7940
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00000000000c75f0
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x00000000000c7040
- (id)fetchSyncWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c6c40
- (id)fetchSyncAndReturnError:(id *)arg1;	// IMP=0x00000000000c6960
- (id)initWithStore:(id)arg1;	// IMP=0x00000000000c68d0
- (id)init;	// IMP=0x00000000000c6770

@end

