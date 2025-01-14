//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class WKContextMenuElementInfo, _SFReaderViewController;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol SFReaderViewControllerDelegate <NSObject>
- (void)readerViewController:(_SFReaderViewController *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)readerViewController:(_SFReaderViewController *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)readerViewController:(_SFReaderViewController *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)contextMenuConfigurationForReaderViewController:(_SFReaderViewController *)arg1 element:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
@end

