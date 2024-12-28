//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessHoursAndDistanceRichText
{
    _Bool _businessHoursResolved;	// 16 = 0x10
    _Bool _distanceResolved;	// 17 = 0x11
    NSString *_hoursString;	// 24 = 0x18
    UIColor *_hoursColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001cde3c
@property(retain) UIColor *hoursColor; // @synthesize hoursColor=_hoursColor;
@property(retain) NSString *hoursString; // @synthesize hoursString=_hoursString;
@property(getter=isDistanceResolved) _Bool distanceResolved; // @synthesize distanceResolved=_distanceResolved;
@property(getter=isBusinessHoursResolved) _Bool businessHoursResolved; // @synthesize businessHoursResolved=_businessHoursResolved;
- (_Bool)isRichTextResolved;	// IMP=0x00000000001cdd71
- (void)resolveDistanceNotFound;	// IMP=0x00000000001cdd25
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;	// IMP=0x00000000001cdc6a
- (void)updateFormattedTextForLines:(id)arg1;	// IMP=0x00000000001cd8e4
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;	// IMP=0x00000000001cd4ee

@end
