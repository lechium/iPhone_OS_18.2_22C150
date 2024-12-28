//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ASCAppDistributionOffer : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    NSString *_appVersionId;	// 56 = 0x38
    NSString *_distributorId;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000a55a
- (void).cxx_destruct;	// IMP=0x000000000000b4e7
@property(readonly, copy, nonatomic) NSString *distributorId; // @synthesize distributorId=_distributorId;
@property(readonly, copy, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ad97
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x000000000000aa75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000aa6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a892
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a562
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 appVersionId:(id)arg7 distributorId:(id)arg8;	// IMP=0x000000000000a3cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
