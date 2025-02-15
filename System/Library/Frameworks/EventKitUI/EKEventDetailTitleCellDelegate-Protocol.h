//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEventDetailTitleCell, NSArray, NSDate, UIView, UIViewController;

@protocol EKEventDetailTitleCellDelegate
- (void)titleCell:(EKEventDetailTitleCell *)arg1 requestPresentShareSheetWithActivityItems:(NSArray *)arg2 withPopoverSourceView:(UIView *)arg3;
- (_Bool)titleCellShouldPresentShareSheet:(EKEventDetailTitleCell *)arg1;
- (void)refreshForHeightChange;
- (_Bool)showsDetectedConferenceItem;
- (UIViewController *)owningViewController;
- (_Bool)minimalMode;
- (NSDate *)proposedTime;
- (void)predictionWasActedOn;
- (void)previousButtonPressed;
- (void)nextButtonPressed;
- (_Bool)shouldShowPreviousButton;
- (_Bool)shouldShowNextButton;
- (void)editButtonPressed;
- (_Bool)shouldShowEditButtonInline;
@end

