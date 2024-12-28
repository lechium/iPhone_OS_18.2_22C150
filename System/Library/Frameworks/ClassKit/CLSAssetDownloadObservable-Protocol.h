//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/NSObject-Protocol.h>

@class CLSAssetDownloadObserver, NSError;

@protocol CLSAssetDownloadObservable <NSObject>
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
@property(readonly, copy, nonatomic) NSError *downloadError;
@property(readonly, nonatomic) double fractionDownloaded;
- (void)removeDownloadObserver:(CLSAssetDownloadObserver *)arg1;
- (void)addDownloadObserver:(CLSAssetDownloadObserver *)arg1;
@end
