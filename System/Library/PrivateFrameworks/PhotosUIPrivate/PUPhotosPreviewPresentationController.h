//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIPreviewPresentationController.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController
{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000508308
@property(nonatomic) __weak id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate; // @synthesize photosPreviewingDelegate=_photosPreviewingDelegate;
- (void)_revealTransitionDidComplete:(_Bool)arg1;	// IMP=0x000000000050823c

@end
