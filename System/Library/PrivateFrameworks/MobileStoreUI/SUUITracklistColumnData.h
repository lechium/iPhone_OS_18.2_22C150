//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SUUITracklistColumnData : NSObject
{
    NSArray *_columns;	// 8 = 0x8
    double _interColumnSpacing;	// 16 = 0x10
    double _leftEdgeInset;	// 24 = 0x18
    double _rightEdgeInset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f8c24
@property(nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property(nonatomic) double interColumnSpacing; // @synthesize interColumnSpacing=_interColumnSpacing;
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (id)viewElementsForTrack:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x00000000000f8a89
- (void)enumerateColumnsForTrack:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f873f
- (void)enumerateColumnsForHeader:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f854f
- (id)columnForIdentifier:(long long)arg1;	// IMP=0x00000000000f83f9
- (void)adjustColumnsToFitWidth:(double)arg1;	// IMP=0x00000000000f8001
- (id)initWithRepresentativeTrack:(id)arg1;	// IMP=0x00000000000f7b31
- (id)_initSUUITracklistColumnData;	// IMP=0x00000000000f7ae4

@end

