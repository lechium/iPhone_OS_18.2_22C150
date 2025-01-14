//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MLDDatabaseFileDiagnostic : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
    NSDictionary *_fileAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000085dc
@property(readonly, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)description;	// IMP=0x001000000000854b
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x001000000000847c

@end

