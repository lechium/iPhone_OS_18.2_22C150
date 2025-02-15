//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneLibrary/NSObject-Protocol.h>

@class NSArray, SSDownloadManager;

@protocol SSDownloadManagerObserver <NSObject>

@optional
- (void)downloadManagerNetworkUsageDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerActiveDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg1 downloadStatesDidChange:(NSArray *)arg2;
@end

