//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI19LibDownloadObserver : NSObject
{
    MISSING_TYPE *_hasDownloadInProgress;	// 2336805887 = 0x8b48d3ff
    MISSING_TYPE *downloadObservationCallbackMap;	// 15698020 = 0xef8864
    MISSING_TYPE *ssDownloadManager;	// 1096565083 = 0x415c415b
}

- (void).cxx_destruct;	// IMP=0x00000000004f6c35
- (void)dealloc;	// IMP=0x00000000004f6c18
- (id)init;	// IMP=0x00000000004f63a4
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;	// IMP=0x00000000004f7dcd
- (void)downloadManagerDownloadsDidChange:(id)arg1;	// IMP=0x00000000004f7ea4

@end
