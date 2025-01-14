//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/AVTObjectViewController-Protocol.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTViewSession;
@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTViewCarouselLayout;

@protocol AVTAvatarDisplayingController <AVTObjectViewController>
@property(nonatomic) __weak id <AVTAvatarDisplayingControllerDelegate> delegate;
- (void)displayAvatarForRecord:(id <AVTAvatarRecord>)arg1 animated:(_Bool)arg2;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)useAVTViewFromSession:(AVTViewSession *)arg1 withLayout:(id <AVTViewCarouselLayout>)arg2;
- (void)prepareViewWithLayout:(id <AVTViewCarouselLayout>)arg1;
- (void)reloadData;
- (id)initWithDataSource:(AVTAvatarRecordDataSource *)arg1 environment:(AVTUIEnvironment *)arg2;
@end

