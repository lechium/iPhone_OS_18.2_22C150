//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MADEmbeddingSearchResult : NSObject
{
    NSString *_assetUUID;	// 8 = 0x8
    NSNumber *_distance;	// 16 = 0x10
    long long _metric;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002a2f58
- (void).cxx_destruct;	// IMP=0x00000000002a326d
@property(readonly, nonatomic) long long metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (id)description;	// IMP=0x00000000002a3180
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a30fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a3005
- (id)initWithAssetUUID:(id)arg1 distance:(id)arg2 metric:(long long)arg3;	// IMP=0x00000000002a2f60

@end
