//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoThumbnailOutputInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    AVWeakReference *delegateWeakReference;	// 16 = 0x10
    _Bool didPropagateContents;	// 24 = 0x18
    NSArray *filters;	// 32 = 0x20
    NSArray *smartStyles;	// 40 = 0x28
    struct CGSize thumbnailSize;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x0000000000005055
- (id)init;	// IMP=0x0000000000005026

@end
