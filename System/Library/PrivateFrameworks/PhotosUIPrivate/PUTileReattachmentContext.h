//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileReattachmentContext : NSObject
{
    _Bool _isZoomingIn;	// 8 = 0x8
    _Bool _isTransitioningOverOneUp;	// 9 = 0x9
    NSMapTable *__tileControllerVelocities;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005d3051
@property(readonly, nonatomic) NSMapTable *_tileControllerVelocities; // @synthesize _tileControllerVelocities=__tileControllerVelocities;
@property(nonatomic, setter=setTransitioningOverOneUp:) _Bool isTransitioningOverOneUp; // @synthesize isTransitioningOverOneUp=_isTransitioningOverOneUp;
@property(nonatomic, setter=setZoomingIn:) _Bool isZoomingIn; // @synthesize isZoomingIn=_isZoomingIn;
- (void)setVelocity:(struct PUDisplayVelocity)arg1 forTileController:(id)arg2;	// IMP=0x00000000005d2f3f
- (struct PUDisplayVelocity)velocityForTileController:(id)arg1;	// IMP=0x00000000005d2e8a

@end

