//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC8MapsSync13MapsSyncRange, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSFavoriteItemRequest : NSObject
{
    MISSING_TYPE *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008a70
- (void)countWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;	// IMP=0x0000000000008700
- (void)countWithCompletionHandler:(void (^)(long long, NSError *))arg1;	// IMP=0x0000000000008310
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x0000000000007f60
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x00000000000079b0
- (id)fetchSyncWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000075b0
- (id)fetchSyncAndReturnError:(id *)arg1;	// IMP=0x00000000000072d0
- (id)initWithStore:(id)arg1;	// IMP=0x0000000000007240
- (id)init;	// IMP=0x0000000000007100
- (void)fetchWithSearchTerm:(NSString *)arg1 sortDescriptors:(NSArray *)arg2 range:(_TtC8MapsSync13MapsSyncRange *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;	// IMP=0x0000000000127cc0

@end

