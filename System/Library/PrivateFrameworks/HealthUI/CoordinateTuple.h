//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKAnnotatedHorizontalLineBlockCoordinate;

__attribute__((visibility("hidden")))
@interface CoordinateTuple : NSObject
{
    _HKAnnotatedHorizontalLineBlockCoordinate *_coordinate;	// 8 = 0x8
    _HKAnnotatedHorizontalLineBlockCoordinate *_originalCoordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029c41f
@property(retain, nonatomic) _HKAnnotatedHorizontalLineBlockCoordinate *originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
@property(retain, nonatomic) _HKAnnotatedHorizontalLineBlockCoordinate *coordinate; // @synthesize coordinate=_coordinate;

@end
