//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (_QLUtilities)
+ (id)_QLCreateTemporaryReplacementURLForOriginalFileAtURL:(id)arg1 withExtension:(id)arg2 temporaryDirectoryURL:(id *)arg3;	// IMP=0x006000000002c0a7
+ (id)_QLTemporaryURLWithExtension:(id)arg1 openingFileHandle:(int *)arg2 inDirectoryAtURL:(id)arg3;	// IMP=0x006000000002bed3
- (id)ql_realpathURL;	// IMP=0x001000000002c45c
- (id)_qlFastRealpathURL;	// IMP=0x001000000002c32a
- (id)_QLIssueFileExtensionWithSandboxType:(const char *)arg1;	// IMP=0x001000000002be26
- (id)_QLUrlFileSize;	// IMP=0x001000000002b896
- (id)_QLFileSize;	// IMP=0x001000000002b7db
- (_Bool)_QLNeedsDownload;	// IMP=0x001000000002b650
- (_Bool)_QLIsThumbnailableWithError:(id *)arg1;	// IMP=0x001000000002b395
- (_Bool)_QLIsDataLess;	// IMP=0x001000000002b20a
- (_Bool)_QLNeedsCoordination;	// IMP=0x001000000002b19a
@end

