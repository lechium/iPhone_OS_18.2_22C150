//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface NAWeakZoomable : NSObject
{
    MISSING_TYPE *zoomable;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f8870
- (id)init;	// IMP=0x00000000001f8810
- (id)initWithZoomable:(id)arg1;	// IMP=0x00000000001f8770
- (void)resetZoom;	// IMP=0x00000000001f8bf0
- (void)zoomOut;	// IMP=0x00000000001f8b70
- (void)zoomIn;	// IMP=0x00000000001f8b30
- (void)decreaseTextSize;	// IMP=0x00000000001f8af0
- (void)increaseTextSize;	// IMP=0x00000000001f8ab0
- (_Bool)canResetZoom;	// IMP=0x00000000001f8a00
- (_Bool)canZoomOut;	// IMP=0x00000000001f8970
- (_Bool)canZoomIn;	// IMP=0x00000000001f8930
- (_Bool)canDecreaseTextSize;	// IMP=0x00000000001f88f0
- (_Bool)canIncreaseTextSize;	// IMP=0x00000000001f88b0

@end
