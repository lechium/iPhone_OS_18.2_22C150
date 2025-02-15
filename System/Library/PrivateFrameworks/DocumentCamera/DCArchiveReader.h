//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCArchiveReader : NSObject
{
    struct archive *_archive;	// 8 = 0x8
    _Bool _overwrite;	// 16 = 0x10
    _Bool _writesTemporaryFilesInsideDestination;	// 17 = 0x11
    _Bool _skipsInvisibleHeaders;	// 18 = 0x12
    NSString *_sourcePath;	// 24 = 0x18
    NSString *_destinationPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001cdcc
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) _Bool skipsInvisibleHeaders; // @synthesize skipsInvisibleHeaders=_skipsInvisibleHeaders;
@property(nonatomic) _Bool writesTemporaryFilesInsideDestination; // @synthesize writesTemporaryFilesInsideDestination=_writesTemporaryFilesInsideDestination;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;	// IMP=0x000000000001cb83
- (_Bool)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001c5c4
- (_Bool)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001bd01
- (id)temporaryDirectory;	// IMP=0x000000000001bbde
- (_Bool)unarchiveResultURLs:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001ba38
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;	// IMP=0x000000000001b96a

@end

