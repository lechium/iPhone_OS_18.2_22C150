//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MKServerFormattedString_Convenience)
+ (id)_mapkit_shortenedURLStringForFullURLString:(id)arg1;	// IMP=0x0080000000128fc1
+ (id)_mapkit_commaListDelimiter;	// IMP=0x0080000000128f4a
+ (id)_mapkit_formattedStringForCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0080000000128c2c
+ (id)_mapkit_voiceOverLocalizedDistanceStringWithMeters:(unsigned int)arg1;	// IMP=0x0080000000128ba6
+ (id)_mapkit_localizedDistanceStringWithMeters:(unsigned int)arg1 abbreviated:(_Bool)arg2;	// IMP=0x0080000000128b19
+ (id)_mapkit_formattedStringForFloatingPointNumber:(id)arg1;	// IMP=0x008000000012899a
+ (id)_mapkit_formattedStringForFloat:(double)arg1;	// IMP=0x0080000000128934
- (id)mkServerFormattedString;	// IMP=0x00100000000bd2cd
- (id)_mapkit_componentsSeparatedFromCommaDelimitedList;	// IMP=0x0010000000128f5b
- (double)_mapkit_cgFloatValue;	// IMP=0x0010000000129808
@end
