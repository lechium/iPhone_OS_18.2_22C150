//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSUSafeSaveAssistant : NSObject
{
    NSURL *_saveURL;	// 8 = 0x8
    OITSUTemporaryDirectory *_temporaryDirectory;	// 16 = 0x10
    NSURL *_writeURL;	// 24 = 0x18
}

+ (_Bool)finishWritingToURL:(id)arg1 byMovingOrCopyingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;	// IMP=0x00600000002b4140
+ (void)writeAttributes:(id)arg1 toURL:(id)arg2;	// IMP=0x00600000002b402f
- (void).cxx_destruct;	// IMP=0x00000000002b439f
@property(readonly, nonatomic) NSURL *writeURL; // @synthesize writeURL=_writeURL;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002b3ea9
- (_Bool)endSaveWithSuccess:(_Bool)arg1 addingAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002b3e8d
- (id)initForSavingToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b3cd4
- (id)init;	// IMP=0x00000000002b3bab

@end

