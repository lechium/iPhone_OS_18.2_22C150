//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIBezierPath;

@interface CarImpulsePanningDynamicItem : NSObject
{
    struct CGPoint _center;	// 8 = 0x8
    struct CGRect _bounds;	// 24 = 0x18
    struct CGAffineTransform _transform;	// 56 = 0x38
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (MISSING_TYPE *)initWithBounds: /* Error: Ran out of types for this method. */;	// IMP=0x001000000078a270

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIBezierPath",?,R,N

@property(readonly, nonatomic) unsigned long long collisionBoundsType;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

