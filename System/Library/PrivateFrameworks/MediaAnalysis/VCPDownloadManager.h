//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface VCPDownloadManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_mutex;	// 8 = 0x8
    NSMutableData *_buffer;	// 16 = 0x10
    NSString *_localIdentifier;	// 24 = 0x18
    unsigned long long _length;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 40 = 0x28
    NSURLSessionDataTask *_dataTask;	// 48 = 0x30
    CDUnknownBlockType _cancel;	// 56 = 0x38
}

+ (void)_reportDownload:(unsigned long long)arg1;	// IMP=0x00600000003023d6
+ (unsigned long long)maxSizeBytes;	// IMP=0x00600000003023cb
+ (id)sharedManager;	// IMP=0x0060000000302376
- (void).cxx_destruct;	// IMP=0x0000000000303947
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
- (void)flush;	// IMP=0x00000000003038d3
- (id)requestDownloadOfResource:(id)arg1;	// IMP=0x000000000030266b
- (id)init;	// IMP=0x0000000000302308

@end
