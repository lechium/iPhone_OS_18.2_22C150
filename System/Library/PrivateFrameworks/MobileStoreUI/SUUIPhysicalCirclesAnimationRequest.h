//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SUUIPhysicalCirclesAnimationRequest : NSObject
{
    long long _animationType;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000260734
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002606b4
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000026067a
- (void)finishAnimation;	// IMP=0x0000000000260646

@end
