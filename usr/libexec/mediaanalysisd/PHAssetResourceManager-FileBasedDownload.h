//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResourceManager.h>

@interface PHAssetResourceManager (FileBasedDownload)
+ (void)vcp_flushFileCache;	// IMP=0x00200000000201c6
+ (void)vcp_flushResourceURL:(id)arg1;	// IMP=0x001000000001ff9e
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 taskID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f63c
+ (void)vcp_createFileCacheDirectoryIfNeeded;	// IMP=0x001000000001f297
+ (id)vcp_fileCacheDirectoryPath;	// IMP=0x001000000001f249
+ (int)vcp_requestInMemoryDownload:(id)arg1 taskID:(unsigned long long)arg2 data:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0010000000163ffb
+ (void)vcp_reportDownloadBytes:(unsigned long long)arg1 taskID:(unsigned long long)arg2;	// IMP=0x0010000000163d55
@end
