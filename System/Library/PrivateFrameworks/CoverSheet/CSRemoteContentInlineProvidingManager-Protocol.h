//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentInlineViewController;

@protocol CSRemoteContentInlineProvidingManager <NSObject>
@property(nonatomic, getter=isInlineRemoteContentHidden) _Bool inlineRemoteContentHidden;
- (void)removeInlineRemoteContentWithAnimatedDismissal:(_Bool)arg1;
- (void)presentInlineRemoteContent:(CSRemoteContentInlineViewController *)arg1 animatePresentation:(_Bool)arg2;
@end

