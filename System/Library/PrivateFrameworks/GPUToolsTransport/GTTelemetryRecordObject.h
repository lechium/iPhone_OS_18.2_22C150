//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTTelemetryRecordObject : NSObject
{
    float _min;	// 8 = 0x8
    float _max;	// 12 = 0xc
    float _average;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000034269
@property(nonatomic) float average; // @synthesize average=_average;
@property(nonatomic) float max; // @synthesize max=_max;
@property(nonatomic) float min; // @synthesize min=_min;
- (id)description;	// IMP=0x00000000000343a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003431e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034271

@end
