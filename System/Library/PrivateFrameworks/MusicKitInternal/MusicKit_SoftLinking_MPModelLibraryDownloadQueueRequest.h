//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryDownloadQueueRequest, MPModelLibraryDownloadQueueResponse;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryDownloadQueueRequest : NSObject
{
    MPModelLibraryDownloadQueueRequest *_underlyingDownloadQueueRequest;	// 8 = 0x8
    MPModelLibraryDownloadQueueResponse *_underlyingUpdatedResponse;	// 16 = 0x10
}

+ (id)downloadQueueDidChangeNotificationName;	// IMP=0x004000000000df7e
- (void).cxx_destruct;	// IMP=0x000000000000e228
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e02c
- (void)_handleDownloadQueueDidChangeNotification:(id)arg1;	// IMP=0x000000000000df8b
- (void)dealloc;	// IMP=0x000000000000de2f
- (id)init;	// IMP=0x000000000000dc1e

@end

