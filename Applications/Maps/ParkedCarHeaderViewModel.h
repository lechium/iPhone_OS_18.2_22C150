//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceHeaderViewModel.h>

@class NSString, ParkedCar;

@interface ParkedCarHeaderViewModel : MUPlaceHeaderViewModel
{
    ParkedCar *_parkedCar;	// 8 = 0x8
    NSString *_subtitleText;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007db12f
- (id)placeSecondaryName;	// IMP=0x00100000007db10c
- (id)placeName;	// IMP=0x00100000007db0ef
- (id)initWithParkedCar:(id)arg1 subtitleText:(id)arg2;	// IMP=0x00100000007db013

@end
