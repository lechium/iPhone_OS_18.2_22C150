//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface FigMetalUtils : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000026272
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id)texture2DFromBuffer:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4 offset:(unsigned long long)arg5 usage:(unsigned long long)arg6;	// IMP=0x0000000000026006
- (unsigned long long)computeLinearTextureStride:(unsigned long long)arg1 format:(unsigned long long)arg2;	// IMP=0x0000000000025fa5
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;	// IMP=0x0000000000025f6b
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000025f00

@end
