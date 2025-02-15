//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTRendererViewTransitionTechnique, AVTStickerConfiguration, AVTStickerConfigurationReversionContext, AVTView, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface AVTViewTransitionHelper : NSObject
{
    AVTView *_view;	// 8 = 0x8
    AVTStickerConfiguration *_stickerConfiguration;	// 16 = 0x10
    AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;	// 24 = 0x18
    AVTRendererViewTransitionTechnique *_transitionTechnique;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017b9a
- (id)snapshotViewUsingBackgroundColor: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000174c2
- (MISSING_TYPE *)viewBackgroundColor;	// IMP=0x00000000000172d0
- (id)transitionTechnique;	// IMP=0x0000000000017261
- (void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)arg1 toStickerConfiguration:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000001682c
- (void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;	// IMP=0x0000000000016292
- (void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;	// IMP=0x0000000000015c3b
- (void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000001503a
- (void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;	// IMP=0x0000000000014bc1
- (void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;	// IMP=0x0000000000014674
- (void)view_performCrossFadeTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000000013b66

@end

