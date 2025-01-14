//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@protocol MCMFileManagerChecksExistence
- (_Bool)itemDoesNotExistAtURL:(NSURL *)arg1;
- (_Bool)itemAtURL:(NSURL *)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;
- (_Bool)itemAtURL:(NSURL *)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)itemAtURL:(NSURL *)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)itemExistsAtURL:(NSURL *)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)itemAtURL:(NSURL *)arg1 exists:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)itemExistsAtURL:(NSURL *)arg1;
@end

