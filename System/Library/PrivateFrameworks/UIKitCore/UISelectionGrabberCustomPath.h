//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UISelectionGrabberCustomPath : NSObject
{
    double _lineWidth;	// 8 = 0x8
    struct CGPoint _topPoint;	// 16 = 0x10
    struct CGPoint _bottomPoint;	// 32 = 0x20
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct CGPoint bottomPoint; // @synthesize bottomPoint=_bottomPoint;
@property(nonatomic) struct CGPoint topPoint; // @synthesize topPoint=_topPoint;
- (id)bezierPathForHostView:(id)arg1 targetView:(id)arg2;	// IMP=0x000000000172cc30
- (id)description;	// IMP=0x000000000172cb85
- (id)summaryDescription;	// IMP=0x000000000172cad7
@property(readonly, nonatomic) struct CGRect boundingEdgeRect;
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) _Bool containsZeroPoint;

@end
