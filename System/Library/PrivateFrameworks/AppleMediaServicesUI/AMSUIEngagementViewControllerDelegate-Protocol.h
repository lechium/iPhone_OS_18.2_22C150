//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSDelegateAction, AMSEngagementResult, AMSUIEngagementViewController, NSDictionary, NSError, UIView;
@protocol AMSUIDynamicContentViewProtocol;

@protocol AMSUIEngagementViewControllerDelegate <NSObject>

@optional
- (void)engagementViewController:(AMSUIEngagementViewController *)arg1 didResolveWithResult:(AMSEngagementResult *)arg2 error:(NSError *)arg3;
- (void)engagementViewControllerShouldDismiss:(AMSUIEngagementViewController *)arg1;
- (_Bool)engagementViewController:(AMSUIEngagementViewController *)arg1 handleDynamicDelegateAction:(AMSDelegateAction *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)engagementViewController:(AMSUIEngagementViewController *)arg1 didFinishWithResult:(AMSEngagementResult *)arg2 error:(NSError *)arg3;
- (UIView<AMSUIDynamicContentViewProtocol> *)engagementViewController:(AMSUIEngagementViewController *)arg1 contentViewWithDictionary:(NSDictionary *)arg2 frame:(struct CGRect)arg3;
@end

