//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSConfigItem : NSObject
{
    long long _buckets;	// 8 = 0x8
    long long _filterShardCount;	// 16 = 0x10
    NSNumber *_itemTTL;	// 24 = 0x18
    NSURL *_filterMegaShardURL;	// 32 = 0x20
    NSDate *_expirationDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000064976
+ (id)keysRequestedForCloudKitFetch;	// IMP=0x001000000006084b
- (void).cxx_destruct;	// IMP=0x00000000000649f5
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSURL *filterMegaShardURL; // @synthesize filterMegaShardURL=_filterMegaShardURL;
@property(retain, nonatomic) NSNumber *itemTTL; // @synthesize itemTTL=_itemTTL;
@property(nonatomic) long long filterShardCount; // @synthesize filterShardCount=_filterShardCount;
@property(nonatomic) long long buckets; // @synthesize buckets=_buckets;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000064837
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000064787
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000646ac
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy) NSString *description;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;	// IMP=0x000000000006445a
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;	// IMP=0x0000000000064434
- (id)_extractItemTTLFromConfigRecord:(id)arg1;	// IMP=0x0000000000060ff0
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000060cde
- (id)initWithJSONObj:(id)arg1;	// IMP=0x00000000000608d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

