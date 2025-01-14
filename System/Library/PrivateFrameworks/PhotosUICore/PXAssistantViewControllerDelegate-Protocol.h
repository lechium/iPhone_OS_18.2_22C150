//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSError, PXAlertConfiguration, UIViewController;
@protocol PXAssistantViewController;

@protocol PXAssistantViewControllerDelegate <NSObject>
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 presentAlertWithConfiguration:(PXAlertConfiguration *)arg2 animated:(_Bool)arg3;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 dismissViewControllerAnimated:(_Bool)arg2;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)assistantViewController:(id <PXAssistantViewController>)arg1 pushViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)assistantForAssistantViewController:(id <PXAssistantViewController>)arg1 failedWithError:(NSError *)arg2;
- (void)completeAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
- (void)cancelAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
- (void)stepForwardInAssistantForAssistantViewControllerAsCurrentViewController:(id <PXAssistantViewController>)arg1;
- (void)stepForwardInAssistantForAssistantViewController:(id <PXAssistantViewController>)arg1;
@end

