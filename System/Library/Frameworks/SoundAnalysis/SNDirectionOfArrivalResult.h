//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007ef37
- (void).cxx_destruct;	// IMP=0x000000000007f22f
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007eeec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ee17
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007ec3b
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000007e9ef
- (id)init;	// IMP=0x000000000007e8d0
@property(nonatomic, copy) NSArray *spatialSpectrum;
@property(nonatomic) float elevation;
@property(nonatomic) float azimuth;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end
