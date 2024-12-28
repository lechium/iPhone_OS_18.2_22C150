//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUOneUpPresentationHelper, PXAssetReference, PXOneUpPresentation;

__attribute__((visibility("hidden")))
@interface PUPXOneUpPresentationImplementation : NSObject
{
    PUOneUpPresentationHelper *__helper;	// 8 = 0x8
    PXOneUpPresentation *__oneUpPresentation;	// 16 = 0x10
    CDUnknownBlockType _stateChangeHandler;	// 24 = 0x18
}

+ (id)implementationForOneUpPresentation:(id)arg1;	// IMP=0x001000000042d724
- (void).cxx_destruct;	// IMP=0x000000000042d230
@property(copy, nonatomic) CDUnknownBlockType stateChangeHandler; // @synthesize stateChangeHandler=_stateChangeHandler;
@property(readonly, nonatomic) __weak PXOneUpPresentation *_oneUpPresentation; // @synthesize _oneUpPresentation=__oneUpPresentation;
@property(readonly, nonatomic) PUOneUpPresentationHelper *_helper; // @synthesize _helper=__helper;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;	// IMP=0x000000000042cfdf
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x000000000042cf6c
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x000000000042cecb
- (id)oneUpPresentationHelper:(id)arg1 regionOfInterestForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3;	// IMP=0x000000000042ce69
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;	// IMP=0x000000000042ce2c
- (id)oneUpPresentationHelperSearchQueryMatchInfo:(id)arg1;	// IMP=0x000000000042cddc
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;	// IMP=0x000000000042cdd4
- (id)oneUpPresentationHelper:(id)arg1 presentingScrollViewForAssetReference:(id)arg2;	// IMP=0x000000000042cd33
- (id)oneUpPresentationHelperViewHostingTilingView:(id)arg1;	// IMP=0x000000000042ccb9
- (void)oneUpPresentationHelperStateDidChange:(id)arg1;	// IMP=0x000000000042cc3c
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;	// IMP=0x000000000042cb75
- (_Bool)oneUpPresentationHelperWantsShowInLibraryButton:(id)arg1;	// IMP=0x000000000042cb31
- (_Bool)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;	// IMP=0x000000000042caed
- (_Bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;	// IMP=0x000000000042caa9
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x000000000042ca65
- (id)oneUpPresentationHelperOriginalViewController:(id)arg1;	// IMP=0x000000000042ca15
- (id)oneUpPresentationHelperViewController:(id)arg1;	// IMP=0x000000000042c9c5
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x000000000042c94b
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;	// IMP=0x000000000042c8dd
- (void)invalidatePresentingGeometry;	// IMP=0x000000000042c89e
- (void)stopAnimated:(_Bool)arg1;	// IMP=0x000000000042c83a
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x000000000042c78d
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;	// IMP=0x000000000042c718
- (id)previewViewControllerAllowingActions:(_Bool)arg1;	// IMP=0x000000000042c525
- (_Bool)startWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042c083
@property(readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
- (_Bool)canStartAnimated:(_Bool)arg1;	// IMP=0x000000000042bfe4
- (void)registerStateChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042bf1c
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;	// IMP=0x000000000042bed2
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x000000000042be88
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;	// IMP=0x000000000042be3e
- (void)presentingViewControllerViewIsAppearing:(_Bool)arg1;	// IMP=0x000000000042bdf4
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x000000000042bdaa
- (id)_initWithOneUpPresentation:(id)arg1;	// IMP=0x000000000042bc67
- (id)init;	// IMP=0x000000000042bc53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
