//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class MTLRenderPassDescriptor, NSArray, NSDictionary, VFXNode, VFXWorld;
@protocol MTLCommandBuffer, MTLDevice;

@protocol VFXRendererJSExport <JSExport>
+ (id)rendererWithDevice:(id <MTLDevice>)arg1 options:(NSDictionary *)arg2;
@property(nonatomic) id delegate;
@property(retain, nonatomic) VFXNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) _Bool temporalAntialiasingEnabled;
@property(nonatomic) _Bool jitteringEnabled;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double nextFrameTime;
@property(retain, nonatomic) VFXWorld *world;
- (void)updateProbes:(NSArray *)arg1 atTime:(double)arg2;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id <MTLCommandBuffer>)arg2 passDescriptor:(MTLRenderPassDescriptor *)arg3;
- (void)updateAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1;
@end

