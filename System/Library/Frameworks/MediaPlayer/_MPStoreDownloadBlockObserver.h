//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPStoreDownload, NSString;

__attribute__((visibility("hidden")))
@interface _MPStoreDownloadBlockObserver : NSObject
{
    CDUnknownBlockType _didFinishDownloadHandler;	// 8 = 0x8
    CDUnknownBlockType _didFinishPurchaseHandler;	// 16 = 0x10
    MPStoreDownload *_download;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000350ffa
@property(readonly, nonatomic) MPStoreDownload *download; // @synthesize download=_download;
@property(copy, nonatomic) CDUnknownBlockType didFinishPurchaseHandler; // @synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishDownloadHandler; // @synthesize didFinishDownloadHandler=_didFinishDownloadHandler;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;	// IMP=0x0000000000350e5c
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x0000000000350cda
- (id)initWithDownload:(id)arg1;	// IMP=0x0000000000350bca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

