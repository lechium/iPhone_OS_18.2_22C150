//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageRenderer : NSObject
{
    struct __IOSurface *_surface;	// 8 = 0x8
    long long _width;	// 16 = 0x10
    long long _height;	// 24 = 0x18
    struct {
        unsigned int surfaceIsValid:1;
        unsigned int uses16bpc:1;
    } _flags;	// 32 = 0x20
    CIContext *_context;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000a41d77
- (void)dealloc;	// IMP=0x0000000000a415f6

@end
