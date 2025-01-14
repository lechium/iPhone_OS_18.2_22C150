//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, UIImage, UIPreviewItemController, UIView, UIViewController;

@protocol UIPreviewItemDelegate <NSObject>
- (NSDictionary *)_dataForPreviewItemController:(UIPreviewItemController *)arg1 atPosition:(struct CGPoint)arg2 type:(long long *)arg3;

@optional
- (struct CGRect)_presentationRectForPreviewItemController:(UIPreviewItemController *)arg1;
- (NSArray *)_presentationRectsForPreviewItemController:(UIPreviewItemController *)arg1;
- (UIImage *)_presentationSnapshotForPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_previewItemControllerDidCancelPreview:(UIPreviewItemController *)arg1;
- (void)_previewItemController:(UIPreviewItemController *)arg1 commitPreview:(UIViewController *)arg2;
- (void)_previewItemController:(UIPreviewItemController *)arg1 didDismissPreview:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)_previewItemController:(UIPreviewItemController *)arg1 willPresentPreview:(UIViewController *)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(UIView *)arg4;
- (UIViewController *)_presentedViewControllerForPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_interactionStoppedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_interactionStartedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (_Bool)_interactionShouldBeginFromPreviewItemController:(UIPreviewItemController *)arg1 forPosition:(struct CGPoint)arg2;
@end

