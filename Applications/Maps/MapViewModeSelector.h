//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISegmentedControl.h>

@class NSArray;

@interface MapViewModeSelector : UISegmentedControl
{
    _Bool _lastLayoutWidthFits;	// 8 = 0x8
    NSArray *_orderedViewModes;	// 16 = 0x10
    double _lastLayoutWidth;	// 24 = 0x18
    NSArray *_desiredViewModes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004462e0
@property(retain, nonatomic) NSArray *desiredViewModes; // @synthesize desiredViewModes=_desiredViewModes;
@property(nonatomic) _Bool lastLayoutWidthFits; // @synthesize lastLayoutWidthFits=_lastLayoutWidthFits;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(retain, nonatomic) NSArray *orderedViewModes; // @synthesize orderedViewModes=_orderedViewModes;
- (_Bool)updateSegmentsIfNeededToFitWidth:(double)arg1;	// IMP=0x00100000004461a7
@property(nonatomic) long long selectedViewMode;
- (id)initWithDesiredViewModes:(id)arg1;	// IMP=0x0010000000445a45
- (id)init;	// IMP=0x0010000000445a2c

@end

