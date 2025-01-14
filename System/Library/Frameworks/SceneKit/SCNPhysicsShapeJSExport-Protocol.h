//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNGeometry, SCNNode;

@protocol SCNPhysicsShapeJSExport <JSExport>
+ (id)shapeWithShapes:(NSArray *)arg1 transforms:(NSArray *)arg2;
+ (id)shapeWithNode:(SCNNode *)arg1 options:(NSDictionary *)arg2;
+ (id)shapeWithGeometry:(SCNGeometry *)arg1 options:(NSDictionary *)arg2;
@property(readonly, nonatomic) NSArray *transforms;
@property(readonly, nonatomic) id sourceObject;
@property(readonly, nonatomic) NSDictionary *options;
- (id)copy;
@end

