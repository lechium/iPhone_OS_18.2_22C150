//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIView, UIViewController, VKAnalyticsEvent, VKCBaseDataDetectorElement, VKCImageTextSelectionView, VKCVisualSearchResultItem, VKTextRange;
@protocol RVTextQueryProtocol;

@protocol VKCImageTextSelectionViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForTextSelectionView:(VKCImageTextSelectionView *)arg1;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 prepareForCalloutAction:(SEL)arg2 completion:(void (^)(void))arg3;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 analyticsEventOccured:(VKAnalyticsEvent *)arg2;
- (void)generateTextualVisualSearchResultForQueryInfo:(id <RVTextQueryProtocol>)arg1 completionHandler:(void (^)(_Bool, MADVITextLookupResult *, NSError *))arg2;
- (VKCVisualSearchResultItem *)textSelectionView:(VKCImageTextSelectionView *)arg1 closestVisualSearchItemForRange:(VKTextRange *)arg2;
- (void)triggerTapToRadar;
- (_Bool)textSelectionView:(VKCImageTextSelectionView *)arg1 shouldHandleShareWithRanges:(NSArray *)arg2 boundingRect:(struct CGRect)arg3 selectedText:(NSString *)arg4 selectedAttributedText:(NSAttributedString *)arg5;
- (NSAttributedString *)textSelectionView:(VKCImageTextSelectionView *)arg1 updateAttributedStringForCopy:(NSAttributedString *)arg2;
- (NSString *)textSelectionView:(VKCImageTextSelectionView *)arg1 updateStringForCopy:(NSString *)arg2;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 boundsDidChangeFromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 selectionDidChange:(VKTextRange *)arg2;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 requestsDataDetectorActivationAtPoint:(struct CGPoint)arg2;
- (_Bool)textSelectionView:(VKCImageTextSelectionView *)arg1 dataDetectorExistsAtPoint:(struct CGPoint)arg2;
- (_Bool)textSelectionView:(VKCImageTextSelectionView *)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (UIView *)viewForImageSnapshotForTextSelectionView:(VKCImageTextSelectionView *)arg1;
- (NSArray *)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(VKCImageTextSelectionView *)arg1;
- (VKCBaseDataDetectorElement *)dataDetectorElementAtPoint:(struct CGPoint)arg1 fromTextSelectionView:(VKCImageTextSelectionView *)arg2;
@end

