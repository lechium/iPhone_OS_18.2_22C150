//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ASCScreenshotDisplayConfiguration : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (double)defaultCornerRadius;	// IMP=0x0010000000064bb5
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000064853
+ (id)defaultConfiguration;	// IMP=0x00100000000647bc
- (void).cxx_destruct;	// IMP=0x0000000000064cdb
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
@property(readonly, nonatomic) unsigned long long maskedCorners;
@property(readonly, nonatomic) NSString *cornerCurve;
- (double)cornerRadiusForSize:(struct CGSize)arg1;	// IMP=0x0000000000064bc3
- (unsigned long long)hash;	// IMP=0x0000000000064b3a
- (id)description;	// IMP=0x0000000000064a9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006498a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006497f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006490f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006485b
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x00000000000647e0

@end

