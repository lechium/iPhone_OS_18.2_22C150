//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7parsecd15DownloadManager : NSObject
{
    MISSING_TYPE *assembly;	// 8 = 0x8
    MISSING_TYPE *queue;	// 24 = 0x18
    MISSING_TYPE *hasStarted;	// 32 = 0x20
    MISSING_TYPE *resources;	// 40 = 0x28
    MISSING_TYPE *spans;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0010000000072206
- (id)init;	// IMP=0x00100000000721d0
- (void)bagChangeNotificationWithNotification:(id)arg1;	// IMP=0x001000000006dd8d
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000074550
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000072de0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00100000000758b1

@end
