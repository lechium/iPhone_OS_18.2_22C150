//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceSectionController.h>

@class ParkedCar;

@interface ParkedCarSectionController : MUPlaceSectionController
{
    ParkedCar *_parkedCar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000080fb35
@property(retain, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
- (void)updateFromParkedCar;	// IMP=0x001000000080fb1e
- (id)mapItem;	// IMP=0x001000000080faaa
- (id)initWithParkedCar:(id)arg1;	// IMP=0x001000000080fa11

@end
