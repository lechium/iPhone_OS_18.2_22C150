//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC18ActivityUIServices26ActivityItemMetricsRequest;

@interface _TtC18ActivityUIServices28SystemApertureMetricsRequest : NSObject
{
    MISSING_TYPE *_expandedMetricsRequest;	// 8 = 0x8
    MISSING_TYPE *_compactLeadingMetricsRequest;	// 16 = 0x10
    MISSING_TYPE *_compactTrailingMetricsRequest;	// 24 = 0x18
    MISSING_TYPE *_minimalMetricsRequest;	// 32 = 0x20
    MISSING_TYPE *obstructionSize;	// 40 = 0x28
    MISSING_TYPE *obstructionTopMargin;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000016b30
- (void).cxx_destruct;	// IMP=0x0000000000016fb0
- (id)init;	// IMP=0x0000000000016f50
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016ec0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016e00
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000016ae0
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000169b0
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000168e0
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000163c0
@property(nonatomic, readonly) long long hash;
- (id)initWithObstructionSize:(struct CGSize)arg1 expandedMetricsRequest:(id)arg2 compactLeadingMetricsRequest:(id)arg3 compactTrailingMetricsRequest:(id)arg4 minimalMetricsRequest:(id)arg5;	// IMP=0x0000000000015ea0
- (id)initWithObstructionSize:(struct CGSize)arg1 obstructionTopMargin:(double)arg2 expandedMetricsRequest:(id)arg3 compactLeadingMetricsRequest:(id)arg4 compactTrailingMetricsRequest:(id)arg5 minimalMetricsRequest:(id)arg6;	// IMP=0x0000000000015ce0
@property(nonatomic) double obstructionTopMargin; // @synthesize obstructionTopMargin;
@property(nonatomic) struct CGSize obstructionSize; // @synthesize obstructionSize;
@property(nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *minimalMetricsRequest;
@property(nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property(nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property(nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *expandedMetricsRequest;

@end

