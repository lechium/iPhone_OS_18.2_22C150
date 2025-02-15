//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKTranscriptLayoutEnvironment, NSArray, NSCollectionLayoutEdgeSpacing, NSCollectionLayoutItem, NSString;

@protocol CKTranscriptItemLayoutProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *layoutGroupIdentifier;
@property(readonly, nonatomic) Class chatItemClass;
- (NSCollectionLayoutEdgeSpacing *)layoutItemSpacingWithEnvironment:(CKTranscriptLayoutEnvironment *)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(NSArray *)arg3 supplementryItems:(NSArray *)arg4 sizeOverride:(struct CGSize)arg5;
- (NSCollectionLayoutItem *)layoutItemWithEnvironment:(CKTranscriptLayoutEnvironment *)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(NSArray *)arg3;
@end

