//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (ReminderKitInternal)
- (_Bool)rem_isEmptyDirectoryAtURL:(id)arg1 skipsHiddenFiles:(_Bool)arg2;	// IMP=0x00700000000bec40
- (_Bool)rem_fileExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x00700000000be870
- (_Bool)rem_fileExistsAtURL:(id)arg1;	// IMP=0x00700000000be740
- (_Bool)rem_createDirectoryIfNecessaryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00700000000be610
- (id)rem_createProtectedTemporaryDirectoryIfNeededWithError:(id *)arg1;	// IMP=0x0070000000270ed0
@end

