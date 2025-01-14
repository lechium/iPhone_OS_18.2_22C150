//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSharedProfileAnimationGenerator : NSObject
{
}

+ (id)log;	// IMP=0x008000000032cfe4
- (void)applyBlurFilterToLayer:(id)arg1 inputRadius:(double)arg2;	// IMP=0x000000000032ed00
- (id)springAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 stiffness:(double)arg4 damping:(double)arg5 mass:(double)arg6;	// IMP=0x000000000032ebc9
- (id)peekABooFinalSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x000000000032eb9c
- (id)peekABooIntermediateSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x000000000032eb6f
- (id)coinFlipSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x000000000032eb42
- (void)performPeekABooAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000032de4b
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toAvatarImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000032d3f0
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000032d23d
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toContact:(id)arg2 rightToLeft:(_Bool)arg3 avatarSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000032d040

@end

