//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentView, UIViewController;
@protocol SXComponentInteractionPreviewContext;

@protocol SXComponentInteractionManager <NSObject>
- (void)commitViewController:(UIViewController *)arg1;
- (id <SXComponentInteractionPreviewContext>)previewViewControllerForLocation:(struct CGPoint)arg1;
- (_Bool)hasInteractionForLocation:(struct CGPoint)arg1;

@optional
- (_Bool)accessibilityShouldHandleInteractionForComponentView:(SXComponentView *)arg1;
@end
