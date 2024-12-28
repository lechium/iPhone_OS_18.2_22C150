//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/UINavigationControllerDelegate-Protocol.h>

@class ISDialog, SUUIComposeReviewViewController, SUUIReviewMetadata;

@protocol SUUIComposeReviewDelegate <UINavigationControllerDelegate>

@optional
- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 presentDialog:(ISDialog *)arg2;
- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 didSubmitWithEdit:(_Bool)arg2;
- (void)composeReviewViewControllerDidSubmit:(SUUIComposeReviewViewController *)arg1;
- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 didFailWithDialog:(ISDialog *)arg2;
- (void)composeReviewViewControllerDidCancel:(SUUIComposeReviewViewController *)arg1;
- (_Bool)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 shouldSubmitReview:(SUUIReviewMetadata *)arg2;
@end
