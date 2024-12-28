//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString;
@protocol ASCOffer;

@interface ASCStatefulOffer : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    id <ASCOffer> _defaultOffer;	// 56 = 0x38
    id <ASCOffer> _buyOffer;	// 64 = 0x40
    id <ASCOffer> _openOffer;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000026ffd
- (void).cxx_destruct;	// IMP=0x0020000000028127
@property(readonly, copy, nonatomic) id <ASCOffer> openOffer; // @synthesize openOffer=_openOffer;
@property(readonly, copy, nonatomic) id <ASCOffer> buyOffer; // @synthesize buyOffer=_buyOffer;
@property(readonly, copy, nonatomic) id <ASCOffer> defaultOffer; // @synthesize defaultOffer=_defaultOffer;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000027899
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x001000000002751f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000027514
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000027308
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000027005
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 defaultOffer:(id)arg7 buyOffer:(id)arg8 openOffer:(id)arg9;	// IMP=0x0010000000026e4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
