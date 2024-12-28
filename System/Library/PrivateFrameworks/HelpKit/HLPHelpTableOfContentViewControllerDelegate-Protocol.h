//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HelpKit/NSObject-Protocol.h>

@class HLPHelpTableOfContentViewController, HLPHelpTopicItem, NSString;

@protocol HLPHelpTableOfContentViewControllerDelegate <NSObject>
- (HLPHelpTopicItem *)currentHelpTopicItemForTableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewControllerToCContentViewed:(HLPHelpTableOfContentViewController *)arg1 topicID:(NSString *)arg2 topicTitle:(NSString *)arg3 source:(NSString *)arg4 interfaceStyle:(long long)arg5 fromTopicID:(NSString *)arg6 externalURLString:(NSString *)arg7;
- (void)tableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1 showHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)tableOfContentViewControllerShowHelpBookInfo:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewControllerSearchUsed:(HLPHelpTableOfContentViewController *)arg1;
@end
