//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBInteractiveScreenshotGestureManager, SSScreenCapturerPresentationOptions, SSScreenCapturerScreenshotOptionsCollection;

@protocol SBInteractiveScreenshotGestureManagerDelegate <NSObject>
- (_Bool)interactiveScreenshotGestureManagerShouldPreventGestureRecognition:(SBInteractiveScreenshotGestureManager *)arg1;
- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotWithOptionsCollection:(SSScreenCapturerScreenshotOptionsCollection *)arg2 presentationOptions:(SSScreenCapturerPresentationOptions *)arg3;
- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotPreheatWithPresentationOptions:(SSScreenCapturerPresentationOptions *)arg2;
@end

