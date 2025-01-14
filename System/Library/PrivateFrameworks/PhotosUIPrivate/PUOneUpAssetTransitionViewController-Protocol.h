//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUAssetTransitionInfo, PUOneUpAssetTransitionContext;
@protocol PUOneUpAssetTransition;

@protocol PUOneUpAssetTransitionViewController <NSObject>

@optional
- (PUAssetTransitionInfo *)createAssetTransitionInfo;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionDidEnd:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionWillBegin:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 animateTransitionWithContext:(PUOneUpAssetTransitionContext *)arg2 duration:(double)arg3 completion:(void (^)(_Bool))arg4;
- (PUAssetTransitionInfo *)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 adjustTransitionInfo:(PUAssetTransitionInfo *)arg2;
- (void)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 requestTransitionContextWithCompletion:(void (^)(PUOneUpAssetTransitionContext *))arg2 options:(unsigned long long)arg3;
- (void)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 requestTransitionContextWithCompletion:(void (^)(PUOneUpAssetTransitionContext *))arg2;
@end

