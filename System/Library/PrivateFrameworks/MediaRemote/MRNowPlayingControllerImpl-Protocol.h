//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRNowPlayingControllerConfiguration, MRNowPlayingControllerDestination, MRNowPlayingControllerHelper;

@protocol MRNowPlayingControllerImpl <NSObject>
@property(readonly, copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property(readonly, copy, nonatomic) MRNowPlayingControllerDestination *destination;
@property(retain, nonatomic) MRNowPlayingControllerHelper *helper;
- (void)destinationWithCompletion:(void (^)(MRPlayerPath *, NSError *))arg1;
- (void)beginLoadingUpdates;
- (id)initWithConfiguration:(MRNowPlayingControllerConfiguration *)arg1;
@end

