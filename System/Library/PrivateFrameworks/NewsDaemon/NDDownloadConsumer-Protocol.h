//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsDaemon/NSObject-Protocol.h>

@class FCContentArchive, NDDownloadRequest, NSError;

@protocol NDDownloadConsumer <NSObject>
- (void)downloadFinishedForRequest:(NDDownloadRequest *)arg1 error:(NSError *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 contentArchive:(FCContentArchive *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 progress:(double)arg2;
@end

