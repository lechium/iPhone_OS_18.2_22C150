//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOFeatureStyleAttributes;

@interface PersonalizedItemStyleAttributesAdornment
{
    GEOFeatureStyleAttributes *_styleAttributes;	// 8 = 0x8
}

+ (id)adornmentWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;	// IMP=0x0040000000cc3b03
+ (id)adornmentWithStyleAttributes:(id)arg1;	// IMP=0x0010000000cc3aef
+ (id)defaultAdornment;	// IMP=0x0010000000cc3aa4
- (void).cxx_destruct;	// IMP=0x0020000000cc40dd
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
- (id)combineAdornment:(id)arg1;	// IMP=0x0010000000cc3eb3
- (id)initWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;	// IMP=0x0010000000cc3bac

@end

