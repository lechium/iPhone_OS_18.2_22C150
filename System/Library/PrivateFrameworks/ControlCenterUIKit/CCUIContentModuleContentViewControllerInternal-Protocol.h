//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>

@protocol CCUIContentModuleContentViewControllerInternal <CCUIContentModuleContentViewController>

@optional
@property(nonatomic) _Bool supportsAccessibilityContentSizeCategories;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)requestAuthenticationForTransitionToExpandedContentModuleWithCompletionHandler:(void (^)(_Bool))arg1;
- (_Bool)shouldRequestAuthenticationForTransitionToExpandedContent;
- (void)willResignActive;
- (void)willBecomeActive;
@end

