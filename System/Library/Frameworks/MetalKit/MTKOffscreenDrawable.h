//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMetalLayer, NSString;
@protocol MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface MTKOffscreenDrawable : NSObject
{
    id <MTLTexture> _texture;	// 8 = 0x8
    unsigned long long _pixelFormat;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
    _Bool _textureDirty;	// 40 = 0x28
    CAMetalLayer *_layer;	// 48 = 0x30
    double _presentedTime;	// 56 = 0x38
    unsigned long long _drawableID;	// 64 = 0x40
    id <MTLDevice> _device;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000113ab
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long drawableID; // @synthesize drawableID=_drawableID;
@property(readonly, nonatomic) double presentedTime; // @synthesize presentedTime=_presentedTime;
@property(readonly) CAMetalLayer *layer; // @synthesize layer=_layer;
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011367
@property(nonatomic) struct CGSize size;
@property(nonatomic) unsigned long long pixelFormat;
@property(readonly) id <MTLTexture> texture;
- (void)presentAtTime:(double)arg1;	// IMP=0x00000000000111a7
- (void)presentAfterMinimumDuration:(double)arg1;	// IMP=0x0000000000011183
- (void)present;	// IMP=0x0000000000011161
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(struct CGSize)arg3 drawableID:(unsigned long long)arg4;	// IMP=0x00000000000110bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
