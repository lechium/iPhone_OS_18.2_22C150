//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class MTLRenderPassDescriptor, NSArray, NSDictionary, SCNNode, SCNScene;
@protocol MTLCommandBuffer, MTLDevice;

@protocol SCNRendererJSExport <JSExport>
+ (id)rendererWithDevice:(id <MTLDevice>)arg1 options:(NSDictionary *)arg2;
+ (id)rendererWithContext:(void *)arg1 options:(NSDictionary *)arg2;
@property(nonatomic) id delegate;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) _Bool temporalAntialiasingEnabled;
@property(nonatomic) _Bool jitteringEnabled;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double nextFrameTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)render;
- (void)updateProbes:(NSArray *)arg1 atTime:(double)arg2;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize)arg2 antialiasingMode:(unsigned long long)arg3;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id <MTLCommandBuffer>)arg2 passDescriptor:(MTLRenderPassDescriptor *)arg3;
- (void)updateAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id <MTLCommandBuffer>)arg3 passDescriptor:(MTLRenderPassDescriptor *)arg4;
@end

