//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface FileEntry : NSObject
{
    NSString *_filePath;	// 8 = 0x8
    unsigned long long _journalNumber;	// 16 = 0x10
    unsigned long long _fileSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000028ea5
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long journalNumber; // @synthesize journalNumber=_journalNumber;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (MISSING_TYPE *)initWithFilePath:journalNumber:fileSize: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000028dd7

@end

