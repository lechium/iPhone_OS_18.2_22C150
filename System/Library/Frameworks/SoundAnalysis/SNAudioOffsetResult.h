//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SNAudioOffsetResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000018a21b
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018a1d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018a109
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000189f41
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000189cf1
- (id)init;	// IMP=0x0000000000189bf6
@property(nonatomic) double confidence;
@property(nonatomic) double offset;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end

