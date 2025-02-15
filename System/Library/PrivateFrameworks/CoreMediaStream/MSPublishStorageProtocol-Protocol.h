//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSStorageProtocol-Protocol.h>

@class MSAsset, NSArray, NSURL;
@protocol MSPublishStorageProtocolDelegate;

@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate;
- (void)abort;
- (void)computeHashForAsset:(MSAsset *)arg1;
- (void)publishAssets:(NSArray *)arg1 URL:(NSURL *)arg2;
@end

