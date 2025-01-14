//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, CAShapeLayer, NSMapTable, NSMutableSet, NSSet, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CKForceLayoutAnimator : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    NSMutableSet *_nodes;	// 16 = 0x10
    NSMutableSet *_links;	// 24 = 0x18
    NSMapTable *_weights;	// 32 = 0x20
    NSMapTable *_previousCenters;	// 40 = 0x28
    NSMapTable *_fixedNodes;	// 48 = 0x30
    CAShapeLayer *_linesLayer;	// 56 = 0x38
    UIView *_referenceView;	// 64 = 0x40
    double _linkDistance;	// 72 = 0x48
    double _linkStrength;	// 80 = 0x50
    double _friction;	// 88 = 0x58
    double _charge;	// 96 = 0x60
    double _chargeDistance;	// 104 = 0x68
    double _theta;	// 112 = 0x70
    double _gravity;	// 120 = 0x78
    double _alpha;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000002d77a
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double theta; // @synthesize theta=_theta;
@property(nonatomic) double chargeDistance; // @synthesize chargeDistance=_chargeDistance;
@property(nonatomic) double charge; // @synthesize charge=_charge;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double linkStrength; // @synthesize linkStrength=_linkStrength;
@property(nonatomic) double linkDistance; // @synthesize linkDistance=_linkDistance;
@property(readonly, nonatomic) NSSet *links; // @synthesize links=_links;
@property(readonly, nonatomic) NSSet *nodes; // @synthesize nodes=_nodes;
@property(readonly, nonatomic) UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void)tick;	// IMP=0x000000000002d25b
- (void)stop;	// IMP=0x000000000002d209
- (void)start;	// IMP=0x000000000002d084
- (void)releaseNode:(id)arg1;	// IMP=0x000000000002d024
- (void)fixNode:(id)arg1 atPosition:(struct CGPoint)arg2;	// IMP=0x000000000002cf79
- (void)unlinkNode:(id)arg1 fromNode:(id)arg2;	// IMP=0x000000000002cf20
- (void)linkNode:(id)arg1 toNode:(id)arg2;	// IMP=0x000000000002cda1
- (void)removeAllNodes;	// IMP=0x000000000002cd66
- (void)removeNode:(id)arg1;	// IMP=0x000000000002cc8e
- (void)addNode:(id)arg1;	// IMP=0x000000000002cb2e
@property(nonatomic) double lineWidth;
@property(copy, nonatomic) UIColor *lineColor;
- (id)initWithReferenceView:(id)arg1;	// IMP=0x000000000002c774
- (id)init;	// IMP=0x000000000002c760

@end

