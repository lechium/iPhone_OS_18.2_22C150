//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUCropGestureHandler;

@protocol PUCropGestureHandlerDelegate <NSObject>
- (void)didEndTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)didTrackWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)didBeginTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)willBeginTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;
@end
