//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUArtwork, MRUNowPlayingInfo, MRUTimeControls, MRUTransportControls, NSString;
@protocol MRUMetadataDataSourceDelegate;

@protocol MRUMetadataDataSource <NSObject>
@property(nonatomic) __weak id <MRUMetadataDataSourceDelegate> delegate;
@property(readonly, nonatomic) MRUTransportControls *transportControls;
@property(readonly, nonatomic) MRUTimeControls *timeControls;
@property(readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo;
@property(readonly, nonatomic) MRUArtwork *artwork;
@property(readonly, copy, nonatomic) NSString *bundleID;
@end

