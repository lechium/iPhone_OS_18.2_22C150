//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@protocol MCMFileManagerChecksVolumeCapabilities
- (_Bool)checkFileSystemAtURL:(NSURL *)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)checkFileSystemAtURL:(NSURL *)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)compareVolumeForURL:(NSURL *)arg1 versusURL:(NSURL *)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;
@end
