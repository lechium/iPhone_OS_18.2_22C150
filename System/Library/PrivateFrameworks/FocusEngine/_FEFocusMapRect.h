//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _FECoordinateSpace;

__attribute__((visibility("hidden")))
@interface _FEFocusMapRect : NSObject
{
    id <_FECoordinateSpace> _coordinateSpace;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000231de
@property(readonly, nonatomic) __weak id <_FECoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy) NSString *description;
- (id)intersectionWithRegion:(id)arg1 inSnapshot:(id)arg2;	// IMP=0x0000000000022ee8
- (_Bool)intersectsRegion:(id)arg1 inSnapshot:(id)arg2;	// IMP=0x0000000000022d87
- (_Bool)intersectsRect:(struct CGRect)arg1;	// IMP=0x0000000000022b78
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000022aff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

