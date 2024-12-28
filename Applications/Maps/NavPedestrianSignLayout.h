//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NavPedestrianSignLayout
{
}

+ (id)sharedPedestrianSignLayout;	// IMP=0x0040000000ddf30f
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0040000000ddf6b1
- (double)shieldViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddf67a
- (double)maneuverViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddf643
- (struct CGSize)maneuverViewSizeForSign:(id)arg1;	// IMP=0x0010000000ddf604
- (double)navSignView:(id)arg1 alternateFontLineSpacingForMajorText:(_Bool)arg2;	// IMP=0x0010000000ddf5cd
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ddf50c
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ddf44b
- (double)labelBaselineToInlineShieldTopForSign:(id)arg1;	// IMP=0x0010000000ddf414
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000ddf3dd
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000ddf3a6
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddf36f
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithLongestAlternativeForMajorText:(_Bool)arg2;	// IMP=0x0010000000ddf364

@end
