//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKView, NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

@interface SpectrumRenderer : NSObject
{
    id <MTLCommandQueue> _commandQueue;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    id <MTLRenderPipelineState> _pipelineState;	// 24 = 0x18
    id <MTLBuffer> _vertexBuffer;	// 32 = 0x20
    MTKView *_metalView;	// 40 = 0x28
}

+ (struct CGPoint)positionForColor: /* Error: Ran out of types for this method. */;	// IMP=0x002000000003ff85
+ (id)colorAtLocation:(struct CGPoint)arg1;	// IMP=0x001000000003fe47
- (void).cxx_destruct;	// IMP=0x0020000000040806
@property(retain, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) id <MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;
@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
- (void)stopCapturing;	// IMP=0x0010000000040727
- (void)startCapturing;	// IMP=0x0010000000040682
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;	// IMP=0x001000000004066d
- (void)drawInMTKView:(id)arg1;	// IMP=0x0010000000040476
- (void)initializeVertexBuffer;	// IMP=0x00100000000403f5
- (void)setupRenderPipeline;	// IMP=0x0010000000040238
- (id)initWithMetal:(id)arg1;	// IMP=0x0010000000040117

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

